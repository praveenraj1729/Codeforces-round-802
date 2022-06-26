#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define vi vector<int>
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back 
#define maxe *max_element
#define mine *min_element

#define mii map<int,int>
#define umii unordered_map<int,int>
#define S size()
#define L length()
#define B begin()
#define E end()
#define F first
#define se second
#define yes "YES"
#define no "NO"
#define all(v) v.B,v.E
#define acc(v) accumulate(all(v), (long long)0)
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define endl "\n"
#define gcd __gcd
#define lcm(a,b) (a*b)/gcd(a,b)
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define max4(a,b,c,d) max(a,max3(b,c,d))
#define min4(a,b,c,d) min(a,min3(b,c,d))
#define max5(a,b,c,d,e) max(max4(a,b,c,d),e)
#define min5(a,b,c,d,e) min(min4(a,b,c,d),e)
#define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());}
typedef pair<int, int> pi;
typedef vector<pi> vpi;
typedef priority_queue<int, vector<int>, greater<int>> minpq;
typedef priority_queue<int> pq;
 
#define forl(i,n) for(ll i = 0; i < n; i++)
#define fore(i,m,n) for (ll i = m; i <= n; i++)
#define rforl(i,n) for (ll i = n - 1; i >= 0; i--)
#define rfore(i,m,n) for (ll i = m; i >=n; i--)    
#define iter(s) for(auto it:s)
 
#define p0(a) cout << a<<' ' 
#define p1(a) cout << a << endl
#define p2(a,b) cout << a << " " << b << endl
#define p3(a,b,c) cout << a << " " << b << " " << c << endl
#define p4(a,b,c,d) cout << a << " " << b << " " << c << " " << d << endl
 
void printarr(ll a[],ll n){
    forl(i,n){
        p0(a[i]);
    }
    cout<<endl;
}
void printv(vector<ll>&v){
    forl(i,v.S){
        p0(v[i]);
    }
    //cout<<endl;
}
vi SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {if (prime[p] == true){for (int i=p*p; i<=n; i += p)
    prime[i] = false;}}
 
    vi ans;for (int p=2; p<=n; p++)if (prime[p])ans.pb(p);return ans;
}
vector<ll> res;
void factorize(ll n) {
    for (ll i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            res.push_back(i);
            n /= i;
        }
    }
    if (n != 1) {
        res.push_back(n);
    }
}
vi divs;
void divisor(ll n){
        for(ll i=2;i<=sqrt(n);i++){
            if(n%i==0){
                divs.pb(i);
                if(n/i!=i){
                    divs.pb(n/i);
                }
            }
        }
        divs.pb(1);
        if(n!=1){
            divs.pb(n);
        }
}
 
// template<typename... T>
// void re(T&... args) {
// 	((cin >> args), ...);
// }
int  decToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[32]; 
  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    }
    int c=0;
  
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        if(binaryNum[j]==1)
        c++;
    return c;    
} 
int NoOFdig(int n)
{
    int c=0;
    while(n)
    {
        c++;
        n=n/10;
    }
    return c;
}
int nextNumDivByM(int n,int m)
{
    if(n%m==0)
    return n;
    return n-n%m+m;
}
int sumTilln(int n)
{
    return 0.5*n*(n+1);
}
int sumOfSquaresTill(int n)
{
    return n*(n+1)*(2*n+1)/6;
}
bool f(int x,int y)
{
    return x>y;
}
int remove2s(int a)
{
    while(a%2==0)
    a/=2;
    return a;
}
bool isPalindrome(string str) 
{ 
    // Start from leftmost and rightmost corners of str 
    int l = 0; 
    int h = str.S - 1; 
  
    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            //printf("%s is Not Palindrome", str); 
            return false; 
        } 
    } 
    //printf("%s is palindrome", str); 
    return true;
}

int sumofdigits(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
bool sortByStringLen(string s1,string s2)
{
    return (int)s1.S<(int)s2.S;
}
/*bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}*/
int mod=1e9 +7;
double PI=3.1415926536;
int fac(int n)
{
    long long x = 1;
    for (int i = 2; i <= n; i++) {
    x = (x*i)%mod;    
    }
    return x%mod;
}
bool isPerfectSquare(long double x)
{
    if (x >= 0) 
    {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
bool fun(pair<int,int> a,pair<int,int> b)
{
    return a.first>b.first;
}
void countSort(vector<int>& a)
{
    int n=maxe(all(a));
    int cnt[n+1]={0};
    //printarr(cnt,n+1);
    forl(i,(int)a.S)
    cnt[a[i]]++;
    //vi ans;
    a.clear();
    forl(i,n+1)
    if(cnt[i]!=0)
    a.pb(i);
}
int modi(int x)
{
    if(x>=0)
    {
        x=x%(mod);
    }
    else
    x=(mod+x%mod)%(mod);
    return x;
}
bool isAnagram(string a, string b)
{
    sort(all(a));sort(all(b));
    return a==b;
}
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;
   
    // This is checked so that we can skip 
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;
   
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
   
    return true;
}
 
// Function to return the smallest
// prime number greater than N
int nextPrime(int N)
{
 
    // Base case
    if (N <= 1)
        return 2;
 
    int prime = N;
    bool found = false;
 
    // Loop continuously until isPrime returns
    // true for a number greater than n
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}
int infinity= 1e9+1;
// vector<int> adj[100001];
// int vis[100001];
// int dis[100001];
// void bfs(int src)
// {
//     vis[src] = 1;
//     dis[src] =0;
//     queue<int> q;
//     q.push(src);
//     while(!q.empty())
//     {
//         int curr = q.front();
//         q.pop();
//         for(auto child: adj[curr])
//         {
//             if(vis[child]==0)
//             {
//                 dis[child] = dis[curr] + 1;
//                 q.push(child);
//                 vis[child] =1;
//             }
//         }
//     }
// }
int Substr(string s2, string s1)
{
    int counter = 0; // pointing s2
    int i = 0;
    for(;i<s1.length();i++)
    {
        if(counter==s2.length())
            break;
        if(s2[counter]==s1[i])
        {
            counter++;
        }
      else
        {
            // Special case where character preceding the i'th character is duplicate
            if(counter > 0)
            {
                i -= counter;
            }
            counter = 0;
        }
    }
    return counter < s2.length()?-1:i-counter;
}
bool collinear(int x1, int y1, int x2,
               int y2, int x3, int y3)
{
    // Calculation the area of
    // triangle. We have skipped
    // multiplication with 0.5
    // to avoid floating point
    // computations
    int a = x1 * (y2 - y3) +
            x2 * (y3 - y1) +
            x3 * (y1 - y2);
 
    if (a == 0)
        return true;
    else
        return false;
}
vector<int> factors(int n)
{
    set<int> ans;
    for(int i=1;i*i<=n;i++)
    {
        if(n% i == 0)
        {
            ans.insert(i);
            ans.insert(n/i);
        }
    }
    vector<int> a(ans.begin(), ans.end());
    return a;
}
int power(int a, int n, int mod)
{
    int ans =1;
    while(n)
    {
        if(n%2)
        {
            ans = (ans * (a%mod))%mod;
            n--;
        }
        else
        {
            a = (a%mod)*(a%mod);
            n = n/2;
        }
    }
    return ans;
}
bool isSmaller(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();
 
    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;
 
    for (int i = 0; i < n1; i++)
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
 
    return false;
}
 
// Function for find difference of larger numbers
string findDiff(string str1, string str2)
{
    // Before proceeding further, make sure str1
    // is not smaller
    if (isSmaller(str1, str2))
        swap(str1, str2);
 
    // Take an empty string for storing result
    string str = "";
 
    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();
 
    // Reverse both of strings
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
 
    int carry = 0;
 
    // Run loop till small string length
    // and subtract digit of str1 to str2
    for (int i = 0; i < n2; i++) {
        // Do school mathematics, compute difference of
        // current digits
 
        int sub
            = ((str1[i] - '0') - (str2[i] - '0') - carry);
 
        // If subtraction is less then zero
        // we add then we add 10 into sub and
        // take carry as 1 for calculating next step
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
 
        str.push_back(sub + '0');
    }
 
    // subtract remaining digits of larger number
    for (int i = n2; i < n1; i++) {
        int sub = ((str1[i] - '0') - carry);
 
        // if the sub value is -ve, then make it positive
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
 
        str.push_back(sub + '0');
    }
 
    // reverse resultant string
    reverse(str.begin(), str.end());
 
    return str;
}
/*OM NAMA SHIVAYA*/
void solve()
{
    int n=0;cin>>n;
    string s = "";cin>>s;
    string temp = "";
    for(int i=0; i<n; i++)
    temp+='9';
    string diff = findDiff(s, temp);
    reverse(all(diff));
    while(diff.back()=='0')
    diff.pop_back();
    reverse(all(diff));
    if(diff.size()==n)
    {
        p1(diff);
    }
    else
    {
        // vector<string> arr = {"0","11","111","1111","11111","111111","1111111"};
        string tem = "";
        for(int i=0; i<n; i++)
        tem+='1';
        tem+='1';
        string dif = findDiff(tem,s);
        reverse(all(dif));
        while(dif.back()=='0')
        dif.pop_back();
        reverse(all(dif));
        
        p1(dif);
    }
}
int32_t main()  
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //cout << ios::fixed;
    cout<<setprecision(100);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
} 
