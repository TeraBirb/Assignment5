#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    // 1. Vowels and consonants

    string wordInput;
    int vowelCount = 0;
    int consonantCount = 0;
    bool invalidInput = false;

    cout << "Enter a word: ";
    cin >> wordInput;

    for (int i = 0; i < wordInput.length(); i++) {
        if (isdigit(wordInput.at(i))) {     // Checking if there is a number in the word
            invalidInput = true;
        }
        else if (toupper(wordInput.at(i)) == 'A' || toupper(wordInput.at(i)) == 'E' || toupper(wordInput.at(i)) == 'I' ||
            toupper(wordInput.at(i)) == 'O' || toupper(wordInput.at(i)) == 'U' || toupper(wordInput.at(i)) == 'Y') {
            vowelCount++;
        }
        else {
            consonantCount++;
        }
    }

    switch (invalidInput) {
        case true :
            cout << "Invalid input: Input has one or more numbers. Restart program and try again." << endl << endl;
            break;
        default :
            cout << "The word contains " << vowelCount << " vowels and " << consonantCount << " consonants." << endl << endl;
    }

    

    /*
        OUTPUT
    Enter a word: Harry
    The word contains 2 vowels and 3 consonants.


    C:\Users\User\code\school_bcc\Assignment 5\Debug\Assignment 5.exe (process 8360) exited with code 0.
    Press any key to close this window . . .

    */



    // 2. Fibonacci numbers

    int fibInput = 0;
    int FIB_0 = 0;  // 0th Fibonacci number
    int FIB_1 = 1;  // 1st Fibonacci number
    int fibTemp0 = 0;
    int fibTemp1 = 1;
    int fibResult = 0;

    cout << "Assuming the 1st Fibonacci number is 1, enter the place of the Fibonacci number that you want to acess: ";
    cin >> fibInput;

    if (fibInput == 0 || fibInput == 1) {
        fibResult = fibInput;
    }
    else {
        for (int i = 1; i < fibInput; i++) {
            fibResult = fibTemp0 + fibTemp1;
            fibTemp0 = fibTemp1;
            fibTemp1 = fibResult;
        }
    }
    
    cout << "Your Fibonacci number is " << fibResult << ". " << endl << endl;

    /*
        OUTPUT

    Assuming the 1st Fibonacci number is 1, enter the place of the Fibonacci number that you want to acess: 8
    Your Fibonacci number is 21.


    C:\Users\User\code\school_bcc\Assignment 5\Debug\Assignment 5.exe (process 4760) exited with code 0.
    Press any key to close this window . . .

    */



    // 3. Interest and Mortgage Payment




}

