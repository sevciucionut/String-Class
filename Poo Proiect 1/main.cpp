#include <iostream>
#include "cmake-build-debug/str.h"

using namespace std;

int main() {
    str a(2), b(2);
    cin >> a;
    cin >> b;
    a=a+b;
    cout << a;

}