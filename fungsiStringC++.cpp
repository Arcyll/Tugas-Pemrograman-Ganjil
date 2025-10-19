//string dalam bahasa C++
#include <iostream>
#include <string>
using namespace std;

int main () {
	string s = "makan siang";
	string s2 (5, 'a'); // isinya lima huruf a
	string s3 = s2; //menyalin isi dari variabel s2, bisa pakai strcpy() juga
	string s4 (s, 2, 3); // mengambil 3 huruf dari variabel s mulai index ke 2
	
	
	cout << "s : " << s << endl;
	cout << "salinan dari variabel s2 : " << s3 << endl;
	cout << "s4 : " << s4 << endl;
	
	string s5 = s + s4; // menambahkan string
	cout << "kalimat : " << s5 << endl;
	
	cout << "'siang' pada s5 ada di index ke- : " << s5.find("siang") << endl; //mencari suatu kata
	cout << "Ganti siang menjadi malam : " << s.replace(6, 5, "malam") << endl; // mengganti isi
	cout << "panjang s : " << s.length() << endl;
	
	return 0;
}
