#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	int nim;
	string nama;
public:
	mahasiswa();
	mahasiswa(int);
	mahasiswa(string);
	mahasiswa(int iNim, string iNama);
	void cetak();
};

mahasiswa::mahasiswa() {
	nim = 0;
	nama = "";
}

mahasiswa::mahasiswa(int iNim) {
	nama = iNim;
}

mahasiswa::mahasiswa(int iNim, string iNama) {
	nama = iNama;
}

mahasiswa::mahasiswa(int iNim, string iNama) {
	nim=iNim;
	nama = iNama;
}
void mahasiswa::cetak() {
	cout << endl << "Nim =" << nim << endl;
	cout << " Nama = " << nama << endl;
}

