#include <iostream>
#include <string>

using namespace std;

int cek_jadwal(){
	int hari;
	cout << "Hari:\n\n1. Senin\n2. Selasa\n3. Rabu\n4. Kamis\n5. Jum'at\n6. Sabtu\n7. Minggu\n";
	cout << "Masukkan Hari : "; cin >> hari;
	
	switch(hari){
		case 1:
			cout << "===================================================================" << endl;
			cout << "HARI INI ADA KULIAH\n\nMATAKULIAH PERTAMA\t: PANCASILA\nDOSEN\t\t\t: LANNY POLINA, SH., M.Pd\nWAKTU KULIAH\t\t: 10.20 - 12.00\n";
			cout << "===================================================================" << endl;
			cout << "MATAKULIAH KEDUA\t: LOGIKA INFORMATIKA\nDOSEN\t\t\t: ATIQAH MEUTIA HILDA, S.Kom., M.Kom\nWAKTU KULIAH\t\t: 13.00 - 15.30" << endl;
			break;
		case 2:
			cout << "===================================================================" << endl;
			cout << "HARI INI ADA KULIAH\n\nMATAKULIAH PERTAMA\t: ALJABAR LININEAR DAN MATRIKS\nDOSEN\t\t\t: AGUS FIKRI, Ir., MM\nWAKTU KULIAH\t\t: 07.50 - 10.20\n";
			cout << "===================================================================" << endl;
			cout << "MATAKULIAH KEDUA\t: PENGANTAR TEKNOLOGI INFORMASI\nDOSEN\t\t\t: ISA FAQIHUDDIN HANIF, M.Kom\nWAKTU KULIAH\t\t: 10.20 - 12.00\n";
			cout << "===================================================================" << endl;
			cout << "MATAKULIAH KETIGA\t: BAHASA INDONESIA\nDOSEN\t\t\t: INDAH RAHMAYANTI, S.Pd., M.Pd\nWAKTU KULIAH\t\t: 13.00 - 14.40" << endl;
			break;
		case 3:
			cout << "===================================================================" << endl;
			cout << "HARI INI ADA KULIAH\n\nMATAKULIAH PERTAMA\t: TEORI ALGORITMA DAN PEMROGRAMAN\nDOSEN\t\t\t: ESTU SINDUNINGRUM, ST., MT\nWAKTU KULIAH\t\t: 13.00 - 14.40\n";
			cout << "===================================================================" << endl;
			cout << "MATAKULIAH KEDUA\t: PRAKTIK ALGORITMA DAN PEMROGRAMAN\nDOSEN\t\t\t: ESTU SINDUNINGRUM, ST., MT\nWAKTU KULIAH\t\t: 10.20 - 12.00\n";
			cout << "===================================================================" << endl;
			cout << "MATAKULIAH KETIGA\t: PENDIDIKAN AGAMA ISLAM\nDOSEN\t\t\t: RIDWAN ABD.SALAM, Drs.,MM\nWAKTU KULIAH\t\t: 13.00 - 14.40" << endl;
			break;
		case 4:
			cout << "===================================================================" << endl;
			cout << "HARI INI ADA KULIAH\n\nMATAKULIAH PERTAMA\t: BAHASA INGGRIS TEKNIK\nDOSEN\t\t\t: SUCIANA WIJIRAHAYU, Dr., M.Pd., Ir\nWAKTU KULIAH\t\t: 07.50 - 10.20\n";
			break;
		case 5:
		case 6:
		case 7:
			cout << "LIBUR BRO !!!" << endl;
			break;
		default:
			cout << "MASUKKIN ANGKA NYA YANG BENER LAH BROO !!!" << endl;
			break;
	}
	
	system("PAUSE");
	return 0;
}
