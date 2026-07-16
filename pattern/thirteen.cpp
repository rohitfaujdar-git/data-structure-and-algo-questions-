#include<iostream>
using namespace std;
void pattern13(int n){
    int a=1;
    for(int i=0;i<n;i++){
        int b=a;
        for(int j=0;j<i+1;j++){
            
            cout<<b<<" ";
            b++;
            
            
            
        }
        a=b;
        
        cout<<endl;
        
    }
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    pattern13(n);
}