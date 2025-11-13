#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double F;
	cout << "请输入华氏温度：" << endl;
    cin >> F;
double C = (F - 32) * 5.0 / 9.0;
cout <<fixed<<setprecision(2)<< "对应的摄氏温度为：" << C << endl;

return 0;

}