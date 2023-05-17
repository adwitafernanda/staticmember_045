#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printALL();
	mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printALL() {
	cout << "ID   =" << id << endl;
	cout << "Nama =" << nama << endl;
	cout << "NIM  =" << nim << endl;
	cout << endl;
} 

int main() {
	mahasiswa mhs1("Lia Kurnia");
	mahasiswa mhs2("Asroni");
	mhs2.nim = 10;
	mahasiswa mhs3("Andi Kurniawan");
	mhs3.nim = 20;
	mahasiswa mhs4("Joko Purbo");

	mhs1.printALL();
	mhs2.printALL();
	mhs3.printALL();
	mhs4.printALL();
	return 0;
}