#include <iostream>

int w[100], v[100], dp[100], sc[100];

int lon_nhat(int n, int m) {
    dp[0] = v[0];
    sc[0] = w[0];
    for(int i = 1; i < n; ++i) {
        for(int j = 0; j < i; ++j)
            if(w[i]+sc[j] <= m && v[i] + dp[j] > ) {
            }
    }
}

int main() {
    int W, n;
    std::cin >> W >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> w[i] >> v[i];
    }
}