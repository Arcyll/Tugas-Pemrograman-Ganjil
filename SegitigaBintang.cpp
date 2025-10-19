/* kode untuk menghasilkan output 
   *
  ***
 *****
******* */

#include <iostream>
using namespace std;

int main () {
	int n = 4; // jumlah baris
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= (n - i); j++){
			cout << " "; // untuk mencetak spasi di depan bintang
		}
		
		for (int k = 1; k <= (2 * i - 1); k++) {
			cout << "*"; // untuk mencetak jumlah bintang
		}
		cout << endl; // lanjut ke baris selanjutnya
	}
}
