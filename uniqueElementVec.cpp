// finding unique element which do not get repeats once
// we will here use the concept of xor bcoz xor operator gives 0 when both inputs are same
#include<iostream>
#include<vector>
using namespace std;
int finduniq(vector<int>arr){
    bint ans=0;
    for (int i=0;i<arr.size();i++)
    {
        ans= ans^arr[i];
    }
    return ans;
    
}
int main(){
    vector<int>arr{1,2,4,5,6,3,4,2,1,6,5};
    int uniquEle= finduniq(arr);
    cout<<"the unique element is "<<uniquEle<<endl;
}