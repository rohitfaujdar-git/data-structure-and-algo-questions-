#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    int ld;
    int sum = 0;
    int c = n;
    while(c>0){
        ld = c%10;
        c=c/10;
        sum = sum +(ld*ld*ld);
    }
    if(sum==n){
        cout<<"it is a armstrong number :"<<sum;
    }
    else{
        cout<<"it is not armstrong number :";
    }
    
}