#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	system("cls");
    system("color f3");
    
    cout << "\t\t\t\t\t----Guessing Game----" << endl;
    string n;
	cout<<"Input Your Name= ";
	cin>>n;
	cout<<endl;
	
    srand(time(nullptr));

    int N = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Guess a number between 1 and 100" << endl;

    do {
        cout << "Input the number you guess: ";
        cin >> guess;
        attempts++;

        if (guess == N) {
            cout <<endl<< "Hurray! You guessed the correct number " << "in " << attempts << " attempts " << endl<<endl;
            cout<<"Thank You "<<n<<" for using the Number Guess Game!"<<endl;
            break;
        } 
		else if (guess < N) {
            cout << "Too low! Try again" << endl;
        }
		else {
            cout << "Too high! Try again" << endl;
        }
    } while (true);

}