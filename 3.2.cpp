#include<iostream>
using namespace std;
#include <cmath>
bool is_prime(int num);
int main()
{
    int count = 0;
    int i = 2;
    while (count < 200)
    {
        if (is_prime(i)) {
            cout << i << '\t';
            count++;
            if (count % 10 == 0) cout << endl;
        }
        i++;
    }
}
bool is_prime(int num) {
    if (num <= 1) return false;       // 1及以下不是素数
    if (num == 2) return true;        // 2是唯一偶素数
    if (num % 2 == 0) return false;   // 偶数（除2外）不是素数

    // 检查3到sqrt(num)之间的奇数
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}