// imtersection of two arrays , printing the common element of 2 arrays
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{12,24,36,48,60};
    vector<int>brr{6,12,18,24};

    vector<int>ans;
    for(int i=0;i<arr.size();i++)
    { int element=arr[i];
        for(int j=0;j<brr.size();j++){
            if(element==brr[j]){
                ans.push_back(element);
            }
        }
    }
    cout<<"the intersection Array is"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
   
}