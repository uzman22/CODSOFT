#include <iostream>
#include <cstdlib>
using namespace std;

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void table();
int win();

int main() {
	string p1, p2;
	cout<<"Input Player 1 name= ";
	cin >>p1;
	cout<<endl;
	
	cout<<"Input Player 2 name= ";
	cin>>p2;
	cout<<endl;
	
A:
    int player = 1, i, choice;
    char mark;
    do {
        table();
        player = (player % 2) ? 1 : 2;
        cout << "        Player " << player << endl;
        cout << "        Enter Number for your desired place: ";
        cin >> choice;
        mark = (player == 1) ? 'X' : 'O';
        if (choice >= 1 && choice <= 9 && square[choice] == '0' + choice)
            square[choice] = mark;
        else {
            cout << "\n\n            PLAYER " << player << " entered incorrect move, press enter to continue";
            player--;
            cin.ignore();
            cin.get();
        }
        i = win();
        player++;
    } while (i == -1);

    table();

    if (i == 1)
        cout << "      ----------------------------\aPlayer " << --player << " win's---------------------------------" << endl;
    else
        cout << "      -----------------------------\aGame draw-----------------------------------------------" << endl;

    string c;
    cout << "Do you want to play again (Y/N) ?";
    cin >> c;
    if (c == "Y") {
        for (int i = 1; i <= 9; ++i)
            square[i] = '0' + i;
        goto A;
    } 
	else
	cout <<endl<<"Thank You " << p1 <<" & "<< p2 <<" for playing ";
        return 0;
}

int win() {
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' && 
             square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1;
}

void table() {
    system("cls");
    system("color f1");
    cout << "\n\t      #######  ###  ####   #######     #      ####   #####  ###   ####\n";
    cout << "\t         #      #   #         #       # #     #        #    # #   #\n";
    cout << "\t         #      #   #         #      #####    #        #    # #   ###\n";
    cout << "\t         #      #   #         #     #     #   #        #    # #   #\n";
    cout << "\t         #     ###  ####      #    #       #  ####     #    ###   ####\n\n\n";

    cout << "        [X] for player-1  \n\n                      &\n\n        [O] for player-2 \n\n\n";
    cout << "                   ...................\n";
    cout << "                   |     |     |     | \n";
    cout << "                   |  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << "  |\n";
    cout << "                   |_____|_____|_____|\n";
    cout << "                   |     |     |     |\n";
    cout << "                   |  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << "  |\n";
    cout << "                   |_____|_____|_____|\n";
    cout << "                   |     |     |     |\n";
    cout << "                   |  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << "  |\n";
    cout << "                   |     |     |     |\n";
    cout << "                   ...................\n\n\n";
}