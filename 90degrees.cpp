#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
       int n=matrix.size();
        if(n==0){
            return;
        }
        int m=matrix[0].size();
      std::vector<std::vector<int>> ans(m, std::vector<int>(n));


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
              ans[j][(n-1)-i]=matrix[i][j];
            }
        }
        matrix.swap(ans);
    }
int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = matrix.size();
    int m = matrix[0].size();

    rotate(matrix);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// given an odd digit no n you need to find whether the given is balanced no or not  like n=1234700


