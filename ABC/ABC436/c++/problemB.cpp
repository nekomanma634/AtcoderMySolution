#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define v(i) vector<i>

int AddMod(int a, int b, int N){
	return (a % N + b % N) % N;
}

int MinMod(int a, int b, int N){
	return (a % N - (b * -1) % N + N) % N;
}

int main(){
	int N;
	cin >> N;
	vector<vector<int>> A(N, vector<int>(N));

	int r = 0;
	int c = (N-1)/2;
	int k = 1;

	A[r][c] = k;

	rep(i, (N*N-1)){
		int rIdx = MinMod(r, -1, N);
		int cIdx = AddMod(c, 1, N);

		if(A[rIdx][cIdx] == 0){
			r = rIdx;
			c = cIdx;
			k = k + 1;
			A[rIdx][cIdx] = k;
		}else{
			r = AddMod(r, 1, N);
			k = k + 1;
			A[r][c] = k;
		}
	}

	rep(i, N){
		rep(j,N){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}