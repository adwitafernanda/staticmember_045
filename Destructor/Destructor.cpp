#include <iostream>
using namespace std;

class angka {
private:
	int *arr;
	int panjang;
public:
	angka(int); //constructor
	~angka(); //destructor
	void cetakData();
	void isiData();
};
//Definisi member function
angka::angka(int i) { //constructor
	panjang = i;
	arr = new int[i];
	isiData();
}

angka::~angka() {
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = " << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = "; cin >> arr[i];
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3); //constructor Dipanggil
	angka* ptrBelajarcpp = new angka(5); //constructor dipanggil
	delete ptrBelajarcpp; //desstructor dipanggil

	return 0;
}   //destructor dipanggil 
