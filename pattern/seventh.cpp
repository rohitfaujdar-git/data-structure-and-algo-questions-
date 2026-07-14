#include<iostream>
using namespace std;
void pattern7(int n){
    int a=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        
        for(int k=0;k<i+a;k++){
            cout<<"*";
        }
        a++;
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    pattern7(n);
}