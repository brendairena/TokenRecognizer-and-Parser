#include "Token.cpp"
#include "headerparser.h"
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stack>

void cekkalimat(string x, string y, string z, string a) {
    stack<char> s;
    char state = 'i';
    bool cek = true;
    int jml = 0;
    char vn[999];
    s.push('#');
    state = 'p';
    s.push('S');
    state = 'q';
    //char top = s.top();
    //while (kalimat[i] != '\0') {
        while (s.top() != '#' && cek == true) {
            switch (s.top()) {
                case 'S':
                    if (ceksubjek(x) == true && cekpredikat(y) == true) {
                        s.pop();
                        s.push('P');
                        s.push('s');
                        vn[jml]='S';
                        jml++;
                    }
                    else {
                        cek = false;
                    }
                    break;
                case 'P':
                    if (cekpredikat(y) == true && cekobjek(z) == true) {
                        s.pop();
                        s.push('O');
                        s.push('p');
                        vn[jml] = 'P';
                        jml++;
                    }
                    else if (cekpredikat(y) == true && cekketerangan(z) == true) {
                        s.pop();
                        s.push('K');
                        s.push('p');
                        vn[jml] = 'P';
                        jml++;
                    }
                    else if (cekpredikat(y) == true && z == "") {
                        s.pop();
                        s.push('p');
                        vn[jml] = 'P';
                    }
                    else {
                        cek = false;
                    }
                    break;
                case 'O':
                    if (cekobjek(z) == true && cekketerangan(a) == true) {
                        s.pop();
                        s.push('K');
                        s.push('o');
                        vn[jml] = 'O';
                        jml++;
                    }
                    else if (cekobjek(z) == true && a == "") {
                        s.pop();
                        s.push('o');
                        vn[jml] = 'O';
                    }
                    else {
                        cek = false;
                    }
                    break;
                case 'K':
                    if (cekketerangan(a) == true || cekketerangan(z) == true) {
                        s.pop();
                        s.push('k');
                        vn[jml] = 'K';
                    }

                    else {
                        cek = false;
                    }
                    break;
                case 's':
                    if (ceksubjek(x) == true && cekpredikat(y) == true) {
                        s.pop();
                    }
                    else {
                        cek = false;
                    }
                    break;
                case 'p':
                    if (cekpredikat(y) == true && cekobjek(z) == true || cekpredikat(y) == true && cekketerangan(a) == true || cekpredikat(y) == true && "") {
                        s.pop();
                    }
                    else {
                        cek = false;
                    }
                    break;
                case 'o':
                    if (cekobjek(z) == true && cekketerangan(a) == true || cekobjek(z) == true && "") {
                        s.pop();
                    }
                    else {
                        cek = false;
                    }
                    break;
                case 'k':
                    if (cekketerangan(a) == true || cekketerangan(z) == true) {
                        s.pop();
                    }
                    else {
                        cek = false;
                    }
                    break;
            }
        }
    if(s.top() == '#'){
        s.pop();
        state = 'f';
        cout << "VALID ";
        int i = 0;
        cout << "(";
        while (i <= jml) {
            cout << " " << vn[i];
            i++;
        }
        cout << " )";
    }
    else{
        cout << "INVALID";
    }
};
