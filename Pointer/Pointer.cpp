#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi method  
};

void mahasiswa::showNim() { //implementasi method diluar class
	cout << " No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };  //object mhs
	mhs.showNim();       //member access operator

	mahasiswa& ref = mhs; //pointer reference refmhs
	ref.nim = 2;          //member access operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs;  //pointer dereference pMhs
	pMhs->nim = 3;           //arrow opertaor
	mhs.showNim();
	system("pause");
	return 0;
}


