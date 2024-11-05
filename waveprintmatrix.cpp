#include<iostream>
#include<vector>
using namespace std;
void waveprintmatrix(vector<vector<int>> v){
    int m= v.size();
    int n= v[0].size();
    for(int startcol=0;startcol<n;startcol++){
        // to print even col--> top to bottom
            //  if((startcol & 1)==0){ using bitwise and operator
            if((startcol % 2 )==0){
                for(int i=0;i<m;i++){
                cout<<v[i][startcol]<<" ";
             }
        }
            else{
                // for odd col-->bottom to top
                for(int i=m-1;i>=0;i--){
                    cout<<v[i][startcol]<<" ";
                }
             }
    }
}
int main(){
    vector<vector<int>> v{
        {1,2,3,4,5},
        {2,3,4,6,7},
        {3,34,5,6,7}
    };

    waveprintmatrix(v);
    return 0;
}