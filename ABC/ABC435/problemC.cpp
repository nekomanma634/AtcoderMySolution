#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define v(i) vector<i>

int main(){
	int N;
	cin >> N;
	v(int) A(N);
	rep(i, N){ cin >> A[i]; }

	int crr = A[0];

	for(int i = 0; i < N; i++){
		if(crr <= i){
			cout << i;
			return 0;
		}

		crr = max(crr, i+A[i]);
	}
	cout << N;
	return 0;
}