#include <iostream>
#include <limits>
#include "functions.h"
using namespace std;

int main(){
    int choice;
    do{
        cout<<"\n\nMathematics Tools Menu: \n\n";
        cout<<"1.Factorial Calculation"<<endl;
        cout<<"2.Prime Number Check"<<endl;
        cout<<"3.Multiplication Table"<<endl;
        cout<<"4.Combination and Permutation"<<endl;
        cout<<"5.GCD and LCM"<<endl;
        cout<<"6.Fibonacci Series"<<endl;
        cout<<"0.Exit"<<endl;

        cout<<"Your choice: ";
        cin >> choice;

        if(cin.fail()){
            cout<<"Invalid input. Please enter a number."<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            choice =-1;
            continue;
        }

        switch(choice){
        case 1: factorial(); break;
        case 2: primeCheck(); break;
        case 3: multiplicationTable(); break;
        case 4: combinationPermutation(); break;
        case 5: gcdLcm(); break;
        case 6: fibonacciSeries(); break;
        case 0: cout<<"Exiting the program..."<<endl; break;
        default: cout<<"Invalid choice!";
        }
    }while (choice!=0);

    return 0;
}
