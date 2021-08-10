/**
 * Created by akbar on 8/10/2021.
 */

// bits/stdc++ only support cpp 14 or less
//#include <bits/stdc++.h>

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

// typedef
#define TType template <typename T>

typedef long L;
typedef unsigned U;
typedef long long LL;
typedef unsigned long UL;
typedef unsigned long long ULL;

TType using V = vector<T>;
TType using CTR = const T &;

/**
 * loop
 * @param i index
 * @param x start value
 * @param n finish value
 *
 * d means decrement
 * w means while
 * gt means greater than
 */
#define Each(i, x) for (auto &i : x)
#define For(i, x, n) for (size_t i = x; i < n; ++i)
#define ForD(i, x, n) for (size_t i = x - 1; i >= n; i--)
#define For0(i, n) For(i, 0, n)
#define ForD0(i, n) ForD(i, n, 0)
#define WGT(x, y) while (x > y)
#define WGT0(x) while (x > 0)
#define WD(x) while (x--)
#define WDGT(x, y) while (x-- > y)

// util
#define Push push_back
#define Pop pop_back
#define Len length
#define Beg(v) v.begin()
#define End(v) v.end()
#define All(v) Beg(v), End(v)
#define ArrSize(x) sizeof(x) / sizeof(x[0])
#define Sqr(x) (ll)(x * x)
#define SqrM(x, mod) (ll)(x * x) % mod
#define Eq(x, y) x == y
#define Clear(x) Each(i, x) i = 0
#define Fill(x, n, v) For0(i, n) x.Push(v)

// stream
#define In(x) cin >> x
#define Out(x) cout << x << endl
#define InArr(x, n) For0(i, n) In(x[i])
#define OutArr(x) Each(i, x) Out(i)
#define OutVec(x) OutArr(x)

TType inline V<T> InVec(CTR<T> n)
{
    V<T> v;
    For0(i, n)
    {
        T e;
        In(e);
        v.Push(e);
    }
    return v;
}

/**
 * std::sort
 * @param x array or vector to sort
 *
 * A means array
 * D means decrement
 * V mean vector
 */
#define SortArr(x) sort(x, x + ArrSize(x))
#define SortArrD(x) sort(x, x + ArrSize(x), greater<>())
#define SortVec(x) sort(All(x))
#define SortVecD(x) sort(All(x), greater<>())

int main()
{
    V<LL> vec = InVec<LL>(5);
    SortVec(vec);
    OutVec(vec);
}