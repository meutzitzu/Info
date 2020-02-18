#include <bits/stdc++.h>
using namespace std;

// ALO, dc ti l-ai bagat in repo0u meu ???

const long double ERR = 1e-7;

int n;
int x[100005], y[100005];
bool inauntru[3005][3005];

inline int det(int ax,int ay,int bx,int by,int cx,int cy){
   return ax * (by - cy) + bx * (cy - ay) + cx * (ay - by);
}

/*inline int getReal(long double x) {
   if (abs(x - round(x)) < ERR)
      return round(x);
   return x;
}*/

inline bool maiMic(long double a, long double b) {
   return a < b && abs(a - b) > ERR;
}

inline bool diferite(long double a, long double b) {
   return abs(a - b) > ERR;
}

inline bool maiMicEgal(long double a, long double b) {
   return maiMic(a, b) || !diferite(a, b);
}

inline int realFloor(long double x) {
   if (abs(x - (int)x) < ERR)
      return (int)x;
   else
      return floor(x);
}

inline int realCeil(long double x) {
   if (abs(x - (int)x) < ERR)
      return (int)x;
   else
      return ceil(x);
}

bool subtask3(){
   bool ok = (x[n] == x[1] || y[n] == y[1]);
   for(int i = 1;i < n;i++){
      ok &= (x[i] == x[i + 1] || y[i] == y[i + 1]);
   }
   return ok;
}

long double getArie(int ind1, int ind2, int lin, int col) {
   return abs(det(x[ind1], y[ind1], x[ind2], y[ind2], lin, col)) / 2.00;
}

bool subtask5() {
   return 1;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   cin >> n;
   for (int i = 1; i <= n; i++) {
      cin >> x[i] >> y[i];
   }
   x[n + 1] = x[1]; y[n + 1] = y[1];

   if (subtask3()) {
      int ans = 0;
      for(int i = 1;i <= n;i++){
         ans += det(0,0,x[i],y[i],x[i % n + 1],y[i % n + 1]);
      }
      ans = abs(ans) / 2;
      cout << ans;
      return 0;
   }


   for (int i = 0; i <= 100; i++) {
         vector <long double> v;
         for (int lin = 1; lin <= n; lin++) {
            // verific dreapta (lin, lin+1) unde se intersecteaza cu dreapta y=i
            long double aici = 0;
            if (x[lin] != x[lin + 1] && y[lin] != y[lin + 1]) {
               long double a = 1.00 * (y[lin] - y[lin + 1]) / (x[lin] - x[lin + 1]);
               long double b = y[lin] - a * x[lin];

               aici = 1.00 * (i - b) / a;
            }
            else if (x[lin] == x[lin + 1]) {
               aici = x[lin];
            }
            else if (y[lin] == y[lin + 1]) {
               if (i == y[lin]) {
                  /*v.push_back(min(x[lin], x[lin + 1]));
                  v.push_back(max(x[lin], x[lin + 1]));*/
                  for (int k = min(x[lin], x[lin + 1]); k <= max(x[lin], x[lin + 1]); k++)
                     inauntru[k][i] = 1;
                  /*for (int k = min(x[lin], x[lin + 1]); k <= max(x[lin], x[lin + 1]); k++)
                     //if (min(1.00 * x[lin], 1.00 * x[lin + 1]) <= k && k <= max(1.00 * x[lin], 1.00 * x[lin + 1]))
                        v.push_back(1.00 * k);*/
               }
               aici = -1000;
            }

            if (maiMicEgal(min(1.00 * x[lin], 1.00 * x[lin + 1]), aici) && maiMicEgal(aici, max(1.00 * x[lin], 1.00 * x[lin + 1]))
               && maiMicEgal(min(1.00 * y[lin], 1.00 * y[lin + 1]), 1.00 * i) && maiMicEgal(1.00 * i, max(1.00 * y[lin], 1.00 * y[lin + 1])))
                  v.push_back(aici);
            /*if (min(1.00 * x[lin], 1.00 * x[lin + 1]) <= aici && aici <= max(1.00 * x[lin], 1.00 * x[lin + 1])
               && min(1.00 * y[lin], 1.00 * y[lin + 1]) <= 1.00 * i && 1.00 * i <= max(1.00 * y[lin], 1.00 * y[lin + 1]))
                  v.push_back(aici);*/
         }
         sort(v.begin(), v.end());
         vector <long double> v2;
         for (int i = 0; i < (int)v.size(); i++) {
            if (i == 0 || diferite(v[i], v[i - 1])) {
               v2.push_back(v[i]);
            }
         }
         v = v2;

         /*cout << "y=" << i << ": ";
         for (auto x: v)
            cout << x << " ";
         cout << "\n";*/

         for (int k = 0; k < (int)v.size() - 1; k++) {
            // daca k e par, intre v[k] si v[k + 1] sunt in poligon
            if (k % 2 == 0) {
               for (int j = realCeil(v[k]); j <= realFloor(v[k + 1]); j++)
                  inauntru[j][i] = 1;
            }
         }
      }

      /*for (int i = 0; i <= 100; i++ ) {
         for (int j = 0; j <= 100; j++)
            if (inauntru[i][j])
               cout << i << ", " << j << "\n";
      }*/

      int ans = 0;
      for (int i = 0; i <= 100; i++)
         for (int j = 0; j <= 100; j++) {
            // coltul stanga-jos in (i, j)
            if (inauntru[i][j] && inauntru[i][j + 1] && inauntru[i + 1][j] && inauntru[i + 1][j + 1])
               ans++;
               //cout << i << " " << j << "\n";
         }
   cout << ans;


   return 0;
}
