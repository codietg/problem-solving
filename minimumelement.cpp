#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int a[49]={24,45,6,7,8,56,43,6,9,-89,-1};
    int size=11;
    int mini= INT_MAX;
    for(int i=0;i<size;i++){
        if(a[i]<mini){
            mini=a[i];
        }
    }
    cout<<"the minimum number is "<<mini<<endl; 
}
