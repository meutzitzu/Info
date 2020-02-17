

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int NMAX = 2e5 + 5;

int n;
vector <int> G[NMAX];
int subtree[NMAX];

void calcSubtree(int nod) {
   subtree[nod] = 1;
   for (auto v: G[nod])
      if (subtree[v] == 0) {
         calcSubtree(v);
         subtree[nod] += subtree[v];
      }
}

int main()
{
   cin >> n;
   for (int i = 1; i < n; i++) {
      int u, v;
      cin >> u >> v;
      G[u].push_back(v);
      G[v].push_back(u);
   }

   //calcSubtree(1);

   ll ansFinal = 0;
   for (int i = 1; i <= n; i++) {
      memset(subtree, 0, sizeof(subtree));
      calcSubtree(i);

      ll ans = 0;
      for (int j = 1; j <= n; j++)
         ans += subtree[j] - 1;
      ansFinal = max(ansFinal, ans);
   }

   cout << ansFinal;


   return 0;
}
