#include<iostream>
using namespace std;
int main(){
    int a=2,n,count=0;
    cout<<"enter n"<<endl;
    cin>>n;
        cout<<"it is divisible by:"<<endl;
    for(a=2;a<n;a++){
        if(n%a==0){
            cout<<" "<<a;
            count++;

        }
    }
    if(count==0){
        cout<<"none"<<endl<<"prime number"<<endl;
    }
    else{
        cout<<endl<<"not prime"<<endl;
    }
}
// njhcbasyhfb