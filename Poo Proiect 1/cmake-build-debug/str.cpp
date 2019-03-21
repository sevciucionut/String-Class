//
// Created by Sevciuc on 18.03.2019.
//

#include "str.h"

//using namespace std;

str::str() {
    s_ = NULL;
    size_ = 0;
}

str::str(int size) : size_(size) {
    if (size >= 0) {
        s_ = new char[size_];
    }
}

str::str(const str &other) : size_(other.size_) {
    if (size_ <= 0) {
        s_ = NULL;
    } else {
        s_ = new char[size_];
        for (int i = 0; i < size_; i++) {
            s_[i] = other.s_[i];
        }
    }
}

str::str(char s) {
    s_=new char[1];
    s_[0]=s;
    size_=1;
}

str::str(char s[]) {
    int nr = 0, i = 0;
    while (s[i] != NULL) {
        i++;
        nr++;
    }
    s_ = new char[nr];
    size_ = nr;
    for (i = 0; i < nr; i++) {
        s_[i] = s[i];
    }
}


str::~str() {
    if (s_ != NULL) {
        delete[] s_;
    }
}

char &str::operator[](int pos) {
    return s_[pos];
}

bool str::operator==(str &s1) {
    if (s1.size_ != size_) {
        return false;
    }
    for (int i = 0; i < size_; i++) {
        if (s1.s_[i] != s_[i]) {
            return false;
        }
    }
    return true;
}

str &str::operator=(const str &other) {
    if (&other != this) {
        s_ = new char[other.size_];
        size_ = other.size_;
        for (int i = 0; i < other.size_; i++) {
            s_[i] = other.s_[i];
        }
    }

    return *this;
}

bool str::operator<(str &s1) {

    //comparam litera cu litera, prima litera aratandu-ne in ce ordine lexicografica sunt stringurile
    //daca s1 e prefixul lui s_, sau invers, cel cu lungimea mai mare este mai mare.

    int size;
    if (s1.size_ < size_) {
        size = s1.size_;
    } else {
        size = size_;
    }

    for (int i = 0; i < size; i++) {
        if (s1.s_[i] < s_[i]) {
            return false;
        } else if (s1.s_[i] > s_[i]) {
            return true;
        }
    }

    if (s1.size_ > size_) {
        return true;
    }
    return false;
}

bool str::operator>(str &s1) {

    //comparam litera cu litera, prima litera aratandu-ne in ce ordine lexicografica sunt stringurile
    //daca s1 e prefixul lui s_, sau invers, cel cu lungimea mai mare este mai mare.

    int size;
    if (s1.size_ < size_) {
        size = s1.size_;
    } else {
        size = size_;
    }

    for (int i = 0; i < size; i++) {
        if (s1.s_[i] > s_[i]) {
            return false;
        } else if (s1.s_[i] < s_[i]) {
            return true;
        }
    }

    if (s1.size_ < size_) {
        return true;
    }
    return false;
}

str str::operator+(str &s1) {
    str s2;
    s2.size_ = size_ + s1.size_;
    s2.s_ = new char[s2.size_];

    for (int i = 0; i < size_; i++) {
        s2.s_[i] = s_[i];
    }

    for (int i = size_; i < size_ + s1.size_; i++) {
        s2.s_[i] = s1.s_[i - size_];
    }
    //size_ = size_ + s1.size_;

    return s2;
}
void str::set_char(char s) {
    s_ = new char[1];
    s_[0] = s;
    size_ = 1;
}

void str::set_str(char *s) {
    int nr = 0, i = 0;
    while (s[i] != NULL) {
        i++;
        nr++;
    }
    s_ = new char[nr];
    size_ = nr;
    for (i = 0; i < nr; i++) {
        s_[i] = s[i];
    }
}

istream &operator>>(istream &in, str &s) {
    for (int i = 0; i < s.Size(); i++) {
        in >> s[i];
    }
    return in;
}

ostream &operator<<(ostream &out, str s) {
    for (int i = 0; i < s.Size(); i++) {
        out << s[i];
    }
    return out;
}
