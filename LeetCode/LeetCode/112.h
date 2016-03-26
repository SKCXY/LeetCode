#ifndef _112_H_
#define _112_H_

#include <cstdlib>
#include <iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};


class Solution
{
public:
	
	bool hasPathSum(TreeNode* root, int sum) {
		if (root == NULL)
			return false;
		if (!(root->left || root->right) && sum != root->val)
			return false;
		if ( !(root->left||root->right) && sum == root->val)
			return true;

		return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
	}


	void preorder(TreeNode* root)
	{
		if (root == NULL)
			return;
		cout << root->val << " ";
		preorder(root->left);
		preorder(root->right);
	}
};



#endif