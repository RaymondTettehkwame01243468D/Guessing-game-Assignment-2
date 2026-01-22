#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    char again;
    
    do {
        int secret = rand() % 100 + 1;
        int guess, tries = 0;
        
        cout << "Guess (1-100):\n";
        
        while (tries < 10) {
            tries++;
            cout << tries << ": ";
            cin >> guess;
            
            if (guess < secret) cout << "Low\n";
            else if (guess > secret) cout << "High\n";
            else {
                cout << "Win!\n";
                break;
            }
        }
        
        if (tries == 10) cout << "Lost! It was " << secret << endl;
        cout << "Again? (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
    
    return 0;
}