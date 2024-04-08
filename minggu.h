#include <iostream>
#include <string>

using namespace std;

int cek_daring_luring(){
	int minggu;
	cout << "CEK JADWAL DARING ATAU LURING" << endl;
	cout << "MINGGU KE : "; cin >> minggu;
	if (minggu % 2 == 1){
		cout << "MINGGU INI DARING/ONLINE" << endl;
	} else {
		cout << "MINGGU INI LURING/OFFLINE" << endl;
	}
	
	system("PAUSE");
	return 0;
}
