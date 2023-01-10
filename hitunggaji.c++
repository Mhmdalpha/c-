#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main (){
	int jam_lembur;
	long int gaji_pokok=1000000;
	long int gaji_kotor,total_gaji_lembur;
	float pajak,gaji_bersih;
	char nama[31];
	
	system("cls");
	
	cout<<"Nama pegawai : ";
	cin.get(nama,30);
	
	cout<<"Lama lembur : ";
	cin>>jam_lembur;
	
	total_gaji_lembur=(long int)10000*jam_lembur;
	gaji_kotor= gaji_pokok + total_gaji_lembur;
	pajak = 0.1*gaji_kotor;
	gaji_bersih = gaji_kotor - pajak;
	
	cout<<endl;
	cout<< "Hasil Perhitungan"<<endl;
	
	cout<<"Nama pegawai : "<<nama<<endl;
	cout<<"Gaji pokok : "<<gaji_pokok<<endl;
	
	cout<<"Lama lembur : "<<jam_lembur<<" jam"<<endl;
	cout<<"Total gaji lembur : RP."<<setw(10)<<total_gaji_lembur<<endl;
	
	cout<<"Gaji kotor : RP."<<setw(10)<<gaji_kotor<<endl;
	cout<<setiosflags(ios::fixed); // untuk mengatur bilangan pecahan
	
	cout<<"Pajak (10%) : RP."<<setw(10)<<setprecision(2)<<pajak<<endl;
	cout<<"Gaji bersih : RP."<<setw(10)<<setprecision(2)<<gaji_bersih<<endl<<endl;
	
	
}
