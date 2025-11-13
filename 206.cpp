#include<iostream>
using namespace std;
    int gcd(int a, int b) 
    {
   
        if (b > a) {
            swap(a, b);
        }
        while (b != 0) {
            int temp = a % b;  
            a = b;             
            b = temp;          
        }
        return a;  
    }

    int main() 
    {
        int a, b;
        cout << "请输入两个正整数：";
        cin >> a >> b;

        if (a <= 0 || b <= 0)
        {
            cout << "错误：输入必须为正整数！" << endl;
            return 1;
        }

        int gcd_result = gcd(a, b);
        int lcm_result = (a * b) / gcd_result;

        cout << "最大公约数（GCD）：" << gcd_result << endl;
        cout << "最小公倍数（LCM）：" << lcm_result << endl;

        return 0;
}