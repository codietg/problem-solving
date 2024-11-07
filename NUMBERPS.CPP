#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number"<<endl;
    int num;
    cin>>num;
    int sum=0;
    int digit;
    sum=num;
    while(sum>9){
        num=sum;
        sum=0;
        while(num!=0){
        digit=num%10;
        sum= sum+digit;
        num=num/10;
    }
        
    }

  
    cout<<"the sum is "<<sum<<endl;
}