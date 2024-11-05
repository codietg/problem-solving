#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{20,30,56,45,40,60,10,-10};
    int sum=50;
  
  

    for(int i=0;i<arr.size();i++){
        int element= arr[i];
        for(int j=i+1;j<arr.size();j++){
            if(element+arr[j]==sum){
              cout<<"the sorted array ("<<element<<","<<arr[j]<<")"<<endl;
            }
        }
    }
    cout<<endl;
}