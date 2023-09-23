#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define all(x)			x.begin(), x.end()
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define sz(x) 			((int)(x).size())
#define inf             1e18
#define rep(i,a,b)      for(int i=a;i<b;i++)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
	cout << vars << " = ";
	string delim = "";
	(..., (cout << delim << values << "\n"));
}


mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// Operator overloads
template <typename T1, typename T2> /* cin >> pair<T1, T2> */ istream &operator>>(istream &istream, pair<T1, T2> &p) {return (istream >> p.first >> p.second);}
template <typename T>  /*cin >> vector<T>*/ istream &operator>>(istream &istream, vector<T> &v) {for (auto &it : v)cin >> it; return istream;}
template <typename T1, typename T2>  /*cout << pair<T1, T2>*/ ostream &operator<<(ostream &ostream, const pair<T1, T2> &p) {return (ostream << p.first << " " << p.second);}
template <typename T>  /*cout << vector<T>*/ ostream &operator<<(ostream &ostream, const vector<T> &c) {for (auto &it : c)cout << it << " "; return ostream;}

/*---------------------------------------------------------------------------------------------------------------------------*/
int gcd(int a, int b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
int expo(int a, int b, int m) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % m; a = (a * a) % m; b = b >> 1;} return res;}
int mminvprime(int a, int b) {return expo(a, b - 2, b);}
void google(int t) {cout << "Case #" << t << ": ";}
vector<int> sieve(int n) {vector<bool> arr(n + 1, false); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = i * i; j <= n; j += i)arr[j] = 1;} return vect;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_div(int a, int b, int m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
int getRandomNumber(int l, int r) {return uniform_int_distribution<int>(l, r)(rng);}
/*--------------------------------------------------------------------------------------------------------------------------*/

void c_p_c() {
	string text;
	cin >> text;
	set<char> s;
	for(auto ch : text){
		s.insert(ch);
	}
	int m = (int)s.size();
	int ans = INT_MAX;

	unordered_map<char,int> mp;
	for(end = 0; end < n; end++){
       
       ans = min(ans,end - start + 1);

		mp[text[end]]++;
		while((int)mp.size() == m){
			mp[text[start]]--;
			if(mp[text[start]] == 0)
				mp.erase(text[start]);
			start++;
		}
	}
	cout << ans << "\n";
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("./input.txt", "r", stdin);
	freopen("./output.txt", "w", stdout);
#endif
	clock_t begin = clock();
	c_p_c();
#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
	return 0;
}