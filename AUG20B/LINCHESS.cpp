#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n, k, pos =0, minimum;
	    cin>>n>>k;
	    vector<int> f, ans; 
	    int ar[n];
	    for(int i=0; i<n; i++){
	        cin>>ar[i];
	        if(k%ar[i]==0 && ar[i]<=k){
	            ans.push_back(ar[i]);   
	            f.push_back(k/ar[i]);  
	        }
	    }
	    
	    if(f.size()>1){
	        minimum=f[0];
	        for(int i=1; i<f.size(); i++){
	           if(f[i]<minimum){
	               minimum=f[i];
	               pos=i;
	           }
	        }
	        cout<<ans[pos]<<"\n";
	    }else if(f.size()==1){
	        cout<<ans[0]<<"\n";
	    }else{
	        cout<<"-1\n";
	    }
	}
	return 0;
}
