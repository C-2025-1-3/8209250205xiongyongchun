#include <iostream>
#include <string>
using namespace std;

int indexOf(const char s1[], const char s2[]) {

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // 特殊情况处理：s1为空串或长度大于s2
    if (len1 == 0 || len1 > len2) {
        return -1;
    }

    // 暴力匹配：遍历s2的所有可能起始位置
    for (int i = 0; i <= len2 - len1; ++i) {
        bool match = true;
        for (int j = 0; j < len1; ++j) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i; // 找到匹配，返回起始下标
        }
    }

    return -1; // 未找到匹配
}



int main() {
    char s1[100], s2[100];
    cout << "请输入子串s1：";
    cin >> s1;
    cout << "请输入母串s2：";
    cin >> s2;

    int result = indexOf(s1, s2);
    if (result != -1) {
        cout << "s1是s2的子串，起始下标为：" << result << endl;
    }
    else {
        cout << "s1不是s2的子串" << endl;
    }

    return 0;
}