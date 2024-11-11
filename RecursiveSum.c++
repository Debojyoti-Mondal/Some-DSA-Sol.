#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    int prvSum = sum(n-1);
    return n + prvSum;
}
int main(){
    int n;
    cout<<"eneter your number :";
    cin>>n;
    cout<<"sum is :"<<sum(n)<<endl;
    return 0;
}