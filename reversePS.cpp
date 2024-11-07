#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,4,5,6,8,9};
    int size=7;
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[end],arr[start]);
        start++;
        end--;
    }
    // printing array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}