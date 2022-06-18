#include<iostream>
#include <stdio.h>
using namespace std;
int main(){
    char a;
    cout<<"enter the character:"<<endl;
    cin>>a;
    if(a<='Z' && a>='A'){
        cout<<"uppercase ";
    }
    if(a<='z' && a>='a'){
        cout<<"lowercase ";
    }
    if(a<='9' && a>='0'){
        cout<<"numeric ";
    }
    else{
        cout<<"spl char";
    }
}
