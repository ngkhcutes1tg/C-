#include <iostream>

struct Account {
    std::string name;
    int gem;

    Account(std::string a, int b) : name(a), gem(b) {}


    void buyItem(int cost) {
        if(gem >= cost) {
            gem-=cost;
            std::cout << name << " da mua vat pham thanh cong! Gem con lai: " << gem << "\n"; 
        }
        else std::cout << name << " khong du gem de mua vat pham" << "\n"; 
    }
};

int main() {
    Account One("PlayerOne", 100);
    One.buyItem(30);
    One.buyItem(90);
}