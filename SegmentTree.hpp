#pragma once

#include <bits/stdc++.h>

template <class Monoid>
class SegmentTree {
private:
  using Func = std::function<Monoid(Monoid, Monoid)>;
  const int m_size;
  const Func merge;
  const Monoid unity; // 単位元
  std::vector<Monoid> dat;

public:
  SegmentTree(int n, const Monoid &u, Func f)
      : m_size(1 << (std::__lg(n + 5) + 1)), merge(f), unity(u),
        dat(m_size * 2, unity) {}

  void set(int k, const Monoid &v) { dat[k + m_size] = v; }

  Monoid &operator[](int k) { return dat[k + m_size]; }

  const Monoid &operator[](int k) const { return dat[k + m_size]; }

  void build() {
    for (int k = m_size - 1; k > 0; --k)
      dat[k] = merge(dat[2 * k], dat[2 * k + 1]);
  }

  void update(int k, const Monoid &v) {
    dat[k += m_size] = v;
    while (k >>= 1)
      dat[k] = merge(dat[2 * k], dat[2 * k + 1]);
  }

  // [a, b)
  Monoid query(int a, int b) const {
    Monoid L = unity, R = unity;
    for (a += m_size, b += m_size; a < b; a >>= 1, b >>= 1) {
      if (a & 1)
        L = merge(L, dat[a++]);
      if (b & 1)
        R = merge(dat[--b], R);
    }
    return merge(L, R);
  }
};
