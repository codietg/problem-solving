#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the odd number"<<endl;
   cin>> n;
   int count=0;
   int temp=n;
   while(temp!=0){
    int digit=temp%10;
    count++;
    temp=temp/10;
   }
 int mid=(count/2)+1;
 int left=0;
 int right=0;
 int midValue;
 temp=n;
 
    
 for(int i=1;i<=count;i++){
    if(count%2==0){
        cout<<"the number has even number of digits"<<endl;
    }
    int digit=temp%10;
    temp=temp/10;
    if(i<mid){
      left+=digit;
    }
    else if(i>mid){
      right+=digit;
    }
  else{
   midValue=digit;
  }
   
 }
 if(left == right && (left+right)==midValue){
   cout<<"the number is balanced"<<endl;
 }
 else{
   cout<<"the number is not balanced"<<endl;
 }

 

    return 0;
}