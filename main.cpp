//Program by Nathan Cosendine, the "Array of Fun"

#include <iostream>

using namespace std;

int number, choice;
char letter;
int main()
{

char ArrayNum[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

cout << "WELCOME TO THE ARRAY OF FUN!" << endl;

//Menu
cout << "GAME MENU" << endl;
cout << "1 - LETTER GUESS" << endl;
cout << "2 - PLACEMENT" << endl;
cout << "3 - VOWEL NEAR YOU" << endl;
cout << "4 - Exit Program" << endl;

cin >> choice;

switch(choice)
{


case 1:
    cout << "Please enter a number 1-26" << endl;
    cin >> number;

    //check if entered value is 1-26
    if (number > 26 || number < 0)
    {
        cout << "Invalid Guess, Try again!" << endl;
        break;
    }

    //if guess is valid then output
    cout << "You have guessed the letter " << ArrayNum[number-1] << endl;
    cout << "The letter before your guess is " << ArrayNum[number-2] << endl;
    cout << "The letter after your guess is " << ArrayNum[number] << endl;
    break;


case 2:
    cout << "Please enter a letter A-Z" << endl;
    cin >> letter;

    letter = toupper(letter) ;

    for (int temp=0; temp < 26; temp++)
    {
        if (ArrayNum[temp]==letter)
        {
            cout << "You entered " << letter << ", which is equats to the number " << temp+1 << " in the alphabet." << endl;
            temp = 27;
            break;
        }
    }

    break;

case 3:
    cout << "Please enter a number 1-26" << endl;
    cin >> number;

    //check if entered value is 1-26
    if (number > 26 || number < 0)
    {
        cout << "Invalid Guess, Try again!" << endl;
        break;
    }

    //check if entered value is 1-26
    if (number-1 == 0 || number-1 == 4 ||number-1 == 8 || number-1 == 14 || number-1 == 20 || number-1 == 24 )
    {
        cout << "You guessed the vowel " << ArrayNum[number-1] << endl;
        break;
    }

    //for all rounding, if between 2 letters, always round up
    //closest to vowel A
    if ( 0 < number-1 && number-1 < 2 )
    {
        cout << "You guessed the letter " <<  ArrayNum[number-1] << ", which is closest to the vowel " <<  ArrayNum[0] << endl;
        break;
    }

    //closest to vowel E
    if ( 1 < number-1 && number-1 < 6 )
    {
        cout << "You guessed the letter " <<  ArrayNum[number-1] << ", which is closest to the vowel " <<  ArrayNum[4] << endl;
        break;
    }

    //closest to vowel I
    if ( 5 < number-1 && number-1 < 11 )
    {
        cout << "You guessed the letter " <<  ArrayNum[number-1] << ", which is closest to the vowel " <<  ArrayNum[8] << endl;
        break;
    }

    //closest to vowel O
    if ( 10 < number-1 && number-1 < 17 )
    {
        cout << "You guessed the letter " <<  ArrayNum[number-1] << ", which is closest to the vowel " <<  ArrayNum[14] << endl;
        break;
    }

    //closest to vowel U
    if ( 16 < number-1 && number-1 < 22 )
    {
        cout << "You guessed the letter " <<  ArrayNum[number-1] << ", which is closest to the vowel " <<  ArrayNum[20] << endl;
        break;
    }

    //closest to vowel Y
    if ( 21 < number-1 && number-1 < 26 )
    {
        cout << "You guessed the letter " <<  ArrayNum[number-1] << ", which is closest to the vowel " <<  ArrayNum[24] << endl;
        break;
    }

    break;

case 4:
    cout << "Exiting..." << endl;
    break;

default:
    cout << "You have entered an invalid selection" <<endl;
    break;

    //thank the user, end program.
    cout << "Thanks for playing!" << endl;

    return 0;
}
}
