#include <iostream>

using namespace std;

int main(){
	int helper;
	int angka_1 = 10;
	int angka_2 = 20;

	cout<<"angka 1 = "<<angka_1<<endl;
	cout<<"angka 2 = "<<angka_2<<endl;

	helper  = angka_1;
	angka_1 = angka_2;
	angka_2 = helper;

	cout<<"\n\nangka 1 = "<<angka_1<<endl;
	cout<<"angka 2 = "<<angka_2<<endl;


	return 0;
}