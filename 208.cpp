#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a;
    cout << "请输入一个正整数 a：";
    cin >> a;
    if (a <= 0) 
    {
        cout << "错误：输入必须为正整数！" << endl;
        return 1;
    }

    double x_prev = a;
    double x_next;
    const double eps = 1e-5;
    do {
        x_next = 0.5 * (x_prev + a / x_prev);  
        if (fabs(x_next - x_prev) < eps) 
        {
            break;
        }
        x_prev = x_next;} 
    while (true);
    cout << "a 的平方根为：" << fixed << setprecision(6) << x_next << endl;

    return 0;
}
