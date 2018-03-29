#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

#include "duree.h"

using namespace std;
using namespace nsUtil;

typedef vector<Duree> CVDuree;
typedef CVDuree::const_iterator Iter_t;

const unsigned KDureeMax = 1000000;

void TestDuree(){
}

void InitVDuree(CVDuree & VDuree){
    unsigned size;
    cin >> size;
    VDuree.resize(size);
    for (auto & val : VDuree)
        val = Duree(rand() % KDureeMax);
}

void ShowCVDuree(const CVDuree & VDuree){
    cout << "---------------------------------------------" << endl;
    for (Iter_t it (VDuree.begin()); it != VDuree.end(); ++it){
        it->display();
        cout << " = " << it->getDuree() << endl;
    }
}

void TrieCVDuree (CVDuree & VDuree){
    sort(VDuree.begin(), VDuree.end());
}

int main(void)
{
    srand(time(NULL));
    CVDuree vd;
    InitVDuree(vd);
    ShowCVDuree(vd);
    TrieCVDuree(vd);
    ShowCVDuree(vd);
    return 0;
}
