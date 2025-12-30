#include <iostream>
using namespace std;
// 定义长方柱类
class Cuboid {
private:
    double length;  // 长
    double width;   // 宽
    double height;  // 高
public:
    // 1. 成员函数：输入长、宽、高
    void input() {
        cout << "请输入长方柱的长、宽、高（用空格分隔）：";
        cin >> length >> width >> height;
    }

    // 2. 成员函数：计算体积
    double calculateVolume() {
        return length * width * height;
    }

    // 3. 成员函数：输出体积（可直接调用计算函数）
    void outputVolume() {
        cout << "长方柱体积：" << calculateVolume() << endl;
    }
};

int main() {
    Cuboid c1, c2, c3;  // 创建3个长方柱对象

    // 输入3个长方柱的数据
    cout << "=== 输入第1个长方柱 ===" << endl;
    c1.input();
    cout << "=== 输入第2个长方柱 ===" << endl;
    c2.input();
    cout << "=== 输入第3个长方柱 ===" << endl;
    c3.input();

    // 输出3个长方柱的体积
    cout << "\n=== 体积计算结果 ===" << endl;
    cout << "第一个";
    c1.outputVolume();
    cout << "第二个";
    c2.outputVolume();
    cout << "第三个";
    c3.outputVolume();

    return 0;
}