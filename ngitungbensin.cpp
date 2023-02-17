#include <iostream>
#include <iomanip>
using namespace std;


//global property
int bensin=1,todtalB,jarak[100];
string tujuan[100],val;
int i=1;
int banyakdata=sizeof(jarak)/sizeof(*jarak);
bool validasi=true;
int temp;

void kamunanya(){
	do{
		cout<<"kemana anda saja hari ini?:";
		cin>>tujuan[i];
		cout<<"berapa jarak tempuhnya?";
		cin>>jarak[i];
		todtalB+=jarak[i]*bensin;
	i++;
	cout<<endl;
	cout<<"apa anda melakuakn perjalan lagi(Y/T)";
	cin>>val;
	if(val=="T"||val=="t"){
		validasi=false;
	}
}

	while(validasi !=false);
	if(todtalB>0){
	for(int a=1;a<banyakdata;a++){
		for(int b=0;b<banyakdata-a;b++){
			if(jarak[b]>jarak[b+1]){
				temp=jarak[b];
				jarak[b]=jarak[b+1];
				jarak[b+1]=temp;
			}
		}
	}
	for(int z=1;z<i;z++){
		cout<<"tujuan anda:"<<tujuan[z]<<"| ";
	}
	cout<<endl;
	for(int d=0;d<banyakdata;d++){
			if(jarak[d]==0){
				continue;
			}
				cout<<"jarak tempuh:"<<jarak[d]<<"|";	
		}
		cout<<endl;
	cout<<"total besin yang anda habiskan:"<<todtalB<<"LITER"<<endl;
}
}
int main(){
	kamunanya();	
}
