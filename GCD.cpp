#include <iostream>
using namespace std;

//for HCF
int gcd(int a,int b) {

    while(a > 0 && b > 0) {
        if(a > b) {
            a = a%b;
        } else {
            b = b%a;
        }
    }

    if(a == 0) return b;
    return a;
}

int RecGcd(int a,int b) {

    if(b == 0) return a;

    return RecGcd(b,a%b);
}

//for LCM
int lcm(int a , int b) {

    int gcd = RecGcd(a,b);
    return (a*b)/gcd;
}
int main() {

    int a = 20;
    int b = 4;

    cout<< lcm(a,b);

    return 0;
}