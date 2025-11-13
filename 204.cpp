#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	char op;
	cout << "请输入运算表达式（格式：数字 运算符(+,-,*,/,%) 数字，例如 1 + 2）：" << endl;
	cin >> num1 >> op >> num2;
	if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
	{
		cout << "错误：非法运算符！仅支持+，-，*，/，%运算。" << endl;
		return 1;
	}
	if ((op == '/' || op == '%') && num2 == 0)
	{
		cout << "错误：除数不能为零。" << endl;
		return 1;
	}
	switch (op)
	{
	case'+':
		cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
		break;
	case'-':
		cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
		break;
	case'*':
		cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
		break;
	case'/':
		cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
		break;
	case'%':
		cout << num1 << "%" << num2 << "=" << num1 % num2 << endl;
		break;
	}
	return 0;

}