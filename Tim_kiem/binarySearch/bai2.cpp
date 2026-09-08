#include <iostream>
#include <algorithm>

int a[100];

bool check(int mid, int k, int n) {
    long long so_met_go = 0;

    for(int i = 0; i < n; ++i) {
        if(a[i] > mid)
            so_met_go += (a[i] - mid);
    }
    return so_met_go >= k;
}



int main() {

    int n, m, max_val = 0;

    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> a[i];
        if(a[i] > max_val)
            max_val = a[i];
    }

    std::cin >> m;

    int left = 0, right = max_val, dap_an = 0;

    while(left <= right) {
        int mid = (left + right) / 2;
        if(check(mid,m,n))
        {
            dap_an = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    std::cout << dap_an << "\n";
}