#include <iostream>
#include "cmake-build-debug/str.h"

using namespace std;

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

    s1 = s2 + s3;
    cout << "\nConcatenarea s2 + s3 este: " << s1;

    cout << "\nCaracterul de pe pozitia 0  din s1 este: " << s1[0];

    cout << "\nLungimea lui s1 este: " << s1.Size();


}