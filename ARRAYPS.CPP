#include<iostream>
using namespace std;
int main(){
    int arr[12]={1,2,3,4,5,6,7,8};
    int size=8;
    int start=0;
    int end=size-1;
    for(int i=0;i<end;i++){
        if(arr[i]%2!=0){
            if(arr[i]<arr[i+1]){
               swap(arr[start],arr[i]);
               start++;
               
            }
        }
        else if(arr[i]%2==0){
            swap(arr[end],arr[i]);
            end--;
       }
    }
    // sorted array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}