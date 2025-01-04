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

/*
    STL ALGORITHMIC FUNCTIONS:-

    1. sort
    2. nth_element
    3. reverse
    4. unique
    5. binary_search
    6. lower_bound
    7. upper_bound
    8. next_permutation
    9. rotate
    10. EXTRAS (may or may not be) :- i. all_of
                                      ii. none_of
                                      iii. any_of 
*/


int main() {

    cin.tie(0)->sync_with_stdio(0);

    vector<int> v = {1,5,2,4,71,23};

    // SORTING IN INCREASING ORDER (DEFAULT)

    sort(v.begin(),v.end());

    for(auto&& i : v){
        cout<<i<<" ";
    }

    cout<<endl;

    // SORTING IN NON-INCREASING ORDER (DECREASING ORDER)

    sort(v.begin(),v.end(),greater<int>());

    for(auto&& i : v){
        cout<<i<<" ";
    }

    return 0;
}
	
