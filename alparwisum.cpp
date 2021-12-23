#include<stdio.h>
#include<bits/stdc++.h>
#include<limits>
#include<vector>
#include<iostream>
#include<cmath>

#define input(v,n)              int n; cin>> n; vector<int>v(n); for(int i = 0;i<n;i++) cin>>v[i];
#define output(v)               for(auto i : v) cout<<i<<" ";cout<<endl;
#define outputm(v)              for(auto i : v) cout<<i.first<<" "<<i.second<<endl;
#define pb(n)                   push_back(n);
typedef long long  ll;

using namespace std;

void solve()
{
	input(a,n);
	input(b,m);

	int k;
	cin>>k;


    int i=0,j=m-1,sum=0;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());


    vector<pair<int,int>>v;

    while (i<n && j>=0)
    {
        sum = a[i] + b[j];
        if(sum == k)
            {
                v.push_back({a[i],b[j]});
                i++;
                j--;
            }
        else if (sum > k)
            j--;
        else 
            i++;

    }

    outputm(v);

    cout<<endl;


}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    // solve();

    return 0;
}