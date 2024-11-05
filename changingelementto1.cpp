#include<iostream>
using namespace std;
int main(){
    int a[6]={1,2,3,4,5,6};
    // memset(a,2,sizeof(a))
    for(int i=0;i<6;i++){
    //     // if(a[i]>1){
            a[i]=1;
    //     //     i++;
    //     // }
        
// }
    // printing the array
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
   
}