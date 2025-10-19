//mencetak perubahan posisi benda persatuan waktu (tiap 2 detik)
#include <iostream>
#include <cmath>
using namespace std;

int main () {
	float v0, waktu = 0, posisi; //v0 = kecepatan awal
	const float g = 9.8;
	int iterasi = 1;
	
	cout << "Kecepatan awal: ";
	cin >> v0;
	
	cout << "Iterasi " << "Waktu (s) " << "Posisi (m)" << endl;
	
	while (true) {
        posisi = v0 * waktu - 0.5 * g * waktu * waktu;
        if (posisi < 0) posisi = 0;  // posisi tidak boleh negatif

        cout << iterasi << "\t" << waktu << "\t  " << posisi << endl;
		
		if (posisi <= 0 && waktu > 0) break;
		
        waktu += 2;     // waktu bertambah 2 detik
        iterasi++;
    }   
    
    return 0;
}
