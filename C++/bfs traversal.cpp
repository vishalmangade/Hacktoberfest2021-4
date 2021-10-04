#include<iostream>
using namespace std;
class node{
     public:
	 int data;
	 node*left;
	 node*right;
	 node(int val){
		 data=val;
		 left=NULL;
		 right=NULL;
	 }
};
void call(node *root){
	if(root->left==NULL and root->right==NULL)
	{
		cout<<root->data;
		return;
	}
	call(root->left);
	call(root->right);
}
int main(){
       node *root= new node(20);
	   root->left=new node(8);
	   root->right=new node(22);
	   root->left->left=new node(4);
	   root->left->right=new node(12);
	   root->left->right->left=new node(10);
	   root->left->right->right=new node(14);
	   root->right->right=new node(25);
	   call(root);
}