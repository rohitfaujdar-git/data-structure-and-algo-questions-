#include<iostream>
using namespace std;
void pattern12(int n){
    int a=n+2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=0;j<a;j++){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }

        cout<<endl;
        a=a-2;
    }
}

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    pattern12(n);

}