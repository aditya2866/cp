#include <array>
#include <cassert>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <complex>
#include <cmath>
#include <numeric>
#include <bitset>
#include <functional>
#include <random>
#include <ctime>
#include <chrono>
using namespace std::chrono;
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define ff first
#define ss second
#define pb push_back
#define int long long
#define ios std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define fill(x, v) memset(x, v, sizeof(x))
const ll mod = 1000000007;
const double pi = 3.14159265359; // PI
/*
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cerr << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

std::cout << std::setprecision(9) << f << '\n';//3.141590000;
map<char,int>::reverse_iterator rit;
for(rit = mp.rbegin(); rit!=mp.rend(); rit++)
    auto start = high_resolution_clock::now();
    // Call the function, here
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Time taken by function: "<< duration.count() << " milliseconds" << endl;
*/
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
vector<int> volume(1000000);
vector<int> parent(1000000);

void initialise_dsu()
{
    for (int i = 0; i < volume.size(); i++)
        volume[i] = 1;
    for (int i = 0; i < parent.size(); i++)
        parent[i] = i;
}

int find_par(int v)
{
    return (v == parent[v] ? v : parent[v] = find_par(parent[v]));
}

void union_sets(int a, int b)
{
    a = find_par(a);
    b = find_par(b);
    if (a != b)
    {
        if (volume[a] < volume[b])
            swap(a, b);
        parent[b] = a;
        volume[a] += volume[b];
    }
}

ll power(ll x, ll y, ll p)
{
    ll res = 1;

    x = x % p;

    while (y > 0)
    {
        if (y & 1)
	    res = (res * x) % p;

        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
//--------------------------

int32_t main()
{
	return 0;
}

