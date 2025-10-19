#include <iostream>
#include <string>
using namespace std;

struct baju {
	string warna;
	int jumlah;
	char ukuran;
	float harga;
};

int main () {
	baju baju1[5] = { //mengisi data
		{"Hijau", 104, 'M', 49.943},
		{"Hitam", 50, 'L', 55.432},
		{"Pink", 29, 'XL', 59.902},
		{"Merah", 46, 'S', 45.002},
		{"Biru", 67,'M', 48.298}
	};
	
	cout << "Daftar Baju" << endl;
	for (int i = 0; i < 5; i++) {
        cout << "Data ke-" << i + 1 << ":" << endl; // urutan data ke-
        cout << "Warna : " << baju1[i].warna << endl;
        cout << "Jumlah : " << baju1[i].jumlah << endl;
        cout << "Ukuran  : " << baju1[i].ukuran << endl;
        cout << "Harga : Rp" << baju1[i].harga << endl << endl;
    }
    
    cout << "Ukuran Data" << endl;
    cout << "Struct baju  : " << sizeof(baju) << endl;
    cout << "Warna (string) : " << sizeof(baju1[0].warna) << endl;
    cout << "Jumlah (int): " << sizeof(baju1[0].jumlah) << endl;
    cout << "Ukuran (char): " << sizeof(baju1[0].ukuran) << endl;
    cout << "Harga (float): " << sizeof(baju1[0].harga) << endl;

    return 0;
}
