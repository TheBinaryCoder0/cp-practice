#include<iostream>
#include<vector>

using namespace std;

int main() {

	// DEFINING A VECTOR

	vector<int> v1 = {1, 2, 3, 4, 5};

	v1.pop_back();
	v1.push_back(10);

	// TAKING USER INPUT

	int n1;
	cin >> n1;
	vector<int> v2(n1);

	for (int i = 0; i < n1; i++) {
		cin >> v2[i];
	}

	for (auto && i : v1) {
		cout << i << " ";
	}

	cout << endl;

	for (auto && i : v2) {
		cout << i << " ";
	}

	// DEFINING A 2D VECTOR
	cout << "Enter n and m: " << endl;
	int n, m;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int> (m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j<m ;j++){
			cin>>v[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j<m ;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}



	return 0;
}
