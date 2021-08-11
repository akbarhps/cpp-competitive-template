/**
 * Created by akbar on 8/10/2021.
 * https://github.com/akbarhps/cpp-competitive-template
 */

//#include <bits/stdc++.h>
// bits/stdc++ is not std lib
// some compiler wont work

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>

using namespace std;

//===================================================================================================//
//======================================        TYPEDEF        ======================================//
//===================================================================================================//

typedef long L;
typedef unsigned U;
typedef unsigned long UL;
typedef long long LL;
typedef unsigned long long ULL;

template<typename T>
using Ref = reference_wrapper<T>;

//===================================================================================================//
//======================================         LOOP         =======================================//
//===================================================================================================//

#define For(index, from, to) for (size_t (index) = (from); (index) < (to); (index)++)
#define For_(index, to) For(index, 0, to)
#define ForDec(index, from, to) for (size_t index = (from) - 1; (index) >= (to); (index)--)
#define ForDec_(index, from) ForDec(index, from, 0)
#define WDec(index) while ((index)--)
#define Each(element, iterable) for (auto &(element) : (iterable))

//===================================================================================================//
//======================================         UTIL         =======================================//
//===================================================================================================//

#define Pop pop_back
#define Push push_back
#define Emplace emplace_back
#define Sqr(var) (1LL * (var) * (var))
#define VecAll(vec) (vec).begin(), (vec).end()
#define SqrMod(var, mod) ((1LL * (var) * (var)) % (mod))
#define ArrSize(arr) (sizeof(arr) / sizeof((arr)[0]))
#define Clear(iterable) Each(e, iterable) element = 0
#define Fill(iterable, length, value) Each(e, iterable) element = value

//===================================================================================================//
//====================================       std::sort       ========================================//
//===================================================================================================//

template<typename T, size_t N>
inline void Sort(T (&arr)[N],
                 bool isDecrement) {
    if (isDecrement) sort(arr, arr + ArrSize(arr), greater<>());
    else sort(arr, arr + ArrSize(arr));
}

template<typename T, size_t N, typename U>
inline void Sort(T (&arr)[N],
                 const U &comp) {
    sort(arr, arr + ArrSize(arr), comp);
}

template<typename T>
inline void Sort(vector<T> &vec,
                 bool isDecrement) {
    if (isDecrement) sort(VecAll(vec), greater<>());
    else sort(VecAll(vec));
}

template<typename T, typename U>
inline void Sort(vector<T> &vec,
                 const U &comp) {
    sort(VecAll(vec), comp);
}

template<typename T, typename U>
inline void Sort(const map<T, U> &map) {
    vector<pair<T, U>> vec;
    vec.reserve(map.size());
    Each(e, map) vec.Push(e);
    Sort(vec, false);
}

template<typename T, typename U, typename V>
inline void Sort(const map <T, U> &map,
                 const V &comp) {
    vector<pair<T, U>> vec;
    vec.reserve(map.size());
    Each(e, map) vec.Push(e);
    Sort(vec, comp);
}

//===================================================================================================//
//======================================         I/O         ========================================//
//===================================================================================================//

template<typename T>
inline void Scan(T &var) {
    cin >> var;
}

inline void Scan(string &var,
                 bool isGetLine) {
    getline(cin, var);
}

template<typename T, typename U>
inline void Scan(T &var1,
                 U &var2) {
    cin >> var1 >> var2;
}

template<typename T, typename U, typename V>
inline void Scan(T &var1,
                 U &var2,
                 V &var3) {
    cin >> var1 >> var2 >> var3;
}

template<typename T, size_t N>
inline void Scan(T (&arr)[N]) {
    Each(e, arr) Scan(e);
}

template<typename T, size_t N>
inline void Scan(T (&arr)[N],
                 const int &size) {
    For_(i, size) Scan(arr[i]);
}

template<typename T, size_t N>
inline void Scan(T (&arr)[N],
                 const int &startIndex,
                 const int &endIndex) {
    For(i, startIndex, endIndex) Scan(arr[i]);
}

template<typename T>
inline void Scan(vector<T> &vec,
                 const int &size) {
    For_(i, size) {
        T var;
        Scan(var);
        vec.Push(var);
    }
}

template<typename T>
inline void Scan(vector<T> &vec,
                 const int &startIndex,
                 const int &endIndex) {
    For(i, startIndex, endIndex) {
        T var;
        Scan(var);
        vec[i] = var;
    }
}

template<class C, typename T, typename U>
inline void Scan(vector<C> &vec,
                 const int &size) {
    For_(i, size) {
        T e1;
        U e2;
        Scan(e1, e2);
        vec.Emplace(e1, e2);
    }
}

template<class C, typename T, typename U, typename V>
inline void Scan(vector<C> &vec,
                 const int &size) {
    For_(i, size) {
        T e1;
        U e2;
        V e3;
        Scan(e1, e2, e3);
        vec.Emplace(e1, e2, e3);
    }
}

template<typename T, typename U>
inline void Scan(map<T, U> &map,
                 const int &size) {
    For_(i, size) {
        T first;
        U second;
        Scan(first, second);
        map[first] = second;
    }
}

inline void PrintStr(const string &var) {
    cout << var << endl;
}

template<typename T>
inline void Print(const T &var) {
    cout << var << endl;
}

template<typename T, typename U>
inline void Print(const T &var1,
                  const U &var2) {
    cout << var1 << " " << var2 << endl;
}

template<typename T, typename U, typename V>
inline void Print(const T &var1,
                  const U &var2,
                  const V &var3) {
    cout << var1 << " " << var2 << " " << var3 << endl;
}

template<typename T, size_t N>
inline void Print(const T (&arr)[N]) {
    Each(e, arr) Print(e);
}

template<typename T>
inline void Print(const vector<T> &vec) {
    Each(e, vec) Print(e);
}

template<typename T, typename U>
inline void Print(const map<T, U> &map) {
    Each(e, map) Print(e.first, e.second);
}

//===================================================================================================//
//======================================         END         ========================================//
//===================================================================================================//

int main() {

}