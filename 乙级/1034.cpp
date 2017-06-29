#include<iostream>
#include<string>
using namespace std;
string addend;
string subend;
string mulend;
string divend;
int gcb(int a,int b){
	int r; 
	while(b>0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int judgeinter(int num1,int num2){
	if(num1==0)
		return -1;
	else{
		if(num1%num2==0)
			return 1;
		else
			return 0;
	}
}
void printpre(int a,int b,int c,int d,char t){
	int mix1=a/b;
	int remain1=mix1*b-a;
	int neg1=((float(a)/float(b))>0)?0:1; 
	int mix2=c/d;
	int remain2=mix2*c-d;
	int neg2=((float(a)/float(b))>0)?0:1;
	if(remain1!=0&&remain2!=0){
		if(mix1!=0&&mix2!=0){
			cout<<mix1<<" "<<a<<"/"<<b<<" "<<t<<" "<<mix2<<" "<<c<<"/"<<d<<" = "; 
		}
		else if(mix1!=0&&mix2==0){
			cout<<mix1<<" "<<a<<"/"<<b<<" "<<t<<" "<<c<<"/"<<d<<" = ";
		}
		else if(mix1==0&&mix2!=0){
			cout<<a<<"/"<<b<<" "<<t<<" "<<mix2<<" "<<c<<"/"<<d<<" = ";
		}
		else{
			cout<<a<<"/"<<b<<" "<<t<<" "<<c<<"/"<<d<<" = "; 
		}
	}
	else if(remain1==0&&remain2==0){
		cout<<mix1<<" "<<t<<" "<<mix2;
	}
	else{
		if(remain1==0){
		cout<<mix1<<" "<<t<<" ";
			if(mix2==0)
				cout<<c<<"/"<<d<<" = ";
			else
				cout<<mix2<<c<<"/"<<d<<" = ";
		} 
		else if(remain2==0){
			if(mix1==0)
				cout<<a<<"/"<<b<<" "<<t<<" ";
			else
				cout<<mix1<<a<<"/"<<b<<" "<<t<<" ";
		cout<<mix2<<" = ";
		}
	}
	
}
void add(int mole1,int deno1,int mole2,int deno2){
	int GCD=gcd(deno1,deno2);
	int addend=mole1*(GCD/deno1)+mole2*(GCD/deno2);
	int mix=addend/GCD;
	if(mix!=0){
		printpre(mole1,deno1,mole2,deno2,'+');
		cout<<
	}
	else{
		
	}
}
void sub()
void mul()
void div()
int main  (){
	int mole1,deno1;
	int mole2,deno2;
	char among;
	int sign1,sign2;
	cin>>mole1>>among>>deno1;
	cin>>mole1>>among>>deno2;
//	sign1=judgeinter(mole1,deno1);
//	sign2=judgeinter(mole2,deno2);
	add(mole1,deno1,mole2,deno2);
	return 0;
} 
