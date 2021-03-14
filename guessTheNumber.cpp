#include <iostream>
#include <cstring>
#include <cmath>
#include <sstream>
#include <numeric> 
#include <vector>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(NULL));
    int secretNum = rand() % 11;
    int guess = 0;
    
    do {
        cout << "Guess the number:" ;
        cin >> guess;
        if (guess > secretNum)  cout << "To Big!" << endl; 
        if (guess < secretNum)  cout << "To Small!" << endl; 

    }while ( secretNum != guess);
    cout << "You guessed it right!" << endl;
    
    return 0;
    
}

