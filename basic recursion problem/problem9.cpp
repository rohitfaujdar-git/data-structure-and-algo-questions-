#include<iostream>
using namespace std;
void count(int n,int c){
    if(n==0){
        cout<<c;
        return;
    }
    count(n/10,c+1);
}
int main(){
    // count the no. digit using recursion 
    int n;
    cout<<"enter a number :";
    cin>>n;
    count(n,0);
}