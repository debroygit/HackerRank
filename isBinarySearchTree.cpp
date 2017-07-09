#include <vector>
/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/

std::vector<int> arr;

void inorder ( Node* root )
{
	if ( root == NULL ) return;
	inorder ( root->left );
	arr.push_back( root->data );
	inorder ( root->right );
}

bool checkBST(Node* root)
{
	
	inorder ( root );
	
	int last = arr.back();
	arr.pop_back();	
	
	while (!arr.empty())
	{
		if ( last <= arr.back() )
			return false;
			
		last = arr.back();
        arr.pop_back();
	}
	
	return true;
}