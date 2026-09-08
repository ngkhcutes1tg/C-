#include <iostream>
#include <string>

struct Weapon {
    std::string name;
    int damage;
    float criticalRate;
    Weapon (std::string n, int d, float c) {
        name = n;
        damage = d;
        criticalRate = c; 
    }
};

void upgradeWeapon(Weapon& w) {
        w.damage += 10;
        w.criticalRate += 0.05;
    }

int main() {
    Weapon myWeapon("Kiem Anh Sang",50,0.1f);
    std::cout << "Vu khi cua toi: " << myWeapon.name << "\n"
    << "Sat thuong: " << myWeapon.damage << "\n"
    << "Ti le chi mang: " << myWeapon.criticalRate << "\n";
    std::cout << "--------------------" << "\n";
    upgradeWeapon(myWeapon);
    std::cout << "Sau khi nang cap: " << "\n" 
    << "Vu khi cua toi: " << myWeapon.name << "\n"
    << "Sat thuong: " << myWeapon.damage << "\n"
    << "Ti le chi mang: " << myWeapon.criticalRate;
    return 0;
}
