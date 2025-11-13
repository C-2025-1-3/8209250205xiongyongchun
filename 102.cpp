#include <iostream>
using namespace std;
int main()
{
	const double pi = 3.14;
	int r, h;
	cout << "请输入圆锥底的半径,锥高" << endl;
	cin >> r >> h;
	double	V = (pi * r*r
		* h) / 3;
	cout << "圆锥的体积为" << V << endl;

	return 0;
}