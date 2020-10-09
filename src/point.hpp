#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.cpp"

// point
namespace geometry {
  using point = complex< real_number >;
  using points = vector< point >;

  istream &operator>>(istream &is, point &p) {
    real_number x, y;
    is >> x >> y;
    p = point(x, y);
    return is;
  }

  ostream &operator<<(ostream &os, const point &p) {
    return os << p.real() << " " << p.imag();
  }

  point operator*(const point &p, const real_number &k) {
    return point(p.real() * k, p.imag() * k);
  }

  point rotate(const real_number &theta, const point &p) {
    return point(cos(theta) * p.real() + sin(-theta) * p.imag(),
        sin(theta) * p.real() + cos(-theta) * p.imag());
  }
}