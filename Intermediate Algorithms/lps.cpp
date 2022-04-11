/*
    LPS: Longest Palindromic Subsequence - Solução Ruim
*/

#include <iostream>
using namespace std;

int lps(string& s, int i, int j) {
    if (i == j)
        return 1;
    if (s[i] == s[j] && (i + 1 == j))
        return 2;
    if (s[i] == s[j])
        return (lps(s, i + 1, j - 1) + 2);
    return max(lps(s, i, j - 1), lps(s, i + 1, j));
}

int main() {
    string s("ATCATA");

    cout << lps(s, 0, s.size() - 1);

    return 0;
}