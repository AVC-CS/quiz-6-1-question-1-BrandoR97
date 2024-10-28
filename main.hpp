#include <iostream>
using namespace std;


void getTwoValues(int &begin, int &end) {
    do {
        cout << "Enter two integers (begin < end): ";
        cin >> begin >> end;
        if (begin >= end) {
            cout << "Invalid input. Please ensure the first number is less than the second." << endl;
        }
    } while (begin >= end);
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int getNextPrime(int begin) {
    int next = begin + 1;
    while (!isPrime(next)) {
        ++next;
    }
    return next;
}

int getPrevPrime(int end) {
    int prev = end - 1; 
    while (!isPrime(prev) && prev > 1) {
        --prev;
    }
    return prev;
}
