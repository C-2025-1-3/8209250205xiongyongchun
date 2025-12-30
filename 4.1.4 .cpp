#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;  // i: list1指针, j: list2指针, k: list3指针

    // 双指针遍历，比较并合并元素
    while (i < size1 && j < size2) {
        if (list1[i] <= list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }

    // 追加list1剩余元素
    while (i < size1) {
        list3[k++] = list1[i++];
    }

    // 追加list2剩余元素
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}

// 测试程序
int main() {
    const int MAX_SIZE = 80;
    int size1, size2;
    int list1[MAX_SIZE], list2[MAX_SIZE], list3[MAX_SIZE * 2];

    // 输入第一个数组
    cout << "请输入第一个数组的元素数：";
    cin >> size1;
    cout << "请输入" << size1 << "个已排序的整数：";
    for (int i = 0; i < size1; ++i) {
        cin >> list1[i];
    }

    // 输入第二个数组
    cout << "请输入第二个数组的元素数：";
    cin >> size2;
    cout << "请输入" << size2 << "个已排序的整数：";
    for (int i = 0; i < size2; ++i) {
        cin >> list2[i];
    }

    // 合并数组
    merge(list1, size1, list2, size2, list3);

    // 输出结果
    cout << "合并后的数组：";
    for (int i = 0; i < size1 + size2; ++i) {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}