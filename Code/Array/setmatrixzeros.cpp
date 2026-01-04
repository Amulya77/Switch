//Code By: AMULYA MAURYA
//2026-01-04
#include<bits/stdc++.h>
using namespace std;




void bruteForce(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        cout<<"m: "<<m<<" n: "<<n<<endl;



        vector<int> row(m, 0);
        cout<<"row size: "<<row.size()<<endl;

        for (int i = 0; i < row.size(); i++) {
            cout<<row[i]<<" ";
        }
        cout<<endl;
        vector<int> col(n, 0);
        cout<<"col size: "<<col.size()<<endl;
        for (int j = 0; j < col.size(); j++) {
            cout<<col[j]<<" ";
        }
        
        cout<<endl;
        cout<<"==========================="<<endl;

        // Step 1: Mark rows and columns
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        cout<<"=============row post mark============="<<endl;

         for (int i = 0; i < row.size(); i++) {
            cout<<row[i]<<" ";

        }
         cout<<endl;
        cout<<"=============column post mark=============="<<endl;
       
        for (int j = 0; j < col.size(); j++) {
            cout<<col[j]<<" ";
        }
        cout<<endl;
        cout<<"==========================="<<endl;
        // Step 2: Set zeroes
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };
    bruteForce(matrix);

    for (const auto& row : matrix) {
        for (const auto& val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}