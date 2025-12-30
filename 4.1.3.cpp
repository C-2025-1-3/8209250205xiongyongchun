#include <iostream>
using namespace std;
int main() {
	bool box[100];
	for (int i = 0; i < 100; ++i) {
		box[i] = true;
	}
	for (int s = 2; s <= 100; s++) {
		for (int l = s; l <= 100; l+=s) {
			box[l-1] = box[l-1] ? false : true;
		}
	} 
	for (int i = 1; i <= 100; i++) { 
		if (box[i-1]) { 
			cout << i << " ";
		} 
	}cout << endl; 
	return 0; 
	 
} 