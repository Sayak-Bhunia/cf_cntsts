# A)
// think harder.
// think simple.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint long long int
#define tc int t; cin>>t; while(t--)
#define sort(a) sort(a.begin(),a.end())
#define rev(a) sort(a.rbegin(),a.rend())
#define sortgtr(a) sort(a.begin(),a.end(),greater<int>())
#define MOD 1000000007

/*------------------------------------------------------------------------------------*/

long long pow(long long x, long long y) {
    if(y == 0) return 1;
    if(y % 2 == 0) return pow(x * x, y / 2);
    return x * pow(x * x, y / 2);
}

long long powMOD(long long x, long long y) {
    x %= MOD;
    if(y == 0) return 1;
    if(y % 2 == 0) return powMOD(x * x, y / 2) % MOD;
    return (x * powMOD(x * x, y / 2)) % MOD;
}

long long fibonacci(int N) {
    long long A = 1, B = 1;
    for(int i = 3; i <= N; i++) {
        long long temp = (A + B) % MOD;
        A = B;
        B = temp;
    }
    return B;
}

int countZeroes(long long n) {
    int c = 0;
    while(n) {
        c += (n%2 == 0);
        n /= 2;
    }
    return c;
}

int countSetBits(long long n) {
    int c = 0;
    while(n) {
        c += (n%2 == 1);
        n /= 2;
    }
    return c;
}

int countSetBits1toN(int n)
{
    int total = 0;
    for(int i=1;i<=n;i++) {
        int m = i;
        int c = 0;
        while(m) {
            c += (m%2 == 1);
            m /= 2;
        }
        total +=c;
    }
    return total;
}

int getBit(int n, int pos) { //for getting to know a bit is 0 or 1 at a particular pos
    return ((n & (1<<pos)) != 0);  // 0101 AND (1<<2) = 0100
}

int setBit(int n, int pos) { //for setting a bit from 0 -> 1 or 0 -> 1
    return (n | (1<<pos)); // 0101 OR (1<<2) = 0111
}

int clearBit(int n, int pos) { //for 0 or 1 -> 0
    int mask = ~(1<<pos);
    return (n & mask); //(0101 & ~(1<<2)) = 0001
}

int updateBit(int n, int pos, int val) { //for 0 or 1 -> val = clearBit + setBit
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (val<<pos));
}

bool isPrime(long long n) {
    for(long long i=2;i<=sqrt(n);i++) {
        if(n%i==0)return false;
    }
    return true;
}

int gcd(int a,int b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main()
{
    fastIO();
    tc {
        int n;
        cin >> n;
        vector<int> a(n*2);
        for(int i=0;i<2*n;i++) cin >> a[i];
        sort(a);
        int sum = 0;
        for(int i=0;i<2*n;i+=2) {
            sum += a[i];
        }
        cout << sum <<endl;
    }
}


# B)
// think harder.
// think simple.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint long long int
#define tc int t; cin>>t; while(t--)
#define sort(a) sort(a.begin(),a.end())
#define rev(a) sort(a.rbegin(),a.rend())
#define sortgtr(a) sort(a.begin(),a.end(),greater<int>())
#define MOD 1000000007

/*------------------------------------------------------------------------------------*/

long long pow(long long x, long long y) {
    if(y == 0) return 1;
    if(y % 2 == 0) return pow(x * x, y / 2);
    return x * pow(x * x, y / 2);
}

long long powMOD(long long x, long long y) {
    x %= MOD;
    if(y == 0) return 1;
    if(y % 2 == 0) return powMOD(x * x, y / 2) % MOD;
    return (x * powMOD(x * x, y / 2)) % MOD;
}

long long fibonacci(int N) {
    long long A = 1, B = 1;
    for(int i = 3; i <= N; i++) {
        long long temp = (A + B) % MOD;
        A = B;
        B = temp;
    }
    return B;
}

int countZeroes(long long n) {
    int c = 0;
    while(n) {
        c += (n%2 == 0);
        n /= 2;
    }
    return c;
}

int countSetBits(long long n) {
    int c = 0;
    while(n) {
        c += (n%2 == 1);
        n /= 2;
    }
    return c;
}

int countSetBits1toN(int n)
{
    int total = 0;
    for(int i=1;i<=n;i++) {
        int m = i;
        int c = 0;
        while(m) {
            c += (m%2 == 1);
            m /= 2;
        }
        total +=c;
    }
    return total;
}

int getBit(int n, int pos) { //for getting to know a bit is 0 or 1 at a particular pos
    return ((n & (1<<pos)) != 0);  // 0101 AND (1<<2) = 0100
}

int setBit(int n, int pos) { //for setting a bit from 0 -> 1 or 0 -> 1
    return (n | (1<<pos)); // 0101 OR (1<<2) = 0111
}

int clearBit(int n, int pos) { //for 0 or 1 -> 0
    int mask = ~(1<<pos);
    return (n & mask); //(0101 & ~(1<<2)) = 0001
}

int updateBit(int n, int pos, int val) { //for 0 or 1 -> val = clearBit + setBit
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (val<<pos));
}

bool isPrime(long long n) {
    for(long long i=2;i<=sqrt(n);i++) {
        if(n%i==0)return false;
    }
    return true;
}

int gcd(int a,int b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main()
{
    fastIO();
    tc {
        int n;
        cin >> n;
        int l = 1;
        int r = n;
        for(int i=1;i<=n;i++) {
            if(i & 1) {
                cout << l << " ";
                l++;
            }
            else {
                cout << r << " ";
                r--;
            }
        }
        cout <<endl;
    }
}


# C)
// think harder.
// think simple.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint long long int
#define tc int t; cin>>t; while(t--)
#define sort(a) sort(a.begin(),a.end())
#define rev(a) sort(a.rbegin(),a.rend())
#define sortgtr(a) sort(a.begin(),a.end(),greater<int>())
#define MOD 1000000007

/*------------------------------------------------------------------------------------*/

long long pow(long long x, long long y) {
    if(y == 0) return 1;
    if(y % 2 == 0) return pow(x * x, y / 2);
    return x * pow(x * x, y / 2);
}

long long powMOD(long long x, long long y) {
    x %= MOD;
    if(y == 0) return 1;
    if(y % 2 == 0) return powMOD(x * x, y / 2) % MOD;
    return (x * powMOD(x * x, y / 2)) % MOD;
}

long long fibonacci(int N) {
    long long A = 1, B = 1;
    for(int i = 3; i <= N; i++) {
        long long temp = (A + B) % MOD;
        A = B;
        B = temp;
    }
    return B;
}

int countZeroes(long long n) {
    int c = 0;
    while(n) {
        c += (n%2 == 0);
        n /= 2;
    }
    return c;
}

int countSetBits(long long n) {
    int c = 0;
    while(n) {
        c += (n%2 == 1);
        n /= 2;
    }
    return c;
}

int countSetBits1toN(int n)
{
    int total = 0;
    for(int i=1;i<=n;i++) {
        int m = i;
        int c = 0;
        while(m) {
            c += (m%2 == 1);
            m /= 2;
        }
        total +=c;
    }
    return total;
}

int getBit(int n, int pos) { //for getting to know a bit is 0 or 1 at a particular pos
    return ((n & (1<<pos)) != 0);  // 0101 AND (1<<2) = 0100
}

int setBit(int n, int pos) { //for setting a bit from 0 -> 1 or 0 -> 1
    return (n | (1<<pos)); // 0101 OR (1<<2) = 0111
}

int clearBit(int n, int pos) { //for 0 or 1 -> 0
    int mask = ~(1<<pos);
    return (n & mask); //(0101 & ~(1<<2)) = 0001
}

int updateBit(int n, int pos, int val) { //for 0 or 1 -> val = clearBit + setBit
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (val<<pos));
}

bool isPrime(long long n) {
    for(long long i=2;i<=sqrt(n);i++) {
        if(n%i==0)return false;
    }
    return true;
}

int gcd(int a,int b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main()
{
    fastIO();
    tc {
        int n;
        cin >> n;
        set<long long> used,not_used;
        vector<long long>res;
        for(int i=1;i<=n;i++) {
            long long x;
            cin >> x;
            x += i;
            if(!used.count(x)) {
                not_used.insert(x);
            }
            long long curr=*(--not_used.upper_bound(x));
            not_used.erase(curr);
            res.push_back(curr);
            used.insert(curr);
            if(!used.count(curr-1)) {
                not_used.insert(curr-1);
            }
        }
        sort(res);
        reverse(res.rbegin(),res.rend());
        for(auto it:res) {
            cout << it << " ";
        }
        cout <<endl;
    }
}



