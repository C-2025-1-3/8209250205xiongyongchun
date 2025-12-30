#include<iostream>
#include<iomanip>
using namespace std;
#include"mytemperature.h"
int main() {
	cout << fixed << setprecision(2);
	// 输出表头
	cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;
    double cel = 40.0;
    double fah = 120.0;
    while (cel >= 31.0 && fah >= 30.0) {
        // 计算转换结果
        double fah_result = celsius_to_fah(cel);
        double cel_result = fahrenheit_to_cels(fah);

        // 输出一行数据（左侧+分隔符+右侧）
        cout << setw(6) << cel << "    "
            << setw(9) << fah_result << "  " << "   |   "
            << setw(10) << fah << "        "
            << setw(6) << cel_result << endl;

        // 更新循环变量
        cel -= 1.0;
        fah -= 10.0;
    }

    return 0;
}