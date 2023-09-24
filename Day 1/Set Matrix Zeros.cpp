#include<bits/stdc++.h>
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, 
int n, int m) {
	int col[m] = {0}; //Defining new column for marking purposes.
	int row[n] = {0}; //Defining new row for marking purposes.
	for(int i = 0; i<n; i++){ //Traversing through a row.
		for(int j=0; j<m; j++){ //Traversing through a column. 
			if(matrix[i][j] == 0){ //If zero is found...
				row[i] = 1; //Mark new row with 1.
				col[j] = 1; //Mark new column with 1.
			}
		}
	}
	for(int i =0; i<n; i++){ //Traverse through row again.
		for(int j=0; j<m; j++){ //Traverse through column again.
			if(row[i] || col[j]){ //If new row/column marked with 1...
				matrix[i][j] = 0; //Set all elements of matrix with zero.
			}
		}
	}
	return matrix;
}
