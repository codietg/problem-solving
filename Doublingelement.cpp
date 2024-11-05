#include<iostream>
using namespace std;
int main(){
    int arr[100]={};
    cout<<"enter the number of elements";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // printing the doubles of element in array
    for(int i=0;i<n;i++){
        cout<<2*arr[i]<<" ";
    }
    return 0;
}