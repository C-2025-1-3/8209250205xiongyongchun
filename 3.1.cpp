#include <iostream>
using namespace std;
#include <cmath>
void gcd_lcm(int a, int b, int& gcd_result, int& lcm_result) {
	a = abs(a);
	b = abs(b);
	int original_a = a, original_b = b;
	//求最大公约数gcd_result
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	gcd_result = a;
	//求最小公倍数lcm_rersult
	lcm_result = (original_a * original_b) / gcd_result;
}
int main()
{
	int m, n, gcd_val, lcm_val;
	cin >> m >> n;
	gcd_lcm(m, n, gcd_val, lcm_val);
	cout << "最大公约数：" << gcd_val << endl;
	cout << "最小公倍数：" << lcm_val << endl;
	return 0;
}