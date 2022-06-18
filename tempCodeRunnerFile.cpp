#include<iostream>
#include<utility>
using namespace std;
int main(){
    pair<char,int>pair1=make_pair('A',1);
    pair<char,int>pair2=make_pair('B',2);
    cout<<"before swapping:\n";
    cout<<" contents of pair1= "<<pair1.first<<" "<<pair1.second;
    cout<<" contents of pair2= "<<pair2.first<<" "<<pair2.second;
    pair1.swap(pair2);
    cout<<"\nafter swapping:\n";
    cout<<" contents of pair1= "<<pair1.first<<" "<<pair1.second;
    cout<<" contents of pair2= "<<pair2.first<<" "<<pair2.second;
    return 0;


}