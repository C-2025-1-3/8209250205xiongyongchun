#include <iostream>
#include <cstring>
#include <cctype> 
using namespace std;

// 统计每个字母出现次数的函数
void count(const char s[], int counts[]) {
    //初始化counts(放在主函数初始化也行)
    for (int i = 0; i < 26; ++i) {
        counts[i] = 0;
    }
    // 2. 遍历字符串的每个字符
    int len = strlen(s);
    for (int i = 0; i < len; ++i) {
        char c = tolower(s[i]);  // 转换为小写
        if (c >= 'a' && c <= 'z') {  // 仅统计字母字符
            counts[c - 'a']++;  // 映射到0-25的索引（a对应0，b对应1...z对应25）
        }
    }
}

// 测试程序
int main() {
    char input[1000];  // 假设输入字符串长度不超过999
    cout << "请输入字符串：";
    cin.getline(input, 1000);  // 读取整行输入（包括空格）

    int counts[26] = { 0 };  // 存储26个字母的计数
    count(input, counts);  // 调用count函数

    // 输出非零的计数结果
    cout << "字母出现次数（非零）：" << endl;
    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            cout << (char)('a' + i) << ": " << counts[i] << endl;
        }
    }
    return 0;
}
