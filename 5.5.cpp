#include <iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point() {
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point p1;
	p1.display();
	Point p2;
	p2.setPoint(1,2);
	p2.display();
	int a, b;
	cout<<"输入你想要对x,y附加的值："
	cin >> a >> b;
	Point p3;
	p3.setPoint(a, b);
	p3.display();

}
