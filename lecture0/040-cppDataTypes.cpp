#include <iostream>

using namespace std;

bool isMorning();
bool isAfternoon();


int main() {
    // Boolean
    bool a = true;
    bool b = false;
    if (a) {
        bool flag = false;
        cout << "This is false\n";
    }

    cout << a << " " << b << "\n";

    string s = "Hello world!";
    cout << s.length() << "\n";

    string text = "Good ";
    if (isMorning()) {
        text = text + "morning!";
    } else if (isAfternoon()) {
        text = text + "afternoon!";
    } else {
        text = text + "evening!";
    }

    cout << text << "\n";
}

bool isMorning() {
    return true;
}

bool isAfternoon() {
    return false;
}
