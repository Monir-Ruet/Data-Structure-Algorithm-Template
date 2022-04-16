#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void _print(ll x){ cout<<x; }
void _print(int x){ cout<<x; }
void _print(char x){ cout<<x; }
void _print(double x){ cout<<x; }
void _print(string s){ cout<<s; }
void _print(bool x){ if(x==true) cout<<"True";else cout<<"False";}
template <class T, class V> void _print(pair<T,V>p){ cerr<<"{";_print(p.first);cerr<<",";_print(p.second);cerr<<"}";}
template <class T> void _print(vector<T>v) { cerr<<"[ ";for(T i:v) {_print(i); cerr<<" ";}cerr<<"]";}
template <class T> void _print(set<T>v) { cerr<<"{ ";for (T i : v){_print(i);cerr<<" ";}cerr<<"}";}
template <class T> void _print(multiset<T>v) { cerr <<"{ ";for(T i:v) {_print(i);cerr<<" ";}cerr<< "}";}
template <class T, class V> void _print(map <T, V> v) {cerr << "{ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "}";}
#define debug(x) cerr<<#x<<"  ";_print(x);cerr<<nl;
