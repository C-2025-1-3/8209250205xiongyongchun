#include <iostream>
#include <iomanip>  // 用于 setprecision() 控制输出精度
using namespace std;

int main() {
    const double price = 0.8;
    int current_num = 2;
    double total_cost = 0;
    int total_days = 0;
    while (current_num <= 100) 
    {
        total_cost += current_num * price;
        total_days++;
        current_num *= 2;                   
    }
    double average = total_cost / total_days;
    cout << "每天平均花费为：" << fixed << setprecision(2) << average << "元" << total_cost<<"  "<< total_days << endl;

    return 0;
}
