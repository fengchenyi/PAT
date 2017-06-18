#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
using namespace std;
typedef vector<int> ::const_iterator VintIt;
typedef struct BiNode{
  int data;
  struct BiNode * left;
  struct BiNode * right;
}BiNode, *BiTree;

void CreatTheTree(BiTree  &T, vector<int> Pre, vector<int> In){
  if (Pre.size() == 0){
    T = NULL;
    return;
  }
  const int root = Pre[0];
  VintIt Froot = find(In.begin(), In.end(), root);
  VintIt Inbegin = In.begin();
  VintIt Inend = In.end();
  vector<int> LIn; vector<int> RIn;
  LIn.assign(Inbegin, Froot);//左孩子的中序序列
  RIn.assign(Froot + 1, Inend);//右孩子的中序序列
  vector<int> LPre; vector<int> RPre;
  VintIt Prebegin = Pre.begin() + 1;
  VintIt Preend = Pre.end();
  VintIt Premark = Pre.begin() + LIn.size() + 1;
  LPre.assign(Prebegin, Premark);//左孩子的先序序列
  RPre.assign(Premark, Preend);//右孩子的先序序列
  T = (BiTree)malloc(sizeof(BiTree));
  if (T != NULL){
    T->data = Pre[0];
    CreatTheTree(T->left, LPre, LIn);
    CreatTheTree(T->right, RPre, RIn);
  }
}
void reserveTree(BiTree &T){
  if (T->left == NULL&&T->right == NULL){
    return;
  }
  else if (T->left == NULL&&T->right != NULL){
    reserveTree(T->right);
    BiNode *a = T->left;
    T->left = T->right;
    T->right = a;
    return;
  }
  else if (T->right == NULL&&T->left != NULL){
    reserveTree(T->left);
    BiNode *a = T->left;
    T->left = T->right;
    T->right = a;
    return;
  }
    BiNode *a = T->left;
    T->left = T->right;
    T->right = a;
    reserveTree(T->left);
    reserveTree(T->right);
}
void LasOrder(BiTree &T){
  if (T != NULL){
  
    LasOrder(T->left);
    LasOrder(T->right);
    cout << T->data;
  }
}
void printLevel(BiTree T){
  queue<BiNode *> Q;
  BiTree node(NULL);
  if (T == NULL){
    return;
  }
  Q.push(T);
  while (!Q.empty()){
    node = Q.front();
    Q.pop();
    cout << node->data;
    if (Q.empty() && node->left == NULL&&node->right == NULL){
      
    }
    else{
      cout << ' ';
    }
    if (node->left) Q.push(node->left);
    if (node->right) Q.push(node->right);
  }

}
int main(){
  int count;
  string PreOrder1;
  string InOrder1;
  cin >> count;
  getchar();
  getline(cin,InOrder1);
  getline(cin, PreOrder1);
  vector<int> PreOrder;
  vector<int> InOrder;
  PreOrder.resize(count);
  InOrder.resize(count);
  for (int i = 0,j = 0; i <PreOrder1.size(); ){
    string temp;
    temp.resize(2);
    int flag = 0;
    int sign = i;
    while (PreOrder1[sign] != ' ' && PreOrder1[sign]!= 0){
      temp[flag++] = PreOrder1[sign++];
    }
    if (PreOrder1[sign] == ' ' || PreOrder1[sign] == '\0')
    PreOrder[j++] = atoi(temp.c_str());
    i = sign;
    i++;
  }
  for (int i = 0, j = 0; i <InOrder1.size(); i++){
    string temp;
    temp.resize(2);
    int flag = 0;
    int sign = i;
    while (InOrder1[sign] != ' '&&InOrder1[sign]!=0){
      temp[flag++] = InOrder1[sign++];
    }
    if (InOrder1[sign] == ' ' || InOrder1[sign] == '\0')
      InOrder[j++] = atoi(temp.c_str());
    i = sign;
  }
  BiTree T;
  CreatTheTree(T, PreOrder, InOrder);
  reserveTree(T);
  printLevel(T);
  return 0;
}
