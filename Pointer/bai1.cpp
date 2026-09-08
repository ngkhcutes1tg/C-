#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int *a = new int(10);
    int *b = new int(5);
    std::cout << "A truoc cap nhat: " << *a << "\n" << "B truoc cap nhat: " << *b << "\n";
    swap(a,b);
    std::cout << "A sau cap nhat: " << *a << "\n" << "B sau cap nhat: " << *b << "\n";
    delete a;
    delete b;
    a = nullptr;
    b = nullptr;
}  