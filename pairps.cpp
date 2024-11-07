#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6};
    int size=6;
    for(int i=0;i<size;i=i+2){
        swap(arr[i],arr[i+1]);
    }
    // printing array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}