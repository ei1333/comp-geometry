---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/area.hpp
    title: src/area.hpp
  - icon: ':heavy_check_mark:'
    path: src/contains.hpp
    title: src/contains.hpp
  - icon: ':heavy_check_mark:'
    path: src/convex_cut.hpp
    title: src/convex_cut.hpp
  - icon: ':heavy_check_mark:'
    path: src/convex_hull.hpp
    title: src/convex_hull.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_convex.hpp
    title: src/is_convex.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_3_A.test.cpp
    title: test/aoj-cgl/CGL_3_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_3_B.test.cpp
    title: test/aoj-cgl/CGL_3_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_3_C.test.cpp
    title: test/aoj-cgl/CGL_3_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_4_A.test.cpp
    title: test/aoj-cgl/CGL_4_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_4_C.test.cpp
    title: test/aoj-cgl/CGL_4_C.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/polygon.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#line 2 \"src/point.hpp\"\n\n#line 4 \"src/point.hpp\"\nusing namespace\
    \ std;\n\n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\nusing namespace\
    \ std;\n\n// base\nnamespace geometry {\n    using real_number = long double;\n\
    \n    const real_number eps = 1e-8;\n    const real_number pi = acos(-1);\n\n\
    \    inline int sign(real_number r) {\n        if (r < -eps) return -1;\n    \
    \    if (r > +eps) return +1;\n        return 0;\n    }\n\n    inline bool is_equal(real_number\
    \ r1, real_number r2) {\n        return sign(r1 - r2) == 0;\n    }\n}\n#line 7\
    \ \"src/point.hpp\"\n\n// point\nnamespace geometry {\n  using point = complex<\
    \ real_number >;\n  using points = vector< point >;\n\n  istream &operator>>(istream\
    \ &is, point &p) {\n    real_number x, y;\n    is >> x >> y;\n    p = point(x,\
    \ y);\n    return is;\n  }\n\n  ostream &operator<<(ostream &os, const point &p)\
    \ {\n    return os << p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const\
    \ point &p, const real_number &k) {\n    return point(p.real() * k, p.imag() *\
    \ k);\n  }\n\n  point rotate(const real_number &theta, const point &p) {\n   \
    \ return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n        sin(theta)\
    \ * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line 7 \"src/polygon.hpp\"\n\
    \n// polygon\nnamespace geometry {\n  using polygon = vector< point >;\n  using\
    \ polygons = vector< polygon >;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./point.hpp\"\n\n// polygon\nnamespace geometry {\n  using polygon = vector<\
    \ point >;\n  using polygons = vector< polygon >;\n}\n"
  dependsOn:
  - src/point.hpp
  - src/base.hpp
  isVerificationFile: false
  path: src/polygon.hpp
  requiredBy:
  - src/convex_hull.hpp
  - src/contains.hpp
  - src/convex_cut.hpp
  - src/is_convex.hpp
  - src/area.hpp
  timestamp: '2020-10-14 18:34:04+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj-cgl/CGL_3_C.test.cpp
  - test/aoj-cgl/CGL_4_C.test.cpp
  - test/aoj-cgl/CGL_4_A.test.cpp
  - test/aoj-cgl/CGL_3_B.test.cpp
  - test/aoj-cgl/CGL_3_A.test.cpp
documentation_of: src/polygon.hpp
layout: document
redirect_from:
- /library/src/polygon.hpp
- /library/src/polygon.hpp.html
title: src/polygon.hpp
---