#include<iostream>
using namespace std;
int const MAX_NUM = 1000;
int main() {
    int nums[10];
    bool exists[MAX_NUM] = { false };
    cout << "Enter ten numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> nums[i];
    }
    cout << "The distinct numbers are:";
    for (int i = 0; i < 10; i++) {  
       if (nums[i] >= 0 && nums[i] < MAX_NUM) {  // 确保输入在标记数组范围内
            if (!exists[nums[i]]) {           // 如果未出现过
                cout << nums[i] << " ";
                exists[nums[i]] = true;       // 标记为已出现
                    }
    }
        else {
            cout << "\n警告：输入的数" << nums[i] << "超出范围（0~" << MAX_NUM - 1 << "），已忽略。" << endl;
        }
    }

    return 0;

}


