#include <iostream>

using namespace std;
struct allhitung{
	char nama[100];
	long long int stmb;
	float uas, uts, tuman, tuproy, kehadiran, nakh;
};
	allhitung ke[100];
	
int main(){
	int jumhs;
	cout<<"Jumlah mahasiswa yang nilainya ingin dihitung : ";
	cin>>jumhs;
	for(int a=0;a<jumhs;a++){
	cout<<"Mahasiswa Ke- "<<(a+1)<<endl;
	cout<<"Input Nama                       = "; cin>>ke[a].nama;
	cout<<"Input Stambuk                    = "; cin>>ke[a].stmb;
	cout<<"Input Nilai UTS                  = "; cin>>ke[a].uts;
	cout<<"Input Nilai UAS                  = "; cin>>ke[a].uas;
	cout<<"Input Nilai Tugas Mandiri        = "; cin>>ke[a].tuman;
	cout<<"Input Nilai Tugas Proyek         = "; cin>>ke[a].tuproy;
	cout<<"Input Nilai Kehadiran            = "; cin>>ke[a].kehadiran;

	cout<<endl;
	}
	
	for(int a=0;a<jumhs;a++){
		ke[a].uts = (ke[a].uts*20)/100;
		ke[a].uas = (ke[a].uas*25)/100;
		ke[a].tuman = (ke[a].tuman*20)/100;
		ke[a].tuproy = (ke[a].tuproy*20)/100;
		ke[a].kehadiran = (ke[a].kehadiran*15)/100;
		ke[a].nakh = ke[a].uts + ke[a].uas + ke[a].tuman + ke[a].tuproy +ke[a].kehadiran;
		
		cout<<"Mahasiswa "<<(a+1)<<endl;
        cout<<"Nama                        = "<<ke[a].nama<<endl;
        cout<<"Stambuk                     = "<<ke[a].stmb<<endl;
		cout<<"Nilai UTS (* 20%)           = "<<ke[a].uts<<endl;
		cout<<"Nilai UAS (* 25%)           = "<<ke[a].uas<<endl;
		cout<<"Nilai Tugas Mandiri (* 20%) = "<<ke[a].tuman<<endl;
		cout<<"Nilai Tugas Proyek (* 20%)  = "<<ke[a].tuproy<<endl;
		cout<<"Kehadiran (* 15%)           = "<<ke[a].kehadiran<<endl;
    	cout<<"Nilai Akhir                 = "<<ke[a].nakh<<endl;
    	cout<<endl;
    	
	
		if(ke[a].nakh>85){
    		cout<<"Grade                       = A";
		}
		else if(ke[a].nakh<=85 && ke[a].nakh>=81){
			cout<<"Grade                       = A-";
		}
		else if (ke[a].nakh<=80 && ke[a].nakh>=76){
			cout<<"Grade                       = B+"; 
		}
		else if (ke[a].nakh<=75 && ke[a].nakh>=71){
			cout<<"Grade                       = B";
		}
		else if (ke[a].nakh<=70 && ke[a].nakh>=66){
			cout<<"Grade                       = B-";
		}
		else if (ke[a].nakh<=65 && ke[a].nakh>=61){
			cout<<"Grade                       = C+";
		}
		else if (ke[a].nakh<=60 && ke[a].nakh>=51){
			cout<<"Grade                       = C";
		}
		else if (ke[a].nakh<=50 && ke[a].nakh>=45){
			cout<<"Grade                       = D";
		}
		else
		{
			cout<<"Grade                       = E";
		}
		cout<<endl;
		cout<<"------------------------------------------------------------------------------------------------------"<<endl;
	}
	cout<<"------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;


		int ktgr;
		cout<<"Mencari nilai berdasarkan kategori"<<endl;
		cout<<"Kategori Nilai :"<<endl;
		cout<<"1. UTS"<<endl;
		cout<<"2. UAS"<<endl;
		cout<<"3. Tugas Mandiri"<<endl;
		cout<<"4. Tugas Proyek"<<endl;
		cout<<"5. Kehadiran"<<endl;
		cout<<"Masukkan Kategori Nilai yang ingin dicari (1 - 5) : ";
		cin>>ktgr;
		cout<<endl;
		
	for(int a=0;a<jumhs;a++){
		switch(ktgr){
		case 1 : 
			cout<<"Mahasiswa "<<(a+1)<<endl;
			cout<<"Nama              = "<<ke[a].nama<<endl;
			cout<<"Stambuk           = "<<ke[a].stmb<<endl;
			cout<<"Nilai UTS (* 20%) = "<<ke[a].uts<<endl<<endl;
		break;
		case 2 :
			cout<<"Mahasiswa "<<(a+1)<<endl;
			cout<<"Nama              = "<<ke[a].nama<<endl;
			cout<<"Stambuk           = "<<ke[a].stmb<<endl;
			cout<<"Nilai UAS (* 25%) = "<<ke[a].uas<<endl<<endl;
		break;
		case 3 :
			cout<<"Mahasiswa "<<(a+1)<<endl;
			cout<<"Nama              = "<<ke[a].nama<<endl;
			cout<<"Stambuk           = "<<ke[a].stmb<<endl;
			cout<<"Nilai Tugas Mandiri (* 20%) = "<<ke[a].tuman<<endl<<endl;
        break;
        case 4 :
			cout<<"Mahasiswa "<<(a+1)<<endl;
			cout<<"Nama              = "<<ke[a].nama<<endl;
			cout<<"Stambuk           = "<<ke[a].stmb<<endl;
			cout<<"Nilai Tugas Proyek (* 20%)  = "<<ke[a].tuproy<<endl<<endl;
        break;
        case 5 :
			cout<<"Mahasiswa "<<(a+1)<<endl;
			cout<<"Nama              = "<<ke[a].nama<<endl;
			cout<<"Stambuk           = "<<ke[a].stmb<<endl;
			cout<<"Kehadiran (* 15%) = "<<ke[a].kehadiran<<endl<<endl;
		break;
		}
	}
}
