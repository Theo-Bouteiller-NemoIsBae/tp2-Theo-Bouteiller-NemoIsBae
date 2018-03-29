#include <iostream>
#include <utility>
#include "duree.h"

using namespace nsUtil;
using namespace std;
using namespace rel_ops;

void testDuree (void)
    {
        Duree d1 (3661);
        Duree d2 (2661);
        Duree d3 (3661);

        cout << boolalpha;
        /*         */
        d1.display ();
        cout << " <  ";
        d2.display ();
        cout << " : " << (d1 <  d2) << '\n';

        d2.display ();
        cout << " <  ";
        d1.display ();
        cout << " : " << (d2 <  d1) << "\n\n";
        /*         */

        /*         */
        d1.display ();
        cout << " >  ";
        d2.display ();
        cout << " : " << (d1 >  d2) << '\n';

        d2.display ();
        cout << " >  ";
        d1.display ();
        cout << " : " << (d2 >  d1) << "\n\n";
        /*         */

        /*         */
        d1.display ();
        cout << " <= ";
        d2.display ();
        cout << " : " << (d1 <= d2) << '\n';

        d2.display ();
        cout << " <= ";
        d1.display ();
        cout << " : " << (d2 <= d1) << "\n\n";
        /*         */

        /*         */
        d1.display ();
        cout << " >= ";
        d2.display ();
        cout << " : " << (d1 >= d2) << '\n';

        d2.display ();
        cout << " >= ";
        d1.display ();
        cout << " : " << (d2 >= d1) << "\n\n";
        /*         */

        /*         */
        d1.display ();
        cout << " == ";
        d2.display ();
        cout << " : " << (d1 == d2) << '\n';

        d2.display ();
        cout << " == ";
        d1.display ();
        cout << " : " << (d2 == d1) << "\n\n";
        /*         */

        /*         */
        d1.display ();
        cout << " == ";
        d3.display ();
        cout << " : " << (d1 == d3) << '\n';
        /*         */

        /*         */
        d1.display ();
        cout << " != ";
        d2.display ();
        cout << " : " << (d1 != d2) << '\n';
        /*         */

        /*         */
        d1.display ();
        cout << " != ";
        d3.display ();
        cout << " : " << (d1 != d3) << '\n';
        /*         */

        cout << noboolalpha;

    } // testDuree()


int main(void)
{
    testDuree();
    return 0;
}
