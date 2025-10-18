#include <iostream>

using namespace std;

void calculateTotalPrice(int numberOfTickets, int price);

int main() {

    int numberOfTickets, choice;
    char prompt;
    bool keepOn = false;

    do {

        cout << "**************************************" << endl;
        cout << "Choose movie among: ";
        cout << "1. Movie A: $8" << endl;
        cout << "2. Movie B: $10" << endl;
        cout << "3. Move C: $12" << endl;
        cin >> choice;
        cout << "Please enter number of tickets: ";
        cin >> numberOfTickets;

        switch (choice) {
            case 1: calculateTotalPrice(numberOfTickets, 8); break;
            case 2: calculateTotalPrice(numberOfTickets, 10); break;
            case 3: calculateTotalPrice(numberOfTickets, 12); break;
            default:
                keepOn = true;
                cout << "You entered an invalid choice." << endl;
        }

        do {
            cout << "do you want to continue y/n?" << endl;
            cin >> prompt;
            if (prompt == 'y') {
                keepOn = true;
            }else {
                keepOn = false;
            }
            if (prompt != 'n' && prompt != 'y') {
                cout << "Invalid prompt, please just choose y - Yes or n - Not" << endl;
            }
        }while (prompt != 'n' && prompt != 'y');
        prompt = ' ';
    }while (keepOn);

    cout << "Thank you for playing." << endl;

    return 0;
}

void calculateTotalPrice(int numberOfTickets, int price) {
    cout << "The total price is: $" << price * numberOfTickets<< endl;
}
