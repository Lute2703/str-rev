#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
int main()
{
	char string_TB[50];
	int karak_TB;
	cout<<"Masukkan nama anda : ";
	cin.getline(string_TB, sizeof(string_TB));
	cout<<"\nNama anda dulu : "<<string_TB;
	_strrev(string_TB);
	cout<<"\nNama anda sekarang : "<<string_TB;
	karak_TB = 0;
	for (int i_TB = 0; string_TB[i_TB]; i_TB++)
		karak_TB++;
	cout<<"\nJumlah huruf pada nama anda : "<<karak_TB;
}
