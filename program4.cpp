#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 5; i++) {
		long long barisHasil = 1;
		for (int j = 1; j <= i; j++) {
			int ganjil = (j * 2) - 1;
			barisHasil *= ganjil;
			cout << ganjil;
			if (j < i) cout << " + ";
		}
		cout << " = " << barisHasil << endl;
	}
	return 0;
}
