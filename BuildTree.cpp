#include<iostream>
using namespace std;
 typedef struct BTree{
 	char data;
 	struct BTree *lchild;
 	struct BTree *rchild;
 }BinTree,*Btree;
 
 Btree CreateTree(BinTree *T){
 	char data;
 	cin>>data;
 	if(data== '@'){
 		T= NULL;
	 }
	 else{
	 	T = new BinTree;
	 	T->data = data;
		cout<<"输入"<<data<<"的左孩子  ";
		T->lchild = CreateTree(T->lchild);
	    cout<<"输入"<<data<<"的右孩子  ";
	    T->rchild = CreateTree(T->rchild);
		 
	 }
	 return T;
 }
 
 void PreOrderTraverse(BinTree *T){
 	if(T){
 		cout<<T->data;
 		PreOrderTraverse(T->lchild);
 		PreOrderTraverse(T->rchild);
	 }
 }
 void InOrderTraverse(BinTree *T){
 	if(T){
 		InOrderTraverse(T->lchild);
 		cout<<T->data;
 		InOrderTraverse(T->rchild);
	 }
 }
 
 void PostOrderTraverse(BinTree *T){
 	if(T){
 		PostOrderTraverse(T->lchild);
 		PostOrderTraverse(T->rchild);
 		cout<<T->data;
	 }
 }
 
 int Count(BinTree *T){
 	if(T==NULL) return 0;
 	else if((T->lchild==NULL)&&(T->rchild==NULL))
 	return 1;
 	else{
 		return Count(T->lchild)+Count(T->rchild);
	 }
 }
 int main(){
 	
 	cout<<"输入root节点"<<endl;
	 Btree Tree = CreateTree(Tree);
	 cout<<"\n"<<"PreOrderTravers --》";
	 PreOrderTraverse(Tree);
	 cout<<"\n"<<"InOrderTraverse--》";
	  InOrderTraverse(Tree);
	  cout<<"\n"<<"PostOrderTraverse--》";
	  PostOrderTraverse(Tree); 
 } 
