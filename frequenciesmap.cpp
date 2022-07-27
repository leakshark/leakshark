#include <bits/stdc++.h>
#include<map>
using namespace std;

bool compare(const pair<int, int>&a, const pair<int, int>&b)
{
   return a.second<b.second;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int n,maxn;
	  cin>>n;
	  int a[n];
	  for(int i=0;i<n;i++){
	      cin>>a[i];
	  }
	  map<int, int> mp;

    for(int i=0;i<n;i++){
            mp[a[i]]++;
    }
       maxn = max_element(mp.begin(), mp.end(), compare)->second;
       int j=(maxn/2)+1;
       cout<<j<<endl;
	}
	return 0;
	
}
