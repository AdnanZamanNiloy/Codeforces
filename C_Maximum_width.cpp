#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fr first
#define sc second
#define mp make_pair
#define pb push_back
#define pp pop_back
#define nn "\n"
#define mod 1000000007
#define N 200005
#define sz(x) (int)(x).size()
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define grtsrt(v) sort(v.begin(), v.end(), greater<int>())
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())

void puzzleout()
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    vector<int> dp1(m), dp2(m);
    for (int i = 0, j = 0; i < m; i++, j++)
    {
        while (s[j] != t[i])
            j++;
        dp1[i] = j;
    }

    for (int i = m - 1, j = n - 1; i >= 0; i--, j--)
    {
        while (s[j] != t[i])
            j--;
        dp2[i] = j;
    }
    int ans = 0;
    for (int i = 0; i < m - 1; i++)
    {
        ans = max(ans, dp2[i + 1] - dp1[i]);
    }

    cout << ans << nn;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int TC = 1;
    // cin >> TC;
    while (TC--)
    {
        puzzleout();
    }
    return 0;
}