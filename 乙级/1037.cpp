#include<iostream>
using namespace std;
void cal(int a,int b,int c,int A,int B,int C,int neg){
	int endc;
	int endb;
	int enda;
	if(C>c){
		endc=c+29-C;
		b--;	
	}
	else{
		endc=c-C;
	}
	if(B>b){
		endb=b+17-B;
		a--;
	}
	else{
		endb=b-B;
	}
	enda=a-A;
	if(neg==1){
		cout<<"-"<<enda<<"."<<endb<<"."<<endc<<endl;
	}
	else{
		 cout<<enda<<"."<<endb<<"."<<endc<<endl;
	}
}
int main(){
	int Ngalleon;
	int Nsickle;
	int Nkunt;
	int Hgalleon;
	int Hsickle;
	int Hkunt;
	char t;
	cin>>Ngalleon>>t>>Nsickle>>t>>Nkunt;
	cin>>Hgalleon>>t>>Hsickle>>t>>Hkunt;

	if(Hgalleon<Ngalleon||
	  (Hgalleon==Ngalleon&&Hsickle<Nsickle)||
	  (Hgalleon==Ngalleon&&Hsickle==Nsickle&&Hkunt<Nkunt)){
	  	cal(Ngalleon,Nsickle,Nkunt,Hgalleon,Hsickle,Hkunt,1);
	  } 
	else{
		cal(Hgalleon,Hsickle,Hkunt,Ngalleon,Nsickle,Nkunt,0);
		}
	return 0;
}
