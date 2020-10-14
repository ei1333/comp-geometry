---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/angle.hpp
    title: src/angle.hpp
  - icon: ':heavy_check_mark:'
    path: src/area.hpp
    title: src/area.hpp
  - icon: ':heavy_check_mark:'
    path: src/ccw.hpp
    title: src/ccw.hpp
  - icon: ':warning:'
    path: src/circle.hpp
    title: src/circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/compare.hpp
    title: src/compare.hpp
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
    path: src/cross_point.hpp
    title: src/cross_point.hpp
  - icon: ':heavy_check_mark:'
    path: src/distance.hpp
    title: src/distance.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_convex.hpp
    title: src/is_convex.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_intersect.hpp
    title: src/is_intersect.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_orthogonal.hpp
    title: src/is_orthogonal.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_parallel.hpp
    title: src/is_parallel.hpp
  - icon: ':heavy_check_mark:'
    path: src/line.hpp
    title: src/line.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/polygon.hpp
    title: src/polygon.hpp
  - icon: ':heavy_check_mark:'
    path: src/product.hpp
    title: src/product.hpp
  - icon: ':heavy_check_mark:'
    path: src/projection.hpp
    title: src/projection.hpp
  - icon: ':heavy_check_mark:'
    path: src/reflection.hpp
    title: src/reflection.hpp
  - icon: ':heavy_check_mark:'
    path: src/segment.hpp
    title: src/segment.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_1_A.test.cpp
    title: test/aoj-cgl/CGL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_1_B.test.cpp
    title: test/aoj-cgl/CGL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_1_C.test.cpp
    title: test/aoj-cgl/CGL_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_2_A.test.cpp
    title: test/aoj-cgl/CGL_2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_2_B.test.cpp
    title: test/aoj-cgl/CGL_2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_2_C.test.cpp
    title: test/aoj-cgl/CGL_2_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_2_D.test.cpp
    title: test/aoj-cgl/CGL_2_D.test.cpp
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
  bundledCode: "#line 2 \"src/base.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n// base\nnamespace geometry {\n    using real_number = long double;\n\
    \n    const real_number eps = 1e-8;\n    const real_number pi = acos(-1);\n\n\
    \    inline int sign(real_number r) {\n        if (r < -eps) return -1;\n    \
    \    if (r > +eps) return +1;\n        return 0;\n    }\n\n    inline bool is_equal(real_number\
    \ r1, real_number r2) {\n        return sign(r1 - r2) == 0;\n    }\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n// base\n\
    namespace geometry {\n    using real_number = long double;\n\n    const real_number\
    \ eps = 1e-8;\n    const real_number pi = acos(-1);\n\n    inline int sign(real_number\
    \ r) {\n        if (r < -eps) return -1;\n        if (r > +eps) return +1;\n \
    \       return 0;\n    }\n\n    inline bool is_equal(real_number r1, real_number\
    \ r2) {\n        return sign(r1 - r2) == 0;\n    }\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/base.hpp
  requiredBy:
  - src/distance.hpp
  - src/convex_hull.hpp
  - src/ccw.hpp
  - src/contains.hpp
  - src/circle.hpp
  - src/convex_cut.hpp
  - src/is_orthogonal.hpp
  - src/compare.hpp
  - src/cross_point.hpp
  - src/point.hpp
  - src/is_intersect.hpp
  - src/is_parallel.hpp
  - src/line.hpp
  - src/is_convex.hpp
  - src/segment.hpp
  - src/reflection.hpp
  - src/projection.hpp
  - src/polygon.hpp
  - src/angle.hpp
  - src/area.hpp
  - src/product.hpp
  timestamp: '2020-10-14 18:34:04+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj-cgl/CGL_1_B.test.cpp
  - test/aoj-cgl/CGL_3_C.test.cpp
  - test/aoj-cgl/CGL_2_C.test.cpp
  - test/aoj-cgl/CGL_1_A.test.cpp
  - test/aoj-cgl/CGL_2_B.test.cpp
  - test/aoj-cgl/CGL_2_D.test.cpp
  - test/aoj-cgl/CGL_4_C.test.cpp
  - test/aoj-cgl/CGL_4_A.test.cpp
  - test/aoj-cgl/CGL_1_C.test.cpp
  - test/aoj-cgl/CGL_3_B.test.cpp
  - test/aoj-cgl/CGL_2_A.test.cpp
  - test/aoj-cgl/CGL_3_A.test.cpp
documentation_of: src/base.hpp
layout: document
redirect_from:
- /library/src/base.hpp
- /library/src/base.hpp.html
title: src/base.hpp
---