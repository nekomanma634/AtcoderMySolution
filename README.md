# AtcoderMySolution
This repository is for studying and providing solutions for Atcoder problems.  
このリポジトリは勉強がてら,Atcoderの解説を行っていくリポジトリです.  

# Coding Notes  
### Retrieve the original index of an element in a sorted array (c++)
ソートした配列の元のindexを取得する
```c++
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<pair<string,int>> A;

    A.push_back({"A",1});
    A.push_back({"B",2});
    A.push_back({"C",3});
    A.push_back({"D",4});
    A.push_back({"E",5});
    
    sort(A.rbegin(), A.rend());
    
    for(int i = 0; i < 5; i++){
      cout << "first:" << A[i].first << "  second:" << A[i].second << endl;
    }
    
    return 0;
}
```
