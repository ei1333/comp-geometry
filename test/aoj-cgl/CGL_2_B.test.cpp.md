---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/ccw.hpp
    title: src/ccw.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_intersect.hpp
    title: src/is_intersect.hpp
  - icon: ':heavy_check_mark:'
    path: src/line.hpp
    title: src/line.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/product.hpp
    title: src/product.hpp
  - icon: ':heavy_check_mark:'
    path: src/segment.hpp
    title: src/segment.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_B
  bundledCode: "#line 1 \"test/aoj-cgl/CGL_2_B.test.cpp\"\n// verification-helper:\
    \ PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_B\n\n\
    #include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/segment.hpp\"\n\
    \n#line 4 \"src/segment.hpp\"\nusing namespace std;\n\n#line 2 \"src/line.hpp\"\
    \n\n#line 4 \"src/line.hpp\"\nusing namespace std;\n\n#line 2 \"src/point.hpp\"\
    \n\n#line 4 \"src/point.hpp\"\nusing namespace std;\n\n#line 2 \"src/base.hpp\"\
    \n\n#line 4 \"src/base.hpp\"\nusing namespace std;\n\n// base\nnamespace geometry\
    \ {\n    using real_number = long double;\n\n    const real_number eps = 1e-8;\n\
    \    const real_number pi = acos(-1);\n\n    inline int sign(real_number r) {\n\
    \        if (r < -eps) return -1;\n        if (r > +eps) return +1;\n        return\
    \ 0;\n    }\n\n    inline bool is_equal(real_number r1, real_number r2) {\n  \
    \      return sign(r1 - r2) == 0;\n    }\n}\n#line 7 \"src/point.hpp\"\n\n// point\n\
    namespace geometry {\n  using point = complex< real_number >;\n  using points\
    \ = vector< point >;\n\n  istream &operator>>(istream &is, point &p) {\n    real_number\
    \ x, y;\n    is >> x >> y;\n    p = point(x, y);\n    return is;\n  }\n\n  ostream\
    \ &operator<<(ostream &os, const point &p) {\n    return os << p.real() << \"\
    \ \" << p.imag();\n  }\n\n  point operator*(const point &p, const real_number\
    \ &k) {\n    return point(p.real() * k, p.imag() * k);\n  }\n\n  point rotate(const\
    \ real_number &theta, const point &p) {\n    return point(cos(theta) * p.real()\
    \ + sin(-theta) * p.imag(),\n        sin(theta) * p.real() + cos(-theta) * p.imag());\n\
    \  }\n}\n#line 7 \"src/line.hpp\"\n\n// line \nnamespace geometry {\n  struct\
    \ line {\n    point a, b;\n\n    line() = default;\n    line(point a, point b)\
    \ : a(a), b(b) {}\n  };\n\n  using lines = vector< line >;\n}\n#line 7 \"src/segment.hpp\"\
    \n\n// segment\nnamespace geometry {\n    struct segment : line {\n        segment()\
    \ = default;\n        using line::line;\n    };\n\n    using segments = vector<\
    \ segment >;\n}\n#line 2 \"src/is_intersect.hpp\"\n\n#line 4 \"src/is_intersect.hpp\"\
    \nusing namespace std;\n\n#line 2 \"src/ccw.hpp\"\n\n#line 4 \"src/ccw.hpp\"\n\
    using namespace std;\n\n#line 2 \"src/product.hpp\"\n\n#line 4 \"src/product.hpp\"\
    \nusing namespace std;\n\n#line 7 \"src/product.hpp\"\n\n// product\nnamespace\
    \ geometry {\n    real_number cross(const point &a, const point &b) {\n      \
    \  return a.real() * b.imag() - a.imag() * b.real();\n    }\n\n    real_number\
    \ dot(const point &a, const point &b) {\n        return a.real() * b.real() +\
    \ a.imag() * b.imag();\n    }\n}\n#line 7 \"src/ccw.hpp\"\n\n// ccw\nnamespace\
    \ geometry {\n  constexpr int COUNTER_CLOCKWISE = +1;\n  constexpr int CLOCKWISE\
    \         = -1;\n  constexpr int ONLINE_BACK       = +2; // c-a-b\n  constexpr\
    \ int ONLINE_FRONT      = -2; // a-b-c\n  constexpr int ON_SEGMENT        =  0;\
    \ // a-c-b\n  int ccw(const point &a, point b, point c) {\n    b = b - a, c =\
    \ c - a;\n    if (sign(cross(b, c)) == +1) return COUNTER_CLOCKWISE;\n    if (sign(cross(b,\
    \ c)) == -1) return CLOCKWISE;\n    if (sign(dot(b, c)) == -1) return ONLINE_BACK;\n\
    \    if (norm(b) < norm(c)) return ONLINE_FRONT;\n    return ON_SEGMENT;\n  }\n\
    }\n#line 8 \"src/is_intersect.hpp\"\n\n// intersect\nnamespace geometry {\n  bool\
    \ is_intersect(const segment &s1, const segment &s2) {\n    return ccw(s1.a, s1.b,\
    \ s2.a) * ccw(s1.a, s1.b, s2.b) <= 0 &&\n           ccw(s2.a, s2.b, s1.a) * ccw(s2.a,\
    \ s2.b, s1.b) <= 0;\n  }\n}\n#line 8 \"test/aoj-cgl/CGL_2_B.test.cpp\"\n\nusing\
    \ namespace geometry;\nint main() {\n  int q;\n  cin >> q;\n\n  while (q--) {\n\
    \    segment s1, s2;\n    cin >> s1.a >> s1.b >> s2.a >> s2.b;\n\n    cout <<\
    \ is_intersect(s1, s2) << endl;\n  }\n}\n"
  code: "// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_B\n\
    \n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/segment.hpp\"\
    \n#include \"../../src/is_intersect.hpp\"\n\nusing namespace geometry;\nint main()\
    \ {\n  int q;\n  cin >> q;\n\n  while (q--) {\n    segment s1, s2;\n    cin >>\
    \ s1.a >> s1.b >> s2.a >> s2.b;\n\n    cout << is_intersect(s1, s2) << endl;\n\
    \  }\n}\n"
  dependsOn:
  - src/segment.hpp
  - src/line.hpp
  - src/point.hpp
  - src/base.hpp
  - src/is_intersect.hpp
  - src/ccw.hpp
  - src/product.hpp
  isVerificationFile: true
  path: test/aoj-cgl/CGL_2_B.test.cpp
  requiredBy: []
  timestamp: '2020-10-15 00:41:16+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj-cgl/CGL_2_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj-cgl/CGL_2_B.test.cpp
- /verify/test/aoj-cgl/CGL_2_B.test.cpp.html
title: test/aoj-cgl/CGL_2_B.test.cpp
---