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

	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);

	cout<<"front: "<<q.front()<<endl;

	cout<<"back: "<<q.back()<<endl;

	q.pop();

	cout<<"front: "<<q.front()<<endl;

	cout<<"back: "<<q.back()<<endl;

	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}

	// TAKING USER INPUT

	cout<<"USER INPUT: "<<endl;

	int n;
	cin>>n;
	q.push(n);

	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}

	return 0;
}



