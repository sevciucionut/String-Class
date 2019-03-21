#include <iostream>
#include "cmake-build-debug/str.h"

//using namespace std;

int main() {
    int size1, size2;

    cout << "Introduceti lungimea primului string: ";
    cin >> size1;
    str s1(size1);
    cout << "\nIntroduceti " << size1 << " caractere: ";
    cin >> s1;

    cout << "\nIntroduceti lungimea celui de-al doilea string: ";
    cin >> size2;
    str s2(size2);
    cout << "\nIntroduceti " << size2 << " caractere: ";
    cin >> s2;

    str s3;
    if (s3.Size() == 0)
        cout << "\nStringul s3 este NULL";

    s3 = s1;
    if (s3 == s1) {
        cout << "\nStringul s3 este: ";
        cout << s3;
    }

    if (s1 < s2) {
        cout << "\nStringul " << s1 << " < " << s2;
    }

    if (s3 > s2) {
        cout << "\nStringul " << s3 << " > " << s2;
    }

    if (s3 == s2) {
        cout << "\nStringul " << s3 << " = " << s2;
    }

    cout << "\nConcatenarea s2 + s3 este: " << s2 + s3 ;

    cout << "\nCaracterul de pe pozitia 0  din s1 este: " << s1[0];

    cout << "\nLungimea lui s1 este: " << s1.Size();

    str s4('c');
    cout<<"\nStringul s4 este: "<<s4;

    str s5;
    s5.set_char('d');
    cout<<"\nStringul s5 este: "<<s5;

    s1.set_str("altfel");
    cout<<"\nStringul s1 devine: "<<s1;

    str s6("Merg toate comenzile");
    cout<<"\nStringul s6 este: "<<s6;
}