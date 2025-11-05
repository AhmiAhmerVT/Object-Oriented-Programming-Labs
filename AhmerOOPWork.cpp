#include <iostream>
#include <windows.h>
#include "gotoxy.h"
using namespace std;

// ------------------ LETTER FUNCTIONS ------------------

void U(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if ((j == 0 && i < 9) || (j == 9 && i < 9) || (i == 9 && j > 0 && j < 9))
                cout << "*";
            else
                cout << " ";
        }
    }
}
void H(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if (j == 0 || j == 9 || i == 5)
                cout << "*";
            else
                cout << " ";
        }
    }
}
void A(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if ((j == 0 && i != 0) || (j == 9 && i != 0) || (i == 0 && j > 0 && j < 9) || (i == 5 && j > 0 && j < 9))
                cout << "*";
            else
                cout << " ";
        }
    }
}
void D(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if (j == 0 || (j == 9 && i > 0 && i < 9) || ((i == 0 || i == 9) && j < 9 && j > 0))
                cout << "*";
            else
                cout << " ";
        }
    }
}
void S(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if (i == 0 || i == 5 || i == 9 || (j == 0 && i < 5) || (j == 9 && i > 5))
                cout << "*";
            else
                cout << " ";
        }
    }
}
void L(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if (j == 0 || i == 9)
                cout << "*";
            else
                cout << " ";
        }
    }
}
void E(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if (j == 0 || i == 0 || i == 5 || i == 9)
                cout << "*";
            else
                cout << " ";
        }
    }
}
void N(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if (j == 0 || j == 9 || i == j)
                cout << "*";
            else
                cout << " ";
        }
    }
}
void F(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if (j == 0 || i == 0 || i == 5)
                cout << "*";
            else
                cout << " ";
        }
    }
}
void O(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if ((i == 0 && j > 0 && j < 9) || (i == 9 && j > 0 && j < 9) || (j == 0 && i > 0 && i < 9) || (j == 9 && i > 0 && i < 9))
                cout << "*";
            else
                cout << " ";
        }
    }
}
void T(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if (i == 0 || j == 5)
                cout << "*";
            else
                cout << " ";
        }
    }
}
void I(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if (i == 0 || i == 9 || j == 5)
                cout << "*";
            else
                cout << " ";
        }
    }
}
void R(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if (j == 0 || (i == 0 && j < 9) || (i == 5 && j < 9) || (j == 9 && i > 0 && i < 5) || (i - j == 2 && i!=3 && i!=4))
                cout << "*";
            else
                cout << " ";
        }
    }
}
void V(int x, int y) {
    for (int i = 0; i <= 10; i++) {
        gotoxy(x, y + i);
        for (int j = 1; j <= 10; j++) {
            if (j == i / 2 + 1 || j == 10 - i / 2)
                cout << "*";
            else
                cout << " ";
        }
    }
}
void Y(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if ((i < 5 && (j == i || j == 9 - i)) || (i >= 5 && j == 5))
                cout << "*";
            else
                cout << " ";
        }
    }
}
void K(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if (j == 0 || (i + j == 8 && i < 5) || (i - j == 2 && i >= 5))
                cout << "*";
            else
                cout << " ";
        }
    }
}
void B(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 10; j++) {
            if (j == 0 || ((i == 0 || i == 4 || i == 9) && j < 9) || (j == 9 && ((i > 0 && i < 4) || (i > 4 && i < 9))))
                cout << "*";
            else
                cout << " ";
        }
    }
}
void M(int x, int y) {
    for (int i = 0; i < 10; i++) {
        gotoxy(x, y + i);
        for (int j = 0; j < 11; j++) {
            if (j == 0 || j == 10 || (i == j && i < 5) || (i + j == 10 && i < 5))
                cout << "*";
            else
                cout << " ";
        }
    }
}

// ------------------ NAME FUNCTION ------------------

void name() {
    int x = 20, y = 5;

    // AHMER
    A(x, y); Sleep(300); x += 12;
    H(x, y); Sleep(300); x += 12;
    M(x, y); Sleep(300); x += 12;
    E(x, y); Sleep(300); x += 12;
    R(x, y); Sleep(300); x += 18; // space before last name

    // NAVEED
    N(x, y); Sleep(300); x += 12;
    A(x, y); Sleep(300); x += 12;
    V(x, y); Sleep(300); x += 12;
    E(x, y); Sleep(300); x += 12;
    E(x, y); Sleep(300); x += 12;
    D(x, y); Sleep(300); x += 18;

    // ABBASI
    A(x, y); Sleep(300); x += 12;
    B(x, y); Sleep(300); x += 12;
    B(x, y); Sleep(300); x += 12;
    A(x, y); Sleep(300); x += 12;
    S(x, y); Sleep(300); x += 12;
    I(x, y); Sleep(300);
}

// ------------------ UNIVERSITY NAME (UNCHANGED) ------------------

void foundation() {
    int x = 20, y = 20;

    F(x, y); Sleep(300); x += 12;
    O(x, y); Sleep(300); x += 12;
    U(x, y); Sleep(300); x += 12;
    N(x, y); Sleep(300); x += 12;
    D(x, y); Sleep(300); x += 12;
    A(x, y); Sleep(300); x += 12;
    T(x, y); Sleep(300); x += 12;
    I(x, y); Sleep(300); x += 12;
    O(x, y); Sleep(300); x += 12;
    N(x, y); Sleep(300);
}

void university() {
    int x = 20, y = 35;

    U(x, y); Sleep(300); x += 12;
    N(x, y); Sleep(300); x += 12;
    I(x, y); Sleep(300); x += 12;
    V(x, y); Sleep(300); x += 12;
    E(x, y); Sleep(300); x += 12;
    R(x, y); Sleep(300); x += 12;
    S(x, y); Sleep(300); x += 12;
    I(x, y); Sleep(300); x += 12;
    T(x, y); Sleep(300); x += 12;
    Y(x, y); Sleep(300);
}

int main() {
    system("cls");
    name();
    foundation();
    university();
    gotoxy(0, 50);
    return 0;
}