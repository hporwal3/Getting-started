
#include <iostream>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int d){
        data = d;
        left=NULL;
        right= NULL;
        {
    
        }
    }
};


void printtree(TreeNode *root)
{
	if(root==NULL)
	return;
	else
	printtree(root->left);
	cout<<root->data;
	printtree(root->right);
   


}
TreeNode* createTree(){
    int x; cin >> x;
    if (x == -1){
        return NULL;
    }

    TreeNode* root = new TreeNode(x);
    root->left = createTree();
    root->right = createTree();
    return root;
}


void viewleft(TreeNode *curr,int levelprintedsofar,TreeNode  *root)
{    if(root==NULL) return;
    else cout<<root->data;
    if(curr->left!=NULL)
    {  
        cout<<curr->left->data;}
     else cout<<curr->right->data;   
viewleft( curr->left, levelprintedsofar+1,root);
          curr=root;
   for (int i = 0; i < levelprintedsofar; ++i)
   { if(curr->right!=NULL)
       curr=curr->right;
}
if (curr->right!=NULL)
    cout<<curr->right;



}

int main(){
    TreeNode* root = createTree();
    printtree(root);
     cout<<"/n";
    viewleft(root,0,root);
}