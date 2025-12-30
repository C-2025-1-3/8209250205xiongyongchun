#include<iostream>
using namespace std;
void bubble_sort(double list[10]) {
	int const listSize = 10;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{	
				double t = list[j];
				list[j] = list[j + 1];
				list[j + 1] = t;
				//swap list[j] with list[j + 1]
				changed = true;
			}
	} while (changed);

}
int main() {
	double nums[10];
	for (int i = 0; i < 10; i++)
		cin >> nums[i];
	 bubble_sort(nums);
	 for (int i = 0; i < 10; i++)
		 cout << nums[i]<<'\t';
}
