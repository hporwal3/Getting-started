
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
int findmax(int a[],int max,int i)
{  
    if(a[i]>max)
    { 
        max=a[i];
     }
     findmax(a,max,i+1);
     return max;



}
void cartesian(TreeNode *root,int a[])
{
      
      cout<<findmax(a,0,0);


}




int main(){
    
    int a[30];
    int n; cout<<"no of elements";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cartesian(root,a);
    
}