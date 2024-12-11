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

	// DEFINING A DEQUE
	deque<int> dq;

	dq.push_back(10);
	dq.push_front(5);
	dq.push_back(20);
	dq.push_front(15);

	for(auto&& i : dq){
		cout<<i<<" ";
	}

	cout<<endl;

	dq.pop_front();

	for(auto&& i : dq){
		cout<<i<<" ";
	}

	cout<<endl;

	dq.pop_back();

	for(auto&& i : dq){
		cout<<i<<" ";
	}

	cout<<endl;

	// RANDOM ACCESS TO ANY ELEMENT IN DEQUE

	cout<<dq[1]<<endl;


	// TAKING USER INPUT

	int n;
	cin>>n;
	dq.push_back(n);

	for(auto&& i : dq){
		cout<<i<<" ";
	}

	return 0;
}



