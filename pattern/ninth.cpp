#include<iostream>
using namespace std;
void pattern9(int n){
    int a=0;
    int b=n-1;
    int c=n-2;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+a;j++){
            cout<<"*";
        }
        a++;
        cout<<endl;
    }
    for(int i=1;i<=b;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<b+c;j++){
            cout<<"*";
        }
        c=c-2;
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    pattern9(n);
}