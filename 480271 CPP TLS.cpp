#include <iostream>
using namespace std;
	
int main()
{
	struct ketentuan_zodiak
	{
	string nama_zodiak;
	int tanggal_awal;
	int bulan_awal;
	int tanggal_akhir;
	int bulan_akhir;
	};
	
	ketentuan_zodiak zodiak[12] = 
	{
	{"Aquarius", 20, 1, 18, 2},
	{"Pisces", 19, 2, 20, 3},
	{"Aries", 21, 3, 19, 4}, 
	{"Taurus", 20, 4, 20, 5}, 
	{"Gemini", 21, 5, 20, 6}, 
	{"Cancer", 21, 6, 22, 7}, 
	{"Leo", 23, 7, 22, 8}, 
	{"Virgo", 23, 8, 22, 9}, 
	{"Libra", 23, 9, 22, 10},
	{"Scorpio", 23, 10, 21, 11},
	{"Sagitarius", 22, 11, 21, 12},
	{"Capricorn", 22, 12, 19, 1},
	};
	
	int tanggal_lahir, bulan_lahir, i, j, k;
	
	string bulan[13] = {"", "Januari", "Februari", "Maret", "April", "Mei", "Juni", 
	"Juli", "Agustus", "September", "Oktober", "November", "Desember"};
	
	cout << "Selamat datang\n" << endl;
	cout << "Ini adalah program untuk menentukan zodiak anda.\n";
	ulang1:
	cout << "\nMasukkan tanggal lahir anda: ";
	cin>> tanggal_lahir;
	if (tanggal_lahir > 31 or tanggal_lahir < 1)
	{
		cout << "\nTanggal lahir anda tidak valid." << endl;
		goto ulang2;
	}
	
	cout << "\nMasukkan bulan lahir anda (1-12): ";
	cin >> bulan_lahir;
	if (bulan_lahir > 12 or bulan_lahir < 1)
	{
		cout << "\nBulan lahir anda tidak valid." << endl;
		goto ulang2;
	}
	
	if (tanggal_lahir>29 and bulan_lahir == 2)
	{
		cout << "\nTanggal dan bulan lahir anda tidak valid." << endl;
		goto ulang2;
	}
	else if (tanggal_lahir > 30 and (bulan_lahir == 2 or bulan_lahir==4
	or bulan_lahir==6 or bulan_lahir==9 or bulan_lahir==11))
	{
		cout << "\nTanggal dan bulan lahir anda tidak valid." << endl;
		goto ulang2;
	}
	else 
	{
		cout << "\nTanggal lahir anda adalah " << tanggal_lahir << " " << bulan[bulan_lahir] << endl;
		j = tanggal_lahir;
		k = bulan_lahir;
	
		for(i=0; i<12; i++)
		{
			if ((j >= zodiak[i].tanggal_awal and k == zodiak[i].bulan_awal) 
			or (j<=zodiak[i].tanggal_akhir and k == zodiak[i].bulan_akhir))
			{
				cout << "\nZodiak anda adalah " << zodiak[i].nama_zodiak << endl;
			}
		}
	}
	ulang2:
	string ulang;
	cout<< "\nApakah anda ingin mengulang program? (y/t) --> ";
	cin >> ulang;
		if (ulang == "y" or ulang == "Y")
		{
			cout << "\n--------------------------------\n";
			goto ulang1;
		}
		else if (ulang == "t" or ulang == "T")
		{
			cout << "\nTerima Kasih, Sampai Jumpa :D" << endl;
		}
	
return 0;	
}
