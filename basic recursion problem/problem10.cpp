#include<iostream>
using namespace std;
void sum(int n,int s){
    if(n==0){
        cout<<s;
        return;
    }
    int x=n%10;
    sum(n/10,s+x);
}
int main(){
    // summ of digit of number through recursion 
    int n;
    cout<<"enter a number :";
    cin>>n;
    sum(n,0);
    
}