//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int findPos(int in[],int e,int n){
        for(int i=0;i<n;i++){
            if(in[i]==e){
                return i;
            }
        }
        return -1;
    }
    
    
    Node* solve(int in[], int pre[], int& index, int inorderStart, int inorderEnd, int n) {
        if (index >= n || inorderStart > inorderEnd) {
            return NULL;
        }
        
        // Using `index++` instead of `index` here to ensure we move to the next element in `pre`.
        int ele = pre[index++];
        
        // Creating a new node `temp` to store the current root.
        Node* temp = new Node(ele);
        
        // Finding the position of the current element in the inorder array.
        int pos = findPos(in, ele, n);
        
        // Using `temp->left` and `temp->right` instead of `root->left` and `root->right`.
        temp->left = solve(in, pre, index, inorderStart, pos - 1, n);
        temp->right = solve(in, pre, index, pos + 1, inorderEnd, n);
        
        return temp;
    }
    
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int preorderIndex=0;
        Node* ans=solve(in,pre,preorderIndex,0,n-1,n);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	
cout << "~" << "\n";
}
}

// } Driver Code Ends