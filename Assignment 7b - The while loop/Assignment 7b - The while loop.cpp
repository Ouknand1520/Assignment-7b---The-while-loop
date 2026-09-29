// Nathan
// Ouk
// 0834524@my.msjc.edu
// 9/29/26
// Assignment 7b - The while loop
// Assignment 7b - write a simple coin flip game using a while loop, where the player starts with $10.00.

using namespace std;
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <iostream>

int main()
{
    char y;
    char n;
    char answer1;
    char answer2;

	double  balance = 10.00;

    std::cout << "Welcome to the coin flip game.  It costs $1 to play. Would you like to play? (y / n):";
	cin >> answer1;
 

    if (answer1 == 'y' || answer1 == 'Y')
    {
        cout << endl;
        cout << "You have $" << balance << " to start with." << endl;

        cout << endl;
        cout << "Every successful guess earns $2.00, while guessing wrong costs $1.00. " << endl;

        cout << endl;

        while (balance > 0 && (answer1 == 'y' || answer1 == 'Y'))
        {
            srand(time(0)); // Seed the random number generator once
            int randomBit = rand() % 2; // Generates 0 or 1

            cout << "Heads or tails? (h / t): ";
            cin >> answer2;
            balance = balance - 1.00;

            if ((randomBit == 1 && answer2 == 'h' || answer2 == 'H') || (randomBit == 0 && answer2 == 't' || answer2 == 'T'))
            {
                cout << endl;
                std::cout << "Congratulations, Winner, you've won $2.00! The coin flip came up " << (randomBit == 1 ? "Heads" : "Tails") << std::endl;
                cout << endl;

                balance = balance + 2.00;
                std::cout << endl;

                std::cout << "Your current balance is: $" << balance << std::endl;
                cout << endl;

                std::cout << "Would you like to play again? (y / n): ";
                cin >> answer1;
                cout << endl;
            }

            else
            {
                cout << endl;
                std::cout << "Sorry, you guessed wrong, you've lost $1.00. The coin flip came up " << (randomBit == 1 ? "Heads" : "Tails") << std::endl;
                cout << endl;

                balance = balance - 1.00;
                cout << endl;

                std::cout << "Your current balance is: $" << balance << std::endl;
                cout << endl;

                std::cout << "Would you like to play again? (y / n): ";
				cin >> answer1;
                cout << endl;
            }

            if (answer1 == 'n')
            {
                cout << endl;
                cout << "Thank you for not playing. Have a great day!" << endl;
				cout << endl; 
                cout << "Your final balance is: $" << balance << endl;
            }
        }
    }
}