#include <iostream>
#include <cmath>
#include "functions.h"

using namespace std;

void factorial(){

    int number;
    unsigned long long result=1;

    cout<<"Enter a number to calculate its factorial: ";
    cin>> number;

    if(number<0){
        cout<<"Factorial is not defined for negative numbers."<<endl;
        return;
    }

    for(int i=1;i<=number;i++){
        result*=i;
    }

    cout<<"Factorial of "<<number<<" is: "<<result<<"\n\n\n";
}

void primeCheck(){
    int number;
    bool isPrime=true;

    cout<<"Enter a number to check if it is prime: ";
    cin>>number;

    if(number<=1){
        isPrime=false;
    }else{
        for(int i=2;i*i<=number;i++){
            if(number%i==0){
                isPrime=false;
                break;
            }
        }
    }

    if(isPrime){
        cout<<number<<" is a prime number."<<endl;
    }else{
        cout<<number<<" is not a prime number."<<endl;
    }
}

void multiplicationTable(){
    int number,limit;

    cout<<"Enter the number for multiplication table: ";
    cin>>number;
    cout<<"Enter the limit for multiplication table: ";
    cin>>limit;

    cout<<"Multiplication table of "<<number<<":"<<endl;
    for(int i=1;i<=limit;i++){
        cout<<number<<" x "<<i<<" = "<<number*i<<endl;
    }
}

void combinationPermutation(){
    int n,r;
    cout<<"Enter n (total items): ";
    cin>>n;
    cout<<"Enter r (selected items): ";
    cin>>r;

    if (n<0 || r<0 || r>n){
        cout<<"Invalid input. Make sure 0 <= r <= n."<<endl;
        return;
    }

    //Factorial function from earlier
    auto factorial=[](int number)-> unsigned long long{
        unsigned long long result=1;
        for(int i=1;i<=number;i++)
            result*=i;
        return result;
    };

    unsigned long long combination = factorial(n)/(factorial(r)*factorial(n-r));
    unsigned long long permutation = factorial(n)/factorial(n-r);

    cout<<"Combination C("<<n<<","<<r<<") = "<<combination<<endl;
    cout<<"Permutation P("<<n<<","<<r<<") = "<<permutation<<endl;
}

void gcdLcm(){
    int number1,number2;
    cout<<"Enter two numbers to calculate GCD and LCM: ";
    cin>>number1>>number2;

    if(number1<=0 || number2<=0){
        cout<<"Please enter positive integers only."<<endl;
        return;
    }

    int a=number1 , b=number2;
    //Euclidean Algorithm for GCD
    while (b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    int resultGCD=a;
    long long resultLCM=static_cast<long long>(number1)*number2/resultGCD;

    cout<<"GCD of "<<number1<<" and "<<number2<<" = "<<resultGCD<<endl;
    cout<<"LCM of "<<number1<<" and "<<number2<<" = "<<resultLCM<<endl;

}

void fibonacciSeries(){
    int number;
    cout<<"Enter the number of terms for Fibonacci series: ";
    cin>>number;

    if(number<=0){
        cout<<"Please enter a positive integer."<<endl;
        return;
    }

    unsigned long long a=0,b=1;
    cout<<"Fibonacci series up to "<<number<<" terms: "<<endl;

    for(int i=1;i<=number;i++){
        cout<<a<<" ";
        unsigned long long next =a+b;
        a=b;
        b=next;
    }
    cout<<endl;
}






























