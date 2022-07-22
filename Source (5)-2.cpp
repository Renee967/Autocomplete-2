#include<conio.h>
#include <iostream>
#include "Bag.h"
#include <fstream>
using namespace std;
int main() {
    ifstream infile("input.txt");
    char ch = ' ';
    string input;
    
    int count = 0;
    while (getline(infile, input))
    {
        count++;
    }
    infile.close();

    infile.open("input.txt");
    string* source = new string[100];
    int i = 0;
    while (getline(infile, input))
    {
        source[i] = input;
        i++;
    }
    string in;
    Bag bag1("My Bag", 100,i, source);
    
    bag1.displayAll();
    cout << endl << endl;
    bag1.bubbleSort();
    cout << "Sorted List: " << endl;
    bag1.displayAll();
    cout << endl << endl;
    cout << "Search for a title" << endl;
    while (1) {
        
        if (_kbhit()) {
            system("CLS"); //clear screen
            ch = _getch();
            in.push_back(ch);
            if (ch == '\b') //backspace clears the search
                in.clear();

            //cout << ch << " was pressed" << endl;
            cout << in << endl;

            if (!bag1.search(in))
            {
                char choice;
                cout << "List is empty, would you like to add a title?" << endl;
                cout << "y/n" << endl;
                cin >> choice;
                if (choice == 'y')
                {
                    system("CLS");
                    cout << "Enter title" << endl;
                    string name;
                    cin.get();
                    getline(cin, name);
                    bag1.append(name);
                }
            }
            
               
            
        }
    }

}