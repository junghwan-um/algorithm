#include <bits/stdc++.h>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for (int i = 0; i <= t.length() - p.length(); ++i) {
        string s = t.substr(i, p.length());
        if (stol(s) <= stol(p)) ++answer;
    }
    return answer;
}