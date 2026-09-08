#include <iostream>
#include <algorithm>

int a[20];

int main() {
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    sort(0, n - 1, greater<int>());
    return 0;
}