#include<iostream>
using namespace std;
class Time
{
public:
	void setTime() {
		int h, m, s;
		cout << "请输入时间(时 分 秒)：";
		cin >> h >> m >> s;
		hour = (h >= 0 && h < 24) ? h : 0;
		minute = (m >= 0 && m < 60) ? m : 0;
		sec = (s >= 0 && s < 60) ? s : 0;
	}
	void showTime() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
private:
	int hour;
	int minute;
	int sec;
};

int main() {
	Time t1;
	t1.setTime();
	t1.showTime();
	return 0;
}