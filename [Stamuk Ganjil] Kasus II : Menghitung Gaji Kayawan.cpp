#include <iostream>

using namespace std;
struct allgaji{
	long long int nik;
	char nama[100];
	int jaker, jalem, gol;
	float gator, gapo, galem, gaber;
};
	allgaji ke[100];
	
int main(){
	int jukar;
	cout<<"Jumlah karyawan : ";
	cin>>jukar;
	
	for(int a=0;a<jukar; a++){
	cout<<"Karyawan Ke- "<<(a+1)<<endl;
	cout<<"Input NIK            = "; 
	cin>>ke[a].nik;
	cout<<"Input Nama           = "; 
	cin>>ke[a].nama;
	cout<<"Input Golongan (1-4) = "; 
	cin>>ke[a].gol;
	cout<<"Input Jam Kerja      = ";
	cin>>ke[a].jaker;
	cout<<endl;

		switch (ke[a].gol){
			case 1 :
				ke[a].gapo = 3000;
				break;
			case 2 :
				ke[a].gapo = 3500;
				break;
			case 3 :
				ke[a].gapo = 4000;
				break;
			case 4 :
				ke[a].gapo = 5000;
				break;
			default :					
				ke[a].gapo = 0;
		}
	
		if (ke[a].jaker>40){
			ke[a].jalem = ke[a].jaker - 40;
		}
		else{
			ke[a].jalem = 0;
		}
		ke[a].gator = ke[a].jaker * ke[a].gapo;
		ke[a].galem = ke[a].jalem * (ke[a].gapo*3/2);
		ke[a].gaber = ke[a].gator + ke[a].galem;
		cout<<endl;
	}
	for (int a=0;a<jukar;a++){
			
		cout<<"Karyawan "<<a+1<<endl;
		cout<<"NIK           = "<<ke[a].nik<<endl;
		cout<<"Nama          = "<<ke[a].nama<<endl;
		cout<<"Gaji Pokok    = "<<ke[a].gapo<<" / jam"<<endl;
		cout<<"Gaji Lembur   = "<<ke[a].galem<<endl;
		cout<<"Gaji Bersih = "<<ke[a].gaber<<endl<<endl;
	}
	
		int ktgr;
		cout<<"Mencari Gaji berdasarkan kategori"<<endl;
		cout<<"Kategori Gaji :"<<endl;
		cout<<"1. Gaji Pokok"<<endl;
		cout<<"2. Gaji Lembur"<<endl;
		cout<<"3. Gaji Bersih"<<endl;
		cout<<"Masukkan Kategori Gaji yang ingin dicari (1 - 3) : ";
		cin>>ktgr;

	for(int a=0;a<jukar;a++){
		switch(ktgr){
		case 1 : 
			cout<<"Karyawan "<<(a+1)<<endl;
			cout<<"Nama       = "<<ke[a].nama<<endl;
			cout<<"NIK        = "<<ke[a].nik<<endl;
			cout<<"Gaji Pokok = "<<ke[a].gapo<<endl<<endl;
		break;
		case 2 :
			cout<<"Karyawan "<<(a+1)<<endl;
			cout<<"Nama         = "<<ke[a].nama<<endl;
			cout<<"NIK         = "<<ke[a].nik<<endl;
			cout<<"Gaji Lembur = "<<ke[a].galem<<endl<<endl;
		break;
		case 3 :
			cout<<"Karyawan "<<(a+1)<<endl;
			cout<<"Nama        = "<<ke[a].nama<<endl;
			cout<<"NIK         = "<<ke[a].nik<<endl;
			cout<<"Gaji Bersih = "<<ke[a].gaber<<endl<<endl;
        break;
		}
		
	}
}
