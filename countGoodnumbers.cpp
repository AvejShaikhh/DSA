#include <iostream>
#include <cmath>
using namespace std;

long long mod = 1e9 + 7;

long long IntPow(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;

    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;

        base = (base * base) % mod;
        exp /= 2;
    }

    return result;
}

long long totalString(long long n) {
    long long even, prime;

    if (n % 2 == 0) {
        even = n / 2;
        prime = n / 2;
    } else {
        even = n / 2 + 1;
        prime = n / 2;
    }

    long long evenMul = IntPow(5, even, mod);
    long long primeMul = IntPow(4, prime, mod);

    return (evenMul * primeMul) % mod;
}

int main() {
    long long n;
    cin >> n;
    cout << "Total combinations: " << totalString(n) << endl;
    return 0;
}
