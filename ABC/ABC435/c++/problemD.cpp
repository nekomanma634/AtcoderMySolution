#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define v(i) vector<i> 

int main(){
	int N,M,Q;
	cin >> N >> M;
	v(int) X(M),Y(M);
	rep(i, M) { cin >> X[i] >> Y[i]; }
	cin >> Q;
	vector<pair<int, int>> query(Q);
	rep(i, Q) { cin >> query[i].first >> query[i].second; }

	cout << "No";
	return 0;
}