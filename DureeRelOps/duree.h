#ifndef DUREE_H
#define DUREE_H

namespace nsUtil {
class Duree
{
    unsigned long long myDuree;
    unsigned long long myDays;
    unsigned short myMinutes;
    unsigned short myHours;
    unsigned short mySeconds;
    void normaliser (void);

public :
    Duree(unsigned long long duree);

    unsigned long long getDuree(void) const;

    void display() const;
    void incr(unsigned long long delta);
    void decr (unsigned long long delta);

    Duree operator + (const Duree d1) const;
    Duree operator - (const Duree d1) const;
    bool operator < (const Duree d1) const;

    bool operator == (const Duree d1) const;

};
}//nsUtil
#endif // DUREE_H
