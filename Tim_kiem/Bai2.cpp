#include <iostream>
 
int a[100];

int middlePos(int a[], int n, int x) {
    int left = 0, right = n - 1, pos;
    while(left <= right) {
        pos = (left + right) / 2;
        if(a[pos] == x)
            return pos;
        else if(a[pos] > x)
            right = pos - 1;
        else left = pos + 1;
    } 
    if(a[pos] != x)
        return -1;
    return pos;
}

int firstPos(int a[], int n, int x,int pos) {
    int left = 0, right = pos;
    while(left <= right) {
        pos = (left + right) / 2;
        if(a[pos] == x && a[pos - 1] != x)
            return pos;
        else if((a[pos] == x && a[pos - 1] == x) || a[pos] > x)
            right = pos - 1;
        else left = pos + 1;
    }
}

int secondPos(int a[], int n, int x, int pos) {
    int left = pos, right = n - 1;
    while(left <= right) {
        pos = (left + right) / 2;
        if(a[pos] == x && a[pos + 1] != x)
            return pos;
        else if((a[pos] == x && a[pos + 1] == x) || a[pos] < x)
            left = pos + 1;
        else right = pos - 1;
    }
}

int main() {
    int n, X;
    std:: cin >> n >> X;
    for(int i = 0; i < n; i++)
        std::cin >> a[i];
    int K = middlePos(a,n,X);
    if(K == -1)     std::cout << 0 << "\n";
    else std::cout << secondPos(a,n,X,K) - firstPos(a,n,X,K) + 1 << "\n";
}