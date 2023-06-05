#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int rsize = matrix.size();
    int csize = matrix[0].size();
    
	int col0 = 1;

    for (int i = 0; i < rsize; i++) {
        for (int j = 0; j < csize; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;

                if (j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    for (int i = 1; i < rsize; i++) {
        for (int j = 1; j < csize; j++) {
            if (matrix[i][j] != 0) {
                // check for col & row:
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;S
                }
            }
        }
    }

    if (matrix[0][0] == 0) {
        for (int j = 0; j < csize; j++) {
            matrix[0][j] = 0;
        }
    }
    if (col0 == 0) {
        for (int i = 0; i < rsize; i++) {
            matrix[i][0] = 0;
        }
    }

}