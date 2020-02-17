#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef long long ll;
const int NMAX = 2e3 + 5;

int n;
vector < pair<int, int> > G[NMAX];
pair <int, int> much[NMAX];
int orient[NMAX][NMAX];
int ans[NMAX];

inline bool okSens(pair <int, int> x) {
   return (orient[much[x.second].first][much[x.second].second] == x.first);
}

void dfs(int nod) {
   ans[nod] = 0;
   for (auto v: G[nod])
      if (okSens(v)) {
         if (ans[v.first] == -1)
            dfs(v.first);
         ans[nod] += ans[v.first] + 1;
      }
}

signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   cin >> n;
   for (int i = 1; i < n; i++) {
      int u, v;
      cin >> u >> v;
      G[u].push_back({v, i});
      G[v].push_back({u, i});
      much[i] = {u, v};
   }

   ll ansTotal = 0;
   for (ll mask = 0; mask < (1LL << (n - 1)); mask++) {
      for (int j = 0; j < n - 1; j++) {
         int aici = (mask & (1LL << j));
         orient[much[j + 1].first][much[j + 1].second] = aici ? much[j + 1].first : much[j + 1].second;
      }

      memset(ans, -1, sizeof(ans));
      for (int i = 1; i <= n; i++)
         if (ans[i] == -1)
            dfs(i);

      ll ansAici = 0;
      for (int i = 1; i <= n; i++)
         ansAici += ans[i];

      ansTotal = max(ansTotal, ansAici);

      if (ansAici == 32) {
         for (int i = 1; i < n; i++)
            cout << much[i].first << "," << much[i].second << ": " << orient[much[i].first][much[i].second] << "\n";
         return 0;
      }
   }

   cout << ansTotal;


   return 0;
}
