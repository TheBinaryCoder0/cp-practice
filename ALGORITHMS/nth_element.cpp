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

void clearInputBuffer() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {

    cin.tie(0)->sync_with_stdio(0);

    vector<int> v = {1,5,2,4,71,23};

    for(auto&& i : v){
        cout<<i<<" ";
    }

    cout<<endl;

    // 3rd smallest element will be at the nth position (3rd position)
    
    nth_element(v.begin(),v.begin()+2,v.end());

    for(auto&& i : v){
        cout<<i<<" ";
    }

    return 0;
}
	
