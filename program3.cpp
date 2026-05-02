#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
    	int barisTotal = 0;
    	for (int j = 1; j <= i; j++) {
    		int genap = j * 2;
    		barisTotal += genap;
    		cout << genap;
    		if (j < i) cout << " + ";
		}
		cout << " = " << barisTotal << endl;
	}
	return 0;
        
}
