#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int parseHex(const char* const hexString)
{
    // 处理空指针或空字符串的情况
    if (hexString == nullptr || strlen(hexString) == 0) {
        return 0;
    }
    int result = 0;
    int length = strlen(hexString);

    for (int i = 0; i < length; i++) {
        char currentChar = hexString[i];
        int digitValue;

        // 将字符转换为对应的数值
        if (currentChar >= '0' && currentChar <= '9') {
            digitValue = currentChar - '0';
        }
        else if (currentChar >= 'A' && currentChar <= 'F') {
            digitValue = 10 + (currentChar - 'A');
        }
        else if (currentChar >= 'a' && currentChar <= 'f') {
            digitValue = 10 + (currentChar - 'a');
        }
        else {
            return 0;
        }

        // 将当前位的值累加到结果中
        result = result * 16 + digitValue;
    }

    return result;
}

int main() {
    // 测试用例
    cout << "parseHex(\"A5\") = " << parseHex("A5") << endl;      // 应该输出165
    cout << "parseHex(\"FF\") = " << parseHex("FF") << endl;      // 应该输出255
    cout << "parseHex(\"10\") = " << parseHex("10") << endl;      // 应该输出16
    cout << "parseHex(\"1A3\") = " << parseHex("1A3") << endl;    // 应该输出419
    cout << "parseHex(\"7F\") = " << parseHex("7F") << endl;      // 应该输出127

    // 测试边界情况
    cout << "parseHex(\"\") = " << parseHex("") << endl;           // 空字符串
    cout << "parseHex(\"G5\") = " << parseHex("G5") << endl;      // 非法字符

    return 0;
}