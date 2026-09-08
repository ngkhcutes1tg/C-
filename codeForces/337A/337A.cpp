#include <iostream>
#include <algorithm>

int a[1000];

int main() {
    int n, m;
    std::cin >> n >> m;

    for(int i = 0; i < m; ++i) 
        std::cin >> a[i];

    std::sort(a, a + m);

    // for(int i = 0; i < m; ++i)
    //     std::cout << a[i] << " ";
    // std::cout << "\n";

    int min = a[n - 1] - a[0];
    
    for(int i = 1; i < m - n + 1; ++i) {
        if(a[i + n - 1] - a[i] < min)
            min = a[i + n - 1] - a[i];
    }
    std::cout << min << "\n";
}