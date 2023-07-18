#include <iostream>
using namespace std;

int isPrime(int num);
void displayPrime(int source, int destination);

int main() {

    int num, is_prime;
    cout << "Enter a number : "; cin >> num;

    // displayPrime(1, 50);
    is_prime = isPrime(num);
    cout << ((is_prime == 1) ? "\n-> Prime number\n" : "\n-> Non-Prime number\n");



    return(0);
}
int isPrime(int num) {

    int i;
    for(i=2; i<num; i++) {
        if((num % i) == 0) return(0);
    }
    if(i == num) { return(1); }
}
void displayPrime(int source, int destination) {

    cout << "Prime numbers betweem " << source << " and " << destination << " are : " << endl << "-> ";
    for(int num=source; num<destination; num++) {
        int i;
        for(i=2; i<num; i++) {
            if((num % i) == 0) break;
        }
        if(i == num) {cout << num << "  "; }
    }
}