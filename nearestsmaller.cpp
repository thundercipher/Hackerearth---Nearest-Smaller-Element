#include<bits/stdc++.h>
using namespace std;

#define f(i,x,n) for(int i=x;i<n;i++)
#define ll long long
#define pb(i) push_back(i)
#define mp(i,j) make_pair(i,j)
#define test ll t; cin>>t; while(t--)

int main()
{
	int n;
	cin>>n;

	int arr[n];
	vector<int> res;
	stack<int> s;

	f(i,0,n)
	{
		cin>>arr[i];
	}

	f(i,0,n) 
	{
        if(s.empty()) 
		    {
        	  res.push_back(-1);
            s.push(arr[i]);                
			      continue;
        }
            
		    while(!s.empty() && s.top()>=arr[i]) 
		    {
            s.pop();
        }
            
		    if(s.empty()) 
		    {
            res.pb(-1);
        }

		    else 
		    {
            res.pb(s.top());
        }
        
		    s.push(arr[i]);
  }
	
	f(i,0,n)
	{
		cout<<res[i]<<" ";
	}

	return 0;
}
