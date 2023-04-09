#include <iostream>
using namespace std;


class Player {
    public:
    string name;
    int health;
    int damage;

    //functions
    Player(string n, int h, int d){
        setName(n);
        setHealth(h);
        setDamage(d);
    }
    void setName(string n){
        name=n;
    }
    void setHealth (int h){
        health=h;
    }
    void setDamage(int d){
        damage=d;
    }
    int getHealth(){
        return health;
    }
    int getDamage(){
        return damage;
    }
    int takeDamage(int damage){
        health=health-damage;
        return health;
    }
};
class Wizard : public Player {
    public:
        int mana;

    //functions
    void castSpell(Player* opponent){
        if (mana>0){
            Player*.takeDamage(Player.getDamage)
        }
    }
};

class Warrior : public Player {
    public:
        string weapon;

    //functions
    void swingWeapon(Player* opponent){
        Player*.takeDamage(Player.getDamage);
    }
};