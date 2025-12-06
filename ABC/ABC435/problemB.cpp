#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define v(i) vector<i>

bool yakusu(v(int) A, int i, int j){
	int sum = 0;
	for(int k = i; k <= j; k++){
		sum += A[k];
	}

	for(int k = i; k <= j; k++){
		if(sum % A[k] == 0){
			return true;
		}
	}

	return false;

}

int main(){
	int N;
	cin >> N;
	v(int) A(N);
	rep(i, N){ cin >> A[i]; }

	int res = 0;

	rep(i,N){
		for(int j = i; j < N; j++){
			if(j > i && (yakusu(A, i, j) == false)){
				res++;
			}
		}
	}
	cout << res;
	return 0;
}