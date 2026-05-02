#include <iostream>
using namespace std;

int main() {
	int grandTotal = 0;
	// Loop untuk 5 baris
	for (int i = 0; i < 5; i++) {
		int barisHasil = 0; // diperbaiki dari b ke 0
		
		// loop untuk isi tiap baris (berkurang jumlah elemennya)
		for (int j = 5; j > i; j--) 
		{
			int genap = j * 2;
		barisHasil += genap;
		cout << genap;
		if (j > i + 1) cout << " + ";
		}
		grandTotal += barisHasil;
		cout << " = " << barisHasil << endl;
	}
	cout << "------ +" << endl;
	cout << grandTotal << endl;
	return 0;
	
}
