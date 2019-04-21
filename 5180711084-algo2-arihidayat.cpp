
#include<iostream>
#include<conio.h>
using namespace std;
void Halim(int Aku[], int Kamu, int Kita){
int Sorting;

Sorting    = Aku [Kamu];
Aku [Kamu] = Aku [Kita];
Aku [Kita] = Sorting;
} main(){

cout<<endl;
cout<<"  Nama            : Ari Hidayat "<<endl;
cout<<"  Kelas           : Teknik Elektro B "<<endl;
cout<<"  Mata Kuliah     : Algoritma & Pemrograman 2"<<endl;
cout<<endl;

cout<<"  Sorting Data Dari Terbesar Ke Terkecil "<<endl<<endl;
cout<<"  [ 4, 8, 5, 9, 6, 2, 7, 5, 9, 5 ] "<<endl<<endl;
cout<<"  Hasilnya Adalah : "<<endl<<endl;

int Dia,Saya;
int Angka[]={4,8,5,9,6,2,7,5,9,5};
const int size = sizeof(Angka)/sizeof (Angka[0]);
for(Dia = size-1;Dia >0;Dia--)
for(Saya= 0;Saya<Dia;Saya++)

if(Angka[Saya]<Angka[Saya+1])
Halim(Angka,Saya,Saya+1);
for(Dia=0; Dia<size; Dia++)
cout<<"  "<<Angka[Dia];
cout<<endl;
getch (); }

