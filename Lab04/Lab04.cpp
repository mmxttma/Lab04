// Lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Lab04.h"
using namespace std;

int x;

//Print out the menu of choices for the user to select from
void printMenu() {
    cout << "Please Slect which operation to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your Selection: ";
}
void factorial() {
    int y = 1;
    cout << "Factorial: " << endl;
    cout << "Enter a number: ";
    cin >> x;
    while (x < 0) {
        
            cout << "Nice try, please enter a POSITIVE number...: ";
            cin >> x;
        
    }
    
    cout << x << "!" << " = ";
    int i = 1;
    while (i <= x) {
        y *= i;
        //cout << x << "!" << " = " << i;
        if (i < x) {
            cout << i << " * ";
        }
        if (i == x) {
            cout << i << " = ";
        }
        i++;
    }

    cout << y << endl;

}
void arithmetic() {
    int z;
    int n;
    int s = 0;
    cout << "Artihmetic Series:" << endl;
    cout << "Enter a number to start at: ";
    cin >> x;
    cout << "Enter a number to add each time : ";
    cin >> z;
    cout << "Enter the number of elements in the series: ";
    cin >> n;
    while (n < 0) {
            cout << "Nice try, please enter a POSITIVE number...: ";
            cin >> n;
    }
    
    int i = 1;
    while (i <= n) {
   
        if (i < n) {
            cout << x << " + ";
        }
        if (i == n) {
            cout << x << " = ";
        }
        s += x;
        x += z;
        i++;
    }
    cout << s << endl;

}
void geometric() {
    int a;
    int r;
    int m;
    int s = 0;
    cout << "Geometric Series:" <<  endl;
    cout << "Enter a number to start at: ";
    cin >> a;
    cout << "Enter a number to multiply by each time : ";
    cin >> r;
    cout << "Enter a number of elements in the series: ";
    cin >> m;
    while (m < 0) {
        cout << "Nice try, please enter a POSITIVE number...: ";
        cin >> m;
    }
    int i = 1;
    while (i <= m) {
        if (i < m) { 
            
            cout << a << " + ";
            
        }
        if (i == m) {
            cout << a << " = ";
        }
        s = s + a;
        a = a * r;
        i++;
    }
    cout << s << endl;
}

int main()
{
    int choice;
    char again;

    do {
        printMenu();
        cin >> choice;

        //Quit if user chooses to exit(or any invalid choice)
        if (choice > 3 || choice < 1) {
            return 0;
        }

        else if (choice == 1) {
            factorial();
        }

        else if (choice == 2) {
            arithmetic();
        }

        else if (choice == 3) {
           
            geometric();
        }

        cout << "Go Again? [Y/N] ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
