#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v1{1,2,3,4,5};

	v1.pop_back();
	v1.push_back(10);

	int n;
	cin>>n;
	vector<int> v2(n);
	for(int i=0;i<n;i++){
		cin>>v2[i];
	}

	for(auto&& i : v1){
		cout<<i<<" ";
	}

	cout<<endl;

	for(auto&& i : v2){
		cout<<i<<" ";
	}
	return 0;
}
