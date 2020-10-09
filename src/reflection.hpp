#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./projection.cpp"
#include "./line.cpp"
#include "./point.cpp"

namespace geometry {
  point reflection(const line &l, const point &p) {
    return p + (projection(l, p) - p) * 2;
  }
}