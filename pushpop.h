#include <iostream>
#include "kamus.h"
using namespace std;

const int batas = 3;
int antrian[batas];
int data = -1;

bool isEmpty()
{ 
	if(data == -1)
	{
		return true;
	}
		return false;
}

bool isFull()
{ 
	if(data >= 2)
	{
		return true;
	}
		return false;
}		
		 
void push(long int x)
{	
	if(isFull())
	{
		output<<"sudah mencapai maksimal mahasiswa yang mengambil mata kuliah inputi"<<enter;
	}
	else
	{
		data++;
		antrian[data] = x;
			output<<"anda berhasil mendapat nomor antrian UAS"<<enter;
	}	
}
	
void pop()
{		
	if(isEmpty())
	{
		output<<"Tidak ada yang mengantri untuk ujian"<<enter;
	}
	else
	{
		output<<antrian[0]<<" diharapkan memasuki ruang ujian"<<enter;
		for(int i=0 ; i<=data ; i++)
		{
			antrian[i] = antrian[i+1];
		}
		data--;
	}
}
	
void tampil()
{
	if(isEmpty())
	{
		output<<"tidak ada antrian"<<enter;
	}
	else
	{
		for(int i=0 ; i<=data ; i++)
		{
			output<<antrian[i]<<" ";
		}
		output<<"\nTotal antrian UAS = "<<data+1<<enter;
	}
	
}
