#include <iostream>
using namespace std;

// 排序函数 - 使用冒泡排序算法
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // 比较相邻元素，如果前面的元素大于后面的元素，则交换
            if (*(arr + j) > *(arr + j + 1)) {
                // 交换元素
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

// 输出数组函数 - 使用指针方式
void printArray(int* arr, int size) {
    cout << "数组元素: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";  // 使用指针算术访问元素
    }
    cout << endl;
}

int main() {
    int size;

    // 输入数组元素个数
    cout << "请输入数组元素个数: ";
    cin >> size;

    // 检查输入合法性
    if (size <= 0) {
        cout << "数组大小必须大于0!" << endl;
        return 1;
    }

    // 动态分配数组内存
    int* dynamicArray = new int[size];

    // 输入数组元素
    cout << "请输入" << size << "个整数:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "元素[" << i << "]: ";
        cin >> *(dynamicArray + i);  // 使用指针方式输入
    }

    // 调试观察：输出原始数组和指针信息
    cout << "\n=== 调试信息 ===" << endl;
    cout << "数组指针地址: " << dynamicArray << endl;
    cout << "第一个元素地址: " << &dynamicArray[0] << endl;
    cout << "第一个元素值: " << *dynamicArray << endl;
    cout << "第二个元素地址: " << dynamicArray + 1 << endl;
    cout << "第二个元素值: " << *(dynamicArray + 1) << endl;

    // 输出原始数组
    cout << "\n排序前的";
    printArray(dynamicArray, size);

    // 对数组进行排序
    sortArray(dynamicArray, size);

    // 输出排序后的数组
    cout << "排序后的";
    printArray(dynamicArray, size);

    // 释放动态分配的内存
    delete[] dynamicArray;
    dynamicArray = nullptr;  // 将指针设置为nullptr，避免野指针

    cout << "\n内存已成功释放!" << endl;

    return 0;
}