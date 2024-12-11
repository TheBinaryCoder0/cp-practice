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

	stack<int> st;

	st.push(10);
	st.push(20);
	st.push(30);

	cout<<"top: "<<st.top()<<endl;

	while(!st.empty()){
		cout<<st.top()<<endl;
		st.pop();
	}

	// TAKING USER INPUT

	int n;
	cin>>n;
	st.push(n);

	cout<<"top after user input: "<<st.top()<<endl;

	while(!st.empty()){
		cout<<st.top()<<endl;
		st.pop();
	}


	return 0;
}



