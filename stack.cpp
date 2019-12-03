#include <iostream>
#include"pushpop.h"
#include "kamus.h"
using namespace std;

int nama();

int main()
{
	int pilih, tanda=1, menu;
	long int npm;
	menu = nama();

 	while( tanda == 1)
	{

		output<<enter<<enter<<enter;
   
		output<<"===========================\n";
		output<<"|         PILIHAN         |\n";
		output<<"===========================\n";
		output<<"|1. Mendaftar             |\n";
		output<<"|2. Pemanggilan Pendafar  |\n";
		output<<"|3. Tampilkan antrian     |\n";
		output<<"|4. Keluar Program        |\n";
		output<<"===========================\n";
   
		output<<"Pilih : "; input>>pilih;

		switch (pilih)
		{
		case 1: output<<"Masukan NPM anda : ";
				input>>npm;
				if (npm == 1867051001)
				{
					output<<"\nNPM yanng anda masukkan berhasil terdaftar"<<enter;
					push(npm);
				}
				else if (npm <= 1817051075 && npm >=1817051001)
				{
					output<<"\nNPM yanng anda masukkan berhasil terdaftar"<<enter;
					push(npm);
				}
				else if (npm <= 1857051015 && npm >=1857051001)
				{
					output<<"\nNPM yanng anda masukkan berhasil terdaftar"<<enter;
					push(npm);
				}
				else 
				{
					output<<"\nNPM yang anda masukkan salah";
				}	
				break;
				
		case 2: pop();
				break;
			
		case 3: tampil();		
				break;
			
		case 4: tanda = 0;
				output << enter << enter;
				break;
			
		default:
				output <<"\t\nPilihan tidak ada";
				break;
         
 		}
 	}
    return 0;
}

int nama()
{
	output<<"\t\t============================================"<<enter;
	output<<"\t\t|                                           |"<<enter;
	output<<"\t\t|          PROGRAM DIBUAT OLEH :            |"<<enter;
	output<<"\t\t|          RATIH INDAH WARDANI              |"<<enter;
	output<<"\t\t|          RAHMADILA NURJANNAH              |"<<enter;
	output<<"\t\t|          DEWI LESTARI                     |"<<enter;
	output<<"\t\t|                                           |"<<enter;
	output<<"\t\t============================================"<<enter<<enter;

	output<<"Deskripsi Program :"<<enter;
	output<<"Program ini dibuat untuk menentukan urutan UAS lisan mahasiswa S1 Ilmu Komputer 2018"<<enter;
}
