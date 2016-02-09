#include<stdio.h>
#include<stdlib.h>
 struct node{
 	int data;
 	struct node* left;
 	struct node* right;
 	
 };
 int max(struct node* rootleft, struct node* rootright)
 
 {
 	
 }
 int findheight(struct node* root)
 {
 	int hleft, hright;
 	if(root==NULL)
 	return -1;
 	hleft=findheight(root->left);
 	hright =findheight(root->right);
 if(hleft>hright)
 {
 	return hleft+1;
 }
 else
 return hright+1;
 }
