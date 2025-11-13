#include<iostream>
using namespace std;
int main()
{
	char A;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º" << endl;
	cin >> A;
	if (A >= 'a' && A <= 'z')
	{
		cout << (char)(A - 32) << endl;
	}
	else {
		cout << (int)(A + 1) << endl;
	}
}