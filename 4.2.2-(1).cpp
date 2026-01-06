#include <iostream>
#include <string>
using namespace std;

int indexof(const char* s1, const char* s2) {
    if (s1 == nullptr || s2 == nullptr) return -1;
    if (strlen(s1) == 0) return 0;

    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);

    if (len1 > len2) return -1;

    for (size_t i = 0; i <= len2 - len1; i++) {
        bool match = true;
        for (size_t j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return static_cast<int>(i);
        }
    }

    return -1;
}

int main() {
    char s1[100], s2[100];

    cout << "请输入子串 s1: ";
    cin.getline(s1, 100);

    cout << "请输入主串 s2: ";
    cin.getline(s2, 100);

    int result = indexof(s1, s2);

    if (result != -1) {
        cout << "'" << s1 << "' 在 '" << s2 << "' 中第一次出现的位置是: " << result << endl;
    }
    else {
        cout << "'" << s1 << "' 不是 '" << s2 << "' 的子串" << endl;
    }

    return 0;
}