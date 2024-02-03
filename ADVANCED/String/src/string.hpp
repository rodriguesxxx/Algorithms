#include <iostream>
#include <cstring>

#ifndef STRING_H
#define STRING_H

class String {

    private:
        char *str;
        
        void setStr(const char *s) {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }

        char* getStr() {
            return str;
        }

    public:

        String(const char *s = "") {
            this->setStr(s);
        }

        friend std::ostream& operator<<(std::ostream &out, const String &s) {
            out << s.str;
            return out;
        }

        friend std::istream& operator>>(std::istream &in, String &s) {
            char buffer[256];
            in >> buffer;
            delete[] s.str;
            s.setStr(buffer);
            return in;
        }

        ~String() {
            delete[] str;
        }
};

#endif