#include <iostream>
#include <string>
#include "minggu.h"
#include "hari.h"
using namespace std;

int main(){
	int apa;
	
	cout << "APLIKASI CEK KELAS 1C" << endl;
	cout << "DAFTAR ISI\n\n1. CEK MATAKULIAH\n2. CEK DARING OR LURING" << endl;
	cout << "CHOOSE : "; cin >> apa;
	
	if(apa == 1){
		cek_jadwal();
	} else if(apa == 2){
		cek_daring_luring();
	} else{
		cout << "NOT FOUND !!!";
	}
	
	
}
