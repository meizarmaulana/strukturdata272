#include <iostream>

using namespace std;

int main(){
	int i,n,angka[20];
	float jumlah=0,rata2;
	cout<<"Masukan jumlah angka yang di input = ";cin>>n;
	for(i=0;i<n;i++){
		cout<<"Masukan data ke = ";
		cin>>angka[i];
		jumlah=jumlah+angka[i];
	}
	rata2=jumlah/n;
	cout<<"\nrata-rata = "<<rata2;
	
	
}
