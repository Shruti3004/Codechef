#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,k;
	cin>>k>>t;
	while(t--)
	{
	    long long n, sum=0, half;
        cin>>n;
        long long ar[n], ans[n];
        for(int i=0;i<n;i++){
            ar[i]= i+1;
        }
        sum = (n*(n+1))/2;
        if(sum%2==0){
            cout<<"0\n";
        }else{
            cout<<"1\n";
        }
        half = ceil(sum/2.0);
        for(int i=0;i<n;i++){
            ans[i]=0;
        }
        for(int i=n-1;i>=0;i--){
            if((half>0)&&(half>=ar[i])){
                half -= ar[i];
                ans[ar[i]-1]=1;
            }
            else if(half>0 && half<ar[i]){
                ans[half-1]=1;
                break;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i];
        }
        cout<<"\n";
	}
	return 0;
}
