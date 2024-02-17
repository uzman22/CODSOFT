#include <iostream>
#include <string>
using namespace std;

#define BUFMAX 128

void Process_A();
void Process_B();
void Process_M();
void Process_D();

void Process_A1();
void Process_A2();
void Process_B1();
void Process_B2();
void Process_M1();
void Process_M2();
void Process_D1();
void Process_D2();

void WriteString(const char* str) {
    cout << str;
}

void WriteString(const string& str) {
    cout << str;
}

void WriteDec(int value) {
    cout << value;
}

void ReadInt(int& value) {
    cin >> value;
}

void ReadChar(char& ch) {
    cin >> ch;
}

void Crlf() {
    cout << endl;
}

int main() {
	
	    system("cls");
    system("color f4");
    cout << "\n\t         ######  ###  #     ###### #    # #      ###   #####  ####   ####    \n";
    cout << "\t         #      #   # #     #      #    # #     #   #    #    #  #   #  #  \n";
    cout << "\t         #      ##### #     #      #    # #     #####    #    #  #   ###    \n";
    cout << "\t         #      #   # #     #      #    # #     #   #    #    #  #   #  #  \n";
    cout << "\t         ###### #   # ##### ###### ###### ##### #   #    #    ####   #   #   \n\n\n";
	
    char buffer[BUFMAX + 1];
    int bufSize;
    char choice;
    string name;

    cout << "Please enter your name: ";
    cin>>name;
    cin.getline(buffer, BUFMAX);
    
    cout <<endl<< "Choose a letter by pressing the corresponding capital letter:" << endl;
    cout << "A: Add two numbers" << endl;
    cout << "B: Subtract two numbers" << endl;
    cout << "M: Multiply two numbers" << endl;
    cout << "D: Divide two numbers" << endl;

    cin >> choice;
	cout<<endl;
    switch(choice) {
        case 'A':
            Process_A();
            break;
        case 'B':
            Process_B();
            break;
        case 'M':
            Process_M();
            break;
        case 'D':
            Process_D();
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    cout << "Thank You "<<name<< " for using the calculator!" << endl;

    return 0;
}

void Process_A() {
    cout << "Add two numbers:" << endl;
    Process_A1();
    Process_A2();
}

void Process_A1() {
    int num1, num2;

    cout << "Enter a number: ";
    ReadInt(num1);
    Crlf();

    cout << "Enter another number: ";
    ReadInt(num2);
    Crlf();
}

void Process_A2() {
    int num1, num2;

    cout << "The sum is ";
    WriteDec(num1 + num2);
    Crlf();

}

void Process_B() {
     cout << "Subtract two numbers:" << endl;
    Process_B1();
    Process_B2();
}


void Process_B1() {
    int num1, num2;

    cout << "Enter a number: ";
    ReadInt(num1);
    Crlf();

    cout << "Enter another number: ";
    ReadInt(num2);
    Crlf();
}

void Process_B2() {
    int num1, num2;

    cout << "The difference is ";
    WriteDec(num1 - num2);
    Crlf();

}

void Process_M() {
	
	cout << "Multiply two numbers:" << endl;
    Process_M1();
    Process_M2();
}
    void Process_M1() {
    int num1, num2;

    cout << "Enter a number: ";
    ReadInt(num1);
    Crlf();

    cout << "Enter another number: ";
    ReadInt(num2);
    Crlf();
}

void Process_M2() {
    int num1, num2;

    cout << "The product is ";
    WriteDec(num1 * num2);
    Crlf();

}

void Process_D() {
	
	cout << "Division two numbers:" << endl;
    Process_D1();
    Process_D2();
}
    void Process_D1() {
    int num1, num2;

    cout << "Enter numerator: ";
    ReadInt(num1);
    Crlf();

    cout << "Enter denominator: ";
    ReadInt(num2);
    Crlf();
}

void Process_D2() {
    int num1, num2;

    cout << "The approximate answer is ";
    WriteDec(num1 / num2);
    Crlf();

}