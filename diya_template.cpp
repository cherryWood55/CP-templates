//final template
#include <bits/stdc++.h>
#define ull_t unsigned long long int
#define ll_t long long int 
#define FAST_IO(value) std :: ios :: sync_with_stdio(value); std :: cin.tie(NULL); std :: cout.tie(NULL)
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
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
using namespace std;
/*Commonly used functions
long long int max_ll(long long int a, long long int b){
	return (a>b?a:b);
}
long long int min_ll(long long int a, long long int b){
	return (a<b?a:b);
}
long long int compute_total_divisors(long long int n){
    long long int total_divisors = 0;
    for(long long int i = 1; i <= (n / i); i++) 
    {
        if(!(n % i)) 
        {
            if((n / i) == i) 
            {
                total_divisors++;
                continue;
            }
            total_divisors += 2;
        }
    }
    return total_divisors;
}
bool check_perfect_square(long long int n){
	return compute_total_divisors(n) % 2 ? true : false;
}    
*/    
int main()
{
	FAST_IO(0);
	int t;
	si(t);
	while (t--)
	{
		//code
	}
	return 0;
}
