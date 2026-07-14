#include<iostream>
using namespace std;
void pattern8(int n){
    int a=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n+a;j++){
            cout<<"*";
        }
        a=a-2;
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    pattern8(n);
}