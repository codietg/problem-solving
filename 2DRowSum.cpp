#include<iostream>
using namespace std;
int main(){
    int a[3][2]={{1,3},{2,4},{5,6}};
    int row=3;
    int col=2;
//     for(int i=0;i<row;i++){
//         int sum=0;
//         for(int j=0;j<col;j++){
//             sum=sum+a[i][j];

//         }
//          cout<<sum<<endl;
//     }
   
// }
 int sum=0;
for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum=sum+a[j][i];

        }
         cout<<sum<<endl;
    }
   
}