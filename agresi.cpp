#include <iostream>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main(){ //agregasi
    ibu* varIbu = new inu("dini");
    ibu* varibu2 = new ibu("novi");
    anak* varanak1 = new anak("tono");
    anak* varanak2 = new anak("rini");
    anak* varanak3 = new anak ("dewi");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varIbu1->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varIbu2->cetakAnak();

    delete varIbu;
    delete varIbu;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;

    system("pause");

    return 0;
}