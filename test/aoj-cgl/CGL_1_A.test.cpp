// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_1_A
// verification-helper: ERROR 0.00000001

#include <bits/stdc++.h>
using namespace std;

#include "../../src/projection.hpp"

using namespace geometry;
int main() {
  point p1, p2;
  cin >> p1 >> p2;

  line l(p1, p2);

  int q;
  cin >> q;

  cout << fixed << setprecision(15);
  while (q--) {
    point p;
    cin >> p;

    cout << projection(l, p) << endl;
  }
}
