#include<iostream>
using namespace std;
void print(int n){
    int i=0;
    if(n<=0){
        return;
    }
    print(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter an number :";
    cin>>n;
    print(n);
}