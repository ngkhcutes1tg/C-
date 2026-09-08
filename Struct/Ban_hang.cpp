#include <iostream>

struct Date {
    int day, month, year;
    Date (int a, int b, int c) : day(a), month(b), year(c) {}
};

struct Product {
    std::string name;
    double price;
    Date expiryDate;

    Product (std::string x, double y, int a, int b, int c) : name(x), price(y), expiryDate(a, b, c)  {}

};

void printProduct(const Product& P)
{
    std::cout << "Ten: [" << P.name << "]" 
    << " | " << "Gia: [" << P.price << "]"
    << " | " << "Han dung: [" << P.expiryDate.day << "/" 
    << P.expiryDate.month << "/" 
    << P.expiryDate.year << "]" << "\n";
}

int main() {
    Product Hang("Sua", 20000, 19, 6, 2026); 
    printProduct(Hang);
}