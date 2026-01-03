#include <iostream>
using namespace std;
//摄氏温度到华氏温度
double celsius_to_fah(double cel) {
	return 9.0 * cel / 5.0 + 32.0;
}
//华氏温度到摄氏温度
double fahrenheit_to_cels(double fah) {
	return 5.0 * (fah - 32.0) / 9.0;
	
}
