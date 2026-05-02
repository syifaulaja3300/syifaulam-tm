#include <iostream>
using namespace std;

int main(){
	int total = 0;
	
	for (int i = 1; i <= 10; i++) {
		int ganjil = (i * 2) - 1;
		total += ganjil;
		
		cout << ganjil;
		if (i < 10) cout << " + ";
	}
	cout << " = " << total << endl;
	return 0;
}
