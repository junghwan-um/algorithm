#include <bits/stdc++.h>

using namespace std;

set<int> factor(int a) {
    set<int> st;
	for (int i = 1; i * i <= a; i++) {
		if (i * i == a) {
			st.insert(i);
            
		}
        else if (a % i == 0) {
            st.insert(i);
            st.insert(a / i);
		}
	}
    return st;
}

int solution(int n) {
    set<int> st = factor(n);
    return st.size();
}