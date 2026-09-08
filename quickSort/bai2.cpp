#include <iostream>
#include <algorithm>

int a[20];

int main() {
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    sort(a, a + n);
    int min = a[1] - a[0];
     for(int i = 2; i < n; ++i) {
        if(a[i] - a[i-1] < min)
            min = a[i] - a[i-1];
    }
    std::cout << min;
    return 0;
}