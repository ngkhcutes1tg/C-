#include <iostream>
long long a[100];

int main() 
{
    int t;
    std::cin >> t;
    for(int j = 0; j < t; ++j) {
       int n, k, dem = 0;
        std::cin >> n >> k;
        std::cin >> a[0];
        for(int i = 1; i < n; ++i) {
            std::cin >> a[i];
            if(a[i] < a[i - 1])        
                dem = 1;
        }
        if(dem == 0)    std::cout << "YES\n";
        else if(k == 1)         std::cout << "NO\n";
        else std::cout << "YES\n";
    } 
}