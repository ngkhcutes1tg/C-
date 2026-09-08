#include<iostream>

int find(int* a, int n, int k) {
    int left = 0, right = n - 1, pos;
    while(left <= right) {
        pos = (left + right) / 2;
        if(a[pos] == k)
            return pos;
        else if (a[pos] > k)
            right = pos - 1;
        else left = pos + 1;
    }   
    if(a[pos] != k)
        return -1;
}

// void insert(int* arr[], int &n, int k, int pos) {
//     n++;
//     for(int i = pos; i < n; i++)
// }

int main () {
    std::cout << "Nhap so luong: "; 
    int n;
    std::cin >> n;
    std::cout << "Nhap vao mang: ";
    int* arr = new int[n];
    for(int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        arr[i] = x;
    }

    int k;
    std::cout << "Nhap gia tri can tim kiem trong mang: ";
    std::cin >> k;
    if(find(arr,n,k) == -1)   std::cout << "Khong co trong mang" << "\n";
    else std::cout << "Nam o vi tri: " << find(arr,n,k) << "\n";



    delete[] arr;
    arr = nullptr;
}