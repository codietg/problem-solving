#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
    int element=arr[mid];
    if(element==target){
        return mid;
    }
    else if(target<element){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    mid=(start+end)/2;
    }
    return -1;
   
}
int main(){
    int arr[10]={12,24,36,48,60,72,84,96,120,130};
    int size=10;
    int target= 30;
    int indexoftarg= binarySearch(arr, size, target);
    if(indexoftarg==-1){
        cout<<"target not found"<<endl;
    }
    else{
        cout<<"target is found at "<<indexoftarg<<" index"<<endl;
    }

}