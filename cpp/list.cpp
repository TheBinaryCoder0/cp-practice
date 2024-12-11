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

	list<int> l;

	l.push_back(10);
	l.push_front(20);

	for(auto&& i : l){
		cout<<i<<" ";
	}

	cout<<endl;
	cout<<"front: "<<l.front()<<endl;
	cout<<"back: "<<l.back()<<endl;

	auto it = l.begin();
	it++;
	it = l.insert(it,30);

	it--;

	it = l.erase(it);

	for(auto&& i : l){
		cout<<i<<" ";
	}

	cout<<endl;

	list<int> l2{1,2,5,7,9,8};

	l2.sort();

	for(auto&& i : l2){
		cout<<i<<" ";
	}

	return 0;
}



