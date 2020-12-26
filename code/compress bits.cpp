// C++ program to print postorder traversal from preorder and inorder traversals
#include <iostream>
using namespace std;

// A utility function to search x in arr[] of size n
int search(int arr[], int x, int n)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Prints postorder traversal from given inorder and preorder traversals
void printPostOrder(int in[], int pre[], int n)
{
	// The first element in pre[] is always root, search it
	// in in[] to find left and right subtrees
	int root = search(in, pre[0], n);

	// If left subtree is not empty, print left subtree
	if (root != 0)
		printPostOrder(in, pre + 1, root);

	// If right subtree is not empty, print right subtree
	if (root != n - 1)
		printPostOrder(in + root + 1, pre + root + 1, n - root - 1);

	// Print root
	cout << pre[0] << " ";
}

// Driver program to test above functions
int main()
{
	int in[] = { 5, 2, 4, 7, 3, 6,1 };
	int pre[] = { 7,2,5,4,6,3,1 };
	int n = sizeof(in) / sizeof(in[0]);
	cout << "Postorder traversal " << endl;
	printPostOrder(in, pre, n);
	return 0;
}
