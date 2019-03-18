//
// Created by Sevciuc on 18.03.2019.
//

#ifndef POO_PROIECT_1_STR_H
#define POO_PROIECT_1_STR_H

#include <iostream>

using namespace std;

class str {

    int size_;
    char *s_;

public:

    str(int size = 0);
    str(const str &other);
    ~str();

    int Size() const { return size_; }

    char &operator[](int pos);

    bool operator==(str &s1);

    str &operator=(const str &other);

    bool operator<(str &s1);

    bool operator>(str &s1);

    str &operator+(str &s1);

};

istream &operator>>(istream &in, str &s);
ostream &operator<<(ostream &out, str &s);

#endif //POO_PROIECT_1_STR_H
