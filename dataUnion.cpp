#include <iostream>
#include <cstring>
using namespace std;

union baju {
	char warna[20]; //kalau pakai string error
	int jumlah;
	char ukuran;
	float harga;
};

int main () {
	baju baju1[5]; 
	
	//pada masing-masing index hannya bisa menampilkan satu nilai
	strcpy(baju1[0].warna, "Hijau");
	baju1[1].jumlah = 100;
	baju1[2].ukuran = 'S';
	baju1[3].harga = 49.039;
	baju1[4].ukuran = 'XL';
	
	cout << "Daftar Baju" << endl;
    cout << "Warna : " << baju1[0].warna << endl;
	cout << "Jumlah : " << baju1[1].jumlah << endl;
    cout << "Ukuran : " << baju1[2].ukuran << endl;
	cout << "Harga : Rp" << baju1[3].harga << endl;
	cout << "Ukuran : " << baju1[4].ukuran << endl << endl;
    
    cout << "Ukuran Data" << endl;
    cout << "Struct baju  : " << sizeof(baju) << endl;
    cout << "Warna (string) : " << sizeof(baju1[0].warna) << endl;
    cout << "Jumlah (int): " << sizeof(baju1[0].jumlah) << endl;
    cout << "Ukuran (char): " << sizeof(baju1[0].ukuran) << endl;
    cout << "Harga (float): " << sizeof(baju1[0].harga) << endl;

    return 0;
}
