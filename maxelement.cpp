#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int a[20]={-1,-35,-6,-78,-87,-65,-96,-6,-199}; 
    int size=9;
    // maximum element of array
    int maxi= INT_MIN;
    // ABOVE LINE OF CODE INITIALISING THE MAX VALUE WITH MINIMUM VALUE OF INTEGER
    for(int i=0;i<size;i++){
        if(a[i]>maxi){
            maxi=a[i];
        }
    }
    cout<<"the max number is "<<maxi<<endl;
}