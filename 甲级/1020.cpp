#include<iostream>
using namespace std;
typedef struct Btnode{
	int num;
	struct Btnode* left;
	struct Btnode* right;
}Binode,*BTree;
void CreateTree(Binode T,int *post,int *inorder ){
	
}
int main (){
	int size=0;
	cin>>size;
	int a=size,b=size;
	int *post=new int[size];
	int *inorder=new int[size]; 
	int temp;
	int i=0;
	while(a--){
		cin>>post[i++];
	}
	i=0; 
	while(b--){
		cin>>temp;
		cin>>post[i++];
	} 
	return 0;	
} 
