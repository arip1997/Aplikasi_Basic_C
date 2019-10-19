#include <iostream.h>
#include <string.h>
#include <conio.h>
	main (){
	int pilihan;
	double nilai1,nilai2,hasil;
	float a,b;
	cout<<“Ini merupakan program kalkulator sederhana”<<endl;
	cout<<“Pilihlah salah satu operasi yang diinginkan”<<endl;
	cout<<“1. Operasi Pertambahan”<<endl;
	cout<<“2. Operasi Perkalian”<<endl;
	cout<<“3. Operasi Pembagian”<<endl;
	cout<<“4. Operasi Pengurangan”<<endl;
	cout<<“Masukkan Pilihan Yang Anda Inginkan : “<<endl;
	cin>>pilihan;
	switch(pilihan){
	case 1:cout<<“masukkan nilai 1 : “;
	cin>>nilai1;cout<<“masukkan nilai 2 : “;
	cin>>nilai2;hasil = nilai1 + nilai2;
	cout<<“Hasil Pertambahan : “<< hasil; break;
	case 2:cout<<“masukan nilai 1 : “;
	cin>>nilai1;cout<<“masukkan nilai 2 : “;
	cin>>nilai2;hasil = nilai1 * nilai2;
	cout<<“Hasil perkalian : “<< hasil; break;
	case 3:cout<<“masukkan nilai 1 : “;
	cin>>nilai1;
	cout<<“masukkan nilai 2 : “;
	cin>>nilai2;
	hasil = nilai1 / nilai2;
	cout<<“Hasil pembagian : “<< hasil; break;
	case 4:cout<<“masukkan nilai 1 : “;
	cin>>nilai1;cout<<“masukkan nilai 2 : “;
	cin>>nilai2;hasil = nilai1 – nilai2;cout<<“hasil pengurangan : “<<hasil; break;
	default :
	cout<<“selesai”;
	}
	getch();
	}
	
