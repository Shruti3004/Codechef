#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--)
	{
	    int n, a;
	    cin>>n;
	    int ar[n];
	    for (int i = 0; i < n; i++){ 
	        cin>>ar[i];
	    }
        sort(ar, ar+n);
        if(ar[0] == 0)
            a=0;
        else
            a=1;
            
        for (int i = 1; i < n; i++){ 
            if(ar[i]!=ar[i-1])
    	        a++;
    	    else
    	        continue;
    	 }
    	 
    	 cout<<a<<"\n";
    }
	return 0;
}
