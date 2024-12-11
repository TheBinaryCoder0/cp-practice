#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl '\n'
#define rep0(i,l,r) for(auto i = l; i < r; i++) // ZERO_BASED_INDEXING
#define rep1(i,l,r) for(auto i = l; i <= r; i++) // ONE_BASED_INDEXING
#define per0(i,r,l) for(auto i = r; i > l; i--) // ZERO_BASED_INDEXING
#define per1(i,r,l) for(auto i = r; i >= l; i--) // ONE_BASED_INDEXING
#define all(x)  x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define ff first
#define ss second
#define pb push_back
const int MAXN = 2e5 + 5;



int main() {
	
	cin.tie(0)->sync_with_stdio(0);


	// DEFINING A PAIR

	pair<int,string> p1;
	p1.first = 23;
	p1.second = "aman";

	cout<<p1.first<<" "<<p1.second<<endl; 

	pair<string,int> p2{"rajat",25};
	cout<<p2.first<<" "<<p2.second<<endl;

	// CREATING A VECTOR OF PAIRS

	vector<pair<string,int>> v{
		{"shreya",27}, {"neelam", 52}, {"vinod", 65}
	};

	for(auto&& i : v){
		cout<<i.first<<" "<<i.second<<endl;
	}


	return 0;
}



