#include<iostream>
using namespace std;
bool find(int a[], int size, int key){
    for(int i=0;i<size;i++){
        // linear search
        if(a[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int a[10]={1,2,4,5,7,8,9};
    int size=7;
    cout<<"enter the key to be found"<<endl;
    int key;
    cin>>key;
    for(int i=0;i<size;i++){
        if(a[i]==key){
            cout<<"found"<<endl;
        }
    }cout<<"not found"<<endl;
    
}