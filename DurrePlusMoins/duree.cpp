#include <iostream>
#include <iomanip>
#include "duree.h"

using namespace std;

#define DUREE nsUtil::Duree

void DUREE::normaliser(void) {
    mySeconds = myDuree % 60;
    myDays = myDuree / 86400;
    myHours = (myDuree % 86400) / 3600;
    myMinutes = (myDuree % 3600) / 60;
}

DUREE::Duree(unsigned long long duree) : myDuree (duree) {
    normaliser();
    display();
    cout << "créé" << endl;
}

unsigned long long DUREE::getDuree (void) const { return myDuree; }

void DUREE::display() const {
    cout << '[' << setw(10) << myDays << ':'
                << setfill ('0') << setw(2) << myHours << ':'
                                 << setw(2) << myMinutes << ':'
                                 << setw(2) << mySeconds << ':'
                << setfill (' ');

}

void DUREE::incr(unsigned long long delta) {
    myDuree += delta;
    normaliser();
}

void DUREE::decr (unsigned long long delta) {
    myDuree -= delta > myDuree ? myDuree : delta; //si vrai alors premier sinon lautre
    normaliser();
}

DUREE DUREE::operator + (const Duree d1) const{
    return (this->getDuree() + d1.getDuree());
}

DUREE DUREE::operator - (const Duree d1) const{
    if (this->getDuree() < d1.getDuree())
        return 0;
    return (this->getDuree() - d1.getDuree());
}

#undef DUREE
