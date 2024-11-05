#include<iostream>
using namespace std;
void transpose(int a[][3],int row, int col,int trapo[][3]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            // swap(a[i][j],a[j][i]);     
            trapo[j][i]=a[i][j];     
        }
    }
}
void printarray(int a[][3],int row,int col){
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int a[3][3]={{1,2,4},{3,5,6},{7,8,9}};
    int row=3;
    int col=3;
    cout<<"printing the array"<<endl;
    printarray(a,row,col);
    
    cout<<"the transpose of matrix a is"<<endl;
    int trapo[3][3];
    transpose(a,row,col,trapo);
    // printing the transposed array
    printarray(trapo,row,col);
}