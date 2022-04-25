#include <bits/stdc++.h>
#define ll long long int 
  using namespace std;
  ll squareroot(ll n){
  if(n==0||n==1)
  return n;
      ll start =1;
      ll end = n/2;
      ll ans;
      while(start<=end){
      	ll mid = (start+end)/2;
      	if(mid*mid==n)
      		return mid;
      	else if(mid*mid<n){
      		ans = mid;
      		start = mid+1;
      	}
      	else  end = mid-1;
      }
      return ans ;
        
      }
      
    
    
  }
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      cout<<squareroot(n)<<endl;
    }
    return 0;
  }
