#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i,n) for(int i = 0; i < n; i++)
#define v(i) vector<i>

int main(){
	int N, M;
	cin >> N >> M;
	v(int) R(M),C(M);
	rep(i, M) {
		cin >> R[i] >> C[i];
		R[i]--;
		C[i]--;
	}

	set<ll> A;
	int res = 0;

	rep(i, M){
		ll r = R[i];
		ll c = C[i];

		ll d = (r+(c*N));
		ll e = ((r+1)+(c*N));
		ll f = (r + ((c+1)*N));
		ll g = ((r+1) + ((c+1)*N));

		ll dd = (r + ((c-1)*N));
		ll ee = ((r+1) + ((c-1)*N));

		if(A.count(d) == 0 && A.count(e) == 0 && A.count(f) == 0 && A.count(g) == 0){
			A.insert(d);
			A.insert(e);
			A.insert(f);
			A.insert(g);
			res++;
		}else if(A.count(dd) == 0 && A.count(ee) == 0 && A.count(f) == 0 && A.count(g) == 0){
			A.insert(dd);
			A.insert(ee);
			A.insert(f);
			A.insert(g);
			res++;
		}
	}
	cout << res << endl;
	return 0;
}