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


struct Custom {
    int value;
    Custom(int v) : value(v) {} // Custom(int v) { value = v; } 

    bool operator<(const Custom& other) const {
        return other.value < value; 
    }
};


int main() {
	
	cin.tie(0)->sync_with_stdio(0);

	priority_queue<int> pq;
	pq.push(1);
	pq.push(4);
	pq.push(2);
	pq.push(3);
	pq.push(5);

	cout<<"MAX ELEM: "<<endl;
	cout<<pq.top()<<endl;
	pq.pop();
	cout<<"MAX ELEM AFTER ONE POP: "<<endl;
	cout<<pq.top()<<endl;

	// NOW IF WE WANT A MIN-HEAP, THEN 

	// METHOD-1: NEGATE ALL NUMBERS

	priority_queue<int> pq1;
	pq1.push(-1);
	pq1.push(-2);
	pq1.push(-3);

	int actual = - pq1.top();
	cout<<"NEGATE ALL NUMBERS: "<<endl;
	cout<<actual<<endl;

	// METHOD-2: USE greater<T> AS CUSTOM COMPARISON FUNCTION (DEFINED IN <functional> HEADER)

	// GENERALLY, greater<T> MAKES THE ARRANGEMENT IN DESCENDING ORDER 
	// BUT IN CASE OF PRIORITY QUEUE, IT MAKES THE ARRANGEMENT IN ASCENDING ORDER

	priority_queue<int, vector<int>, greater<int>> pq2;
	pq2.push(7);
	pq2.push(8);
	pq2.push(9);

	cout<<"greater<T>: "<<endl;
	cout<<pq2.top()<<endl;

	// METHOD-3: IMPLEMENT operator< WITH REVERSED LOGIC (NOT RECOMMENDED)

	priority_queue<Custom> pq3;
    pq3.push(Custom(1));
    pq3.push(Custom(4));
    pq3.push(Custom(2));
    pq3.push(Custom(3));
    pq3.push(Custom(5));

    cout << "MIN ELEM:" << endl;
    cout << pq3.top().value << endl;
    pq3.pop();
    cout << "MIN ELEM AFTER ONE POP:" << endl;
    cout << pq3.top().value << endl;



	return 0;
}



