#include <bits/stdc++.h>
#include <cstdint>
using namespace std;

typedef unsigned long long int ull_t;
typedef long long int ll_t;

#define FAST_IO(val) std :: ios :: sync_with_stdio(val); std :: cin.tie(NULL); std :: cout.tie(NULL)
#define debug(x) cout << #x << "=" << x << endl
#define debug2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define f(i,n) for (int i=0; i<n; i++)
#define rf(i,n) for(int i=n-1; i>=0; i--)
#define f1(i,n) for (int i=1; i<=n; i++)
#define rf1(i,n) for(int i=n; i>=1; i--)
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define mod_val 1000000007
#define PI 3.141592653589793
#define GOLDEN_RATIO 1.618033988749895
#define INF_32_BIT_U_INT_MAX 0xFFFFFFFF
#define INF_64_BIT_U_INT_MAX 0xFFFFFFFFFFFFFFFF
#define endl '\n'
#define compute_GCD(a, b) std :: __gcd((a), (b))
#define compute_LCM(a, b) (a * b / compute_GCD(a, b))
#define count_set_bits(n) __builtin_popcountll(n)
#define compute_parity(n) __builtin_parity(n)
#define count_leading_zeroes(n) __builtin_clzll(n)
#define count_trailing _zeroes(n) __builtin_ctzll(n)

/*Commonly used functions
ll_t maxLL(ll_t a, ll_t int b){
	return (a>b?a:b);
}
ll_t minLL(ll_t a, ll_t b){
	return (a<b?a:b);
}
ll_t computeTotalDivisors(ll_t n){
    ll_t total_divisors = 0;
    for(ll_t i = 1; i <= (n / i); i++){
        if(!(n % i)) {
            if(n/i==i){
                total_divisors++;
                continue;
            }
            total_divisors += 2;
        }
    }
    return (total_divisors);
}
bool checkPerfectSquare(ll_t n){
	return (computeTotalDivisors(n) % 2 ? true : false);
}  
bool isPrime(ll_t n)
{
	return (computeTotalDivisors(n)==2 ? true : false);
} 
//modular arithmetic function for addition
ll_t add(ll_t a, ll_t b)
{
    a+=b;
    if (a>=mod_val)
        a-=mod_val;
    return a;
}
//modular arithmetic function for multiplication
ll_t mul(ll_t a, ll_t b)
{
    return ((a*b) % mod_val);
}
//modular arithmetic function for exponentiation
ll_t power(ll_t base, ll_t expo)
{
    ll_t res=1;
    while(expo>0) 
    {
       if(expo%2==1) 
            res =(res*base) % mod_val;
       base =(base*base) % mod_val;
       expo /= 2;
    }
    return res % mod_val;
}  
void initializeGraph(vector<int> adj[], bool visited[]){
	clr(adj);
	for(int i=0; i<; i++){
		visited[i]=0;
	}
}
void printGraph(vector<int> adj[], int nodes){
    for(int i=1; i<=nodes; i++){
        cout << i << ": ";
        for(int j=0; j<adj[i].size(); j++){
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }
}
void dfs(vector<int> adj[], bool visited[], int s){
	visited[s]=true;
	for(int i=0; i<adj[s].size(); i++){
		if (visited[adj[s][i]]==false)
			dfs(adj[s][i]);
	}
}
*/

int main()
{
	//code by cherrywood55
	FAST_IO(0);
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int t, n;
    cin >> t;
	while (t--)
	{
		//code by cherrywood55
		cin >> n;
		int a[n];
		f(i,n)
			cin >> a[i];
		

	}
	return 0;
}
