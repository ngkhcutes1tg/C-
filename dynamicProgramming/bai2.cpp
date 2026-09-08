#include <iostream>

long long dp[100], cost[100];

long long min(int a, int b) {
    if(a < b)
        return a;
    return b;
}

long long leocauthang(int n) {
    dp[0] = 0, dp[1] = 0;
    for(int i = 2; i <= n; ++i) {
        dp[i] = min((dp[i-1] + cost[i-1]), (dp[i-2] + cost[i-2]));
    }
    return dp[n];
}

int main() {
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> cost[i];
    }
    std::cout << leocauthang(n);
}
