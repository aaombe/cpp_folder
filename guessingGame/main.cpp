#include <iostream>
#include <ctime>
using namespace std;

int randomGenerator () {
    srand(time(NULL));
    return rand()%20;
}

int main()
{
    int random = randomGenerator ();
    int guess;
    int limit = 2;
    bool outOfGuesses = false;

    do{
        cout << "I am thinking of a number between 1 and 20.\nTake a guess: \t";
        cin >> guess;

        if (limit != 0){
            if (guess > random){
                cout<< "Your guess is too high.";
            }else {
                cout<< "Your guess is too low.";
            }
            limit --;
        }else{
            outOfGuesses= true;
        }
        //print empty line
        cout <<""<<endl;
    }while(!outOfGuesses && random != guess);
    if (random == guess){
            cout <<"You win" ;
    }else {
        cout <<"You lost! The random number was " << random;
    }
    return 0;
}
