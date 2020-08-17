#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
	long long t;
	long long m = 1000000007;
	cin>>t;
	while(t--)
	{
	    long long n, ans=1;
	    cin>>n;
	    long long ar[n], arr[n];
	    for(int i=0; i<n; i++){
	        cin>>ar[i];
	    }
	    for(int i=0; i<n; i++){
	        arr[i] = ans;
	        ans *=2;
	        ans %= m;
	    }
	    for(int i=n-1; i>=0; i--){
	        cout<<arr[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
