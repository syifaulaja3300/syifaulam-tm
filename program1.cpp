#include <iostream>
using namespace std;

int main(){
	int total;
	for (int i = 1; i <= 10; i++) {
		int genap = i * 2;
		total += genap;
		cout  << genap;
		if (i < 10) cout << " + ";
	}
	cout <<" = " << total << endl;
	return 0;
}
