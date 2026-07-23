#include<iostream>
using namespace std;
void power(int i,int n,int x){
    if(i==1){
        cout<<n;
        return ;
    }
    
    power(i-1,n*x,x);

}
int main(){
    int x;
    cout<<"enter a value :";
    cin>>x;
    int y;
    cout<<"enter power :";
    cin>>y;
    power(y,x,x);
}