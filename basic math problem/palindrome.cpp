#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    int renum=0;
    int ld;
    int c=n;

    while(c>0){
        ld=c%10;
        c=c/10;
        renum= renum*10 + ld;

    }
    if(renum == n){
        cout<<" it is palindrome number : "<<renum;
    }
    else{
        cout<<"it is not palindrome number :"<<renum;
    }
}