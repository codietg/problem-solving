#include<iostream>
using namespace std;
int main(){
    int a[80]={1,1,1,1,0,0,1,1,0,1,0};
    int size=11;
    int numzero=0;
    int numones=0;
    for(int i=0;i<size;i++){
        // if found 0
        if(a[i]==0){
            numzero++;
        }
        if(a[i]==1){
            numones++;
        }
    }
    cout<<"0-"<<numzero<<endl;
    cout<<"1-"<<numones<<endl;
return 0;
}