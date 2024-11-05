#include<iostream>
#include<vector>
using namespace std;
int main(){
    // we unione the arrays of no duplicate element
    int a[4]={1,2,3,4};
    int sizea=4;
    int b[5]={5,6,7,8,9};
    int sizeb=5;
    
    vector<int>ans;
    for(int i=0;i<sizea;i++){
        ans.push_back(a[i]);
    }
    for(int i=0;i<sizeb;i++){
        ans.push_back(b[i]);
    }
    // printing the union/merged array
    cout<<"the union array is "<<" ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}