#include<iostream>
using namespace std;
// 
int getmin(int a[][3],int row,int col){
    int mini=INT16_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j]<mini){
                mini=a[i][j];
            }
        }
    }
    return mini;
}
int main(){
    int a[2][3]={{1,2,3},{4,5,6}};
    int row=2;
    int col=3;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"the mini number is "<< getmin(a,row,col)<<endl;
}