#include <iostream>
//three conditions of bst delete
//1. No child  (simply delete)
//2.one children()
//2. two children(delete and replace wih leftmost childi in right subtree)
using namespace std;
Node* getSuccessor(Node* curr){

}

Node* delNode(Node *root, int x){
if(root==NULL){
return root;
}


if(root->data>x){
root->left=delNode(root->left, x);
}
else if(root->data<x){
root->right=delNode(root->right, x);
}

else{    //key found

if(root->left==NULL){
Node* Temp=root->data;
delete(root);
return temp;

}
else if(root->right==NULL){
Node* Temp=root->data;
delete(root);
return temp;

}
else{
Node *succ=getSuccessor();



}



}




}




int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
