#include <iostream>
using namespace std;
int Count(int day) {
    if (day == 10) {
        return 1; // 第10天剩余1个桃子
    }
    return (Count(day + 1) + 1) * 2; 
}

int main() {
    cout << "第一天摘的桃子总数：" << Count(1) << endl; // 输出结果：1534
    return 0;
}
