#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
    cin >> n;
    string *s = new string[n];
    for (int i=0; i<n; i++)
        cin >> s[i];
    for (int i =0;i<n;i++)
    {
        if (s[i].length() > 10) cout << s[i][0] << s[i].length() - 2 << s[i][s[i].length() - 1];
        else cout << s[i];
        cout << "\n";
    }
}
