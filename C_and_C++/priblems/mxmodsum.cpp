#include <climits>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
#include <initializer_list>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define el endl
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

int cnt = 1;

template<class T>
void toConsole(T content){
	cout<<"Log No. "<< cnt <<" | "<<content<<endl;
	cnt++;
}

template<class T>
void toConsole(vector<T> v){
	cout<<"Log No. "<< cnt<<" | <vector> ";
	for(auto e : v){
		std::cout << e << " ";
	}
	std::cout << std::endl;
	cnt++;
}

template<class T>
void toConsole(set<T> s){
	cout<<"Log No. "<< cnt<<" | <set> ";
	for(auto e : s){
		std::cout << e << " ";
	}
	std::cout << std::endl;
	cnt++;
}

template<class T>
void toConsole(unordered_set<T> us){
	cout<<"Log No. "<< cnt<<" | <unordered_set>";
	for(auto e : us){
		std::cout << e << " ";
	}
	std::cout << std::endl;
	cnt++;
}

template<class KEY, class VAL>
void toConsole(map<KEY, VAL> m){
	cout<<"Log No. "<< cnt<<" | <map>" << endl;
	for(auto p : m){
		std::cout << "\t\t" << p.first << " " << p.second << std::endl;
	}
	std::cout << "\t</map>" << std::endl;
	cnt++;
}

template<class KEY, class VAL>
void toConsole(unordered_map<KEY, VAL> m){
	cout<<"Log No. "<< cnt<<" | <unordered_map>" << endl;
	for(auto p : m){
		std::cout << "\t\t" << p.first << " " << p.second << std::endl;
	}
	std::cout << "\t</unordered_map>" << std::endl;
	cnt++;
}

template<class T>
void toConsole(std::initializer_list<T> list){
	cout<<"Log No. "<< cnt<<" | ";
	for(auto e : list){
		std::cout << e << " ";
	}
	std::cout << std::endl;
	cnt++;
}


void solve(){
	int n, m;
	cin>>n>>m;
	set<int> s;
	for(int i = 0; i < n; i++) {
		int x;
		cin>>x;
		/* cin>>v[i]; */
		s.insert(x);
	}
	int ans = INT_MIN;
	
	vector<int> v(s.begin(), s.end());
	/* for (int i = 1; i <= n; i++) { */
	/* 	for(int j = i+1; j<=n; j++){ */
	/* 		int x = (v[i] - v[j] < 0) ? (m - ((v[j] - v[i]) % m)) : (v[i] - v[j]) % m; */
	/* 		ans = max(ans, v[i] + v[j] + (x)); */
	/* 	} */
	/* } */
	/* std::cout << ans << std::endl; */
	sort(v.begin(), v.end());
	/* for(int i = 1; i<n; i++){ */
		
	/* } */
	/* int x =v[n-1] + v[n-2] + ((v[1] -v[0]) %m); */
	/* int x = (v[n-1] - v[n-2] < 0) ? (m - ((v[n-2] - v[n-1]) % m)) : (v[n-1] - v[n-2]) % m; */
	/* toConsole({v[n-1], v[n-2]}); */
	/* toConsole(v); */
	n = v.size();
	ans = max(2*v[n-1], v[n-2] + v[n-1] +  m - ((v[n-1] - v[n-2]) %m));

	/* toConsole(v); */

	/* toConsole(v); */	
	std::cout << ans << std::endl;
}

int32_t main() {

	#ifndef ONLINE_JUDGE
	freopen("/home/rohits/mydata/code/C_and_C++/sublime_editor/inputf.in", "r", stdin);
	freopen("/home/rohits/mydata/code/C_and_C++/sublime_editor/outputf.in", "w", stdout);
	#endif

	fast_cin();
	ll t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
