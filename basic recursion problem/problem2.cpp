#include<iostream>
using namespace std;
void print(int i,int n){
    if(i<=n){
        cout<<i<<endl;
    }
    print(i+1,n);

}
int main(){
    int i=1;
    int n;
    cout<<"enter a number :";
    cin>>n;
    print(i,n);
    
}