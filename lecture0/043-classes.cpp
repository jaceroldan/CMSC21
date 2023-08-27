#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// struct equivalent of class Card
// struct Card {
//     char value;
//     char suit;
// };
// typedef struct Card Card;

// void initialize(Card*);

// PascalCase
// classes are just prototypes/blueprints
// classes are abstractions
class Card {
// access specifier
private:
    // data properties / fields
    char value;
    char suit;

// access specifier
public:
    // methods
    // accessors and mutators, destructors
    Card() {
        this->suit = 'C';
        this->value = '3';
    }

    Card(char value, char suit) {
        this->suit = suit;
        this->value = value;
    }

    void display() {
        cout << this->value << " of " << this->suit << "\n";
    }
};

int main() {
    // a is an instance, an object
    Card a;
    Card b('4', 'D');
    Card c('Q', 'H');
    // Person jace;
    // ??? this should be done once every year
    // Permissions/accessibility
    // jace.age += 30;

    a.display();
    b.display();
    c.display();
}