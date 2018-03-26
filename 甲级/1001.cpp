#include<iostream>
#include<sstream>
using namespace std;
int main (){
	int A,B;
	cin>>A>>B;
	int end=A+B;
	stringstream stream;
	string result;
	stream << end;
	stream >> result;
	int count=0;
	for(int i=result.size();i!=0;i--){
		if(count==3){
			if(i-1!=-1&&result[i-1]>='0'&&result[i-1]<='9'){
				result.insert(i,",");
				count=0;
			}
		}
			count++;
	}
	cout<<result;
	 
	return 0;
} 
