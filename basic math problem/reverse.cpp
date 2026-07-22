#include<iostream>
using namespace std;
void reverse(int n){
    int revn=0;
    int lastdigit;
    while (n>0)
    {
        lastdigit=n%10;
        n=n/10;
        revn=(revn*10)+lastdigit;
    }
    cout<<revn;
    
    
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    reverse(n);
}