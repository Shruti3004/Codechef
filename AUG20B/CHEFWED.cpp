#include<bits/stdc++.h>
using namespace std;


int main(){
	long long t;
	cin>>t;
	while(t--)
	{
	   long n, k, count=1, sum=0, tables=1, a=0;
	   cin>>n>>k;
	   int ar[n], d[n];
	   vector<int> f;
	   for(int i=0; i<n; i++){
	       cin>>ar[i];
	       d[i]=ar[i];
	   }
	   sort(d, d+n);
	   for(int i=0; i<n; i++){
	       if(d[i]==d[i+1]){
	           count++;
	           if(i==n-1){
	               //f.push_back(count);
	               break;
	           }
	       }else{
	          f.push_back(count);
	          if(count > 1){
	             sum += count; 
	          }
	          count =1;
	          if(i==n-1){
	               //f.push_back(count);
	               break;
	          }
	       }
	   }
	   for(int i=0; i<n; i++){
	       for(int j=a; j<i; j++){
	           if(ar[j]==ar[i]){
	               tables++;
	               a=i;
	               break;
	           }
	       }
	   }
	   if(k*tables > k+sum){
	       cout<<k*sum<<"\n";
	   }else{
	       cout<<k*tables<<"\n";
	   }
	   //cout<<tables<<"\n";
	}
	return 0;
}
