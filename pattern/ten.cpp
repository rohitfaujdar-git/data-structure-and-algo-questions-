#include<iostream>
using namespace std;
void pattern10(int n){
    int a=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    pattern10(n);
}