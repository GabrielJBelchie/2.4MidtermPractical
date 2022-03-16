// 2.4MidtermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

char trynum = 0;

void PetSelection(std::string prompt);

int main()
{
    PetSelection("Hey user. How many pets do you think I have?");
}

void PetSelection(std::string prompt)
{
    bool tryAgain = true;

    
        std::cout << prompt << std::endl;

        std::cout << "A) 1" << std::endl;
        std::cout << "B) 2" << std::endl;
        std::cout << "C) 4" << std::endl;
        std::cout << "D) 7" << std::endl;
        std::cout << "\n";

        while (tryAgain) {

            std::cin >> trynum;

            switch (trynum)
            {
                case 'A':
                {
                    std::cout << "Wow... I'm not that lonely. You're wrong." << std::endl;
                    tryAgain = !tryAgain;
                    break;
                }
                case 'B':
                {
                    std::cout << "Close. But not right." << std::endl;
                    tryAgain = !tryAgain;
                    break;
                }
                case 'C':
                {
                    std::cout << "There ya go! You're correct!" << std::endl;
                    tryAgain = !tryAgain;
                    break;
                }
                case 'D':
                {
                    std::cout << "I wish. But I'm sadly not that rich." << std::endl;
                    tryAgain = !tryAgain;
                    break;
                }
                default:
                {
                    std::cout << "Error: The input was either not a letter or the letter was not uppercase try again..." << std::endl;
                    break;
                }
            }
        }
    
}