#include <vector>
#include <iostream>

#include "duree.h"

using namespace std;
using namespace nsUtil;

void testDuree (void)
    {
        Duree d1 (123);
        Duree d2 (12);

        d1.display ();
        cout << " + ";
        d2.display ();
        cout << " = ";
        (d1 + d2).display ();
        cout << '\n';

        d2.display ();
        cout << " + ";
        d1.display ();
        cout << " = ";
        (d2 + d1).display ();
        cout << '\n';

        d1.display ();
        cout << " - ";
        d2.display ();
        cout << " = ";
        (d1 - d2).display ();
        cout << '\n';

        d2.display ();
        cout << " - ";
        d1.display ();
        cout << " = ";
        (d2 - d1).display ();
        cout << '\n';

    } // TestCDuree()

int main(void)
{
    /*vector <Duree> vDuree;
    for (unsigned long long duree; cin >> duree; )
            vDuree.push_back(duree);

    for (const Duree & duree : vDuree) {
        duree.display();
        cout << endl;
    }*/
    testDuree();
    return 0;
}

