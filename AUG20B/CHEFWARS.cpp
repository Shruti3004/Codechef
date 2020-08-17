#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int h,p;
        cin>>h>>p;
        if(p>h){
            cout<<"1\n";      
        }else{
            while(p>0){
                h -= p;
                p /= 2;
            }   
            if(h<=0){
                cout<<"1\n";
            }else{
                cout<<"0\n";
            }
        }
    }
    return 0;
}
