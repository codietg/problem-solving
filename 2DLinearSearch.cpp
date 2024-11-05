#include<iostream>
using namespace std;
int main(){
    int a[3][3]={{2,4,6},{3,6,9},{12,24,36}};
    int row=3;
    int col=3;
    int key;
    cout<<"enter the key to be searched"<<endl;
    cin>>key;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j]==key){
                cout<<"Key is found"<<endl;
                break;
            }
          
          
        }
    }
       
}