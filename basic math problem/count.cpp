#include<iostream>
using namespace std;
void count(int n){
    int a=0;
    while(n>0){
        n=n/10;
        a++;
    }
    cout<<a;
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    count(n);
}