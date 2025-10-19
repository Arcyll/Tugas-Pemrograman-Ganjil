/* kode untuk output
1
2 3
4 5 6
7 8 9 10 */

#include <iostream>
using namespace std;

int main () {
	int n = 4, angka = 0;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			angka += 1;
			cout << angka << " ";
		}
		cout << endl;
	}
}
