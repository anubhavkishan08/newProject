/* Dynamic Programming C++ implementation of LCS problem */
#include<bits/stdc++.h>
using namespace std;

//int max(int a, int b);

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( string X, string Y, int m, int n )
{
	int L[m + 1][n + 1];
	int i, j;

	for (i = 0; i <= m; i++)
	{
		for (j = 0; j <= n; j++)
		{
		if (i == 0 || j == 0)
			L[i][j] = 0;

		else if (X[i - 1] == Y[j - 1])
			L[i][j] = L[i - 1][j - 1] + 1;

		else
			L[i][j] = max(L[i - 1][j], L[i][j - 1]);
		}
	}

	/* L[m][n] contains length of LCS
	for X[0..n-1] and Y[0..m-1] */
	return L[m][n];
}

/* Utility function to get max of 2 integers */
/*int max(int a, int b)
{
	return (a > b)? a : b;
}*/

// Driver Code
int main()
{
	string X,Y;
	cin>>X>>Y;

	int m = X.size();
	int n = Y.size();

	cout << "Length of LCS is "
		<< lcs( X, Y, m, n );

	return 0;
}

// This code is contributed by rathbhupendra
