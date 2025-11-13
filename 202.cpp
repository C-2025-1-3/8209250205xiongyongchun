#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x, y;
	cout << "请输入一个x值" << endl;;
	cin >> x;
	if (x > 0 && x < 1)
	{
		y = 3 - 2 * x;
	}
	else if (x >= 1 && x < 5)
	{
		y = 2.0 / (4 * x) + 1;
	}
	else if (x >= 5 && x < 10)
	{
		x* x;
	}
	else {
		cout << "输入的值不在定义域内(0<x<10)" << endl;
		return 1;
	}

	cout << fixed << setprecision(2) << "y的值为：" << y << endl;
	return 0;
}


