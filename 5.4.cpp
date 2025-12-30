#include <iostream>
using namespace std;
class Student 
{
public:
	int num;  //学号
	double grade;  //成绩
};
void max(Student* arr,int size) {
	int maxIndex = 0;  // 记录最高成绩的索引（默认第1个学生）
    for (int i = 1; i < size; i++) {
        // 用指针访问对象成员：arr[i].grade 等价于 (arr+i)->grade
        if (arr[i].grade > arr[maxIndex].grade) {
            maxIndex = i;
        }
    }
    // 输出结果
    cout << "最高成绩：" << arr[maxIndex].grade << endl;
    cout << "对应学号：" << arr[maxIndex].num<< endl;
}

int main() {
    Student students[5];
    // 输入5个学生的学号和成绩
    for (int i = 0; i < 5; i++) {
        cout << "请输入第" << i + 1 << "个学生的学号和成绩：";
        cin >> students[i].num >> students[i].grade;
    }
    max(students, 5); 
    return 0;
}



