#ifndef IBU_H
#define IBU_H
#include <vector>

class ibu {
public: 
    string nama;
    vector<anak*> daftar_anak;

    ibu(string pNama) :nama(pNama) {
        cout << "ibu \"" << nama << "\" ada\n";

    }
    ~ibu() {
         cout << "ibu \"" << nama << "\" tidak ada\n";

    }
    void tambahAnak(anak*);
    void cetakAnak();
};
void ibu::tambahAnak(anak* pAnak) {
    daftar_anak.push_back(pAnak);
}
void ibu::cetakAnak(){
 cout << "Dfatar Anak dari ibu \"" << this->nama <<"\":\n";
    /*for (auto& a : daftar_anak) {
     cout << a->nama << "\n";
    }*/
   for (int i = 0; i< daftar_anak.size(); i++) {
    cout << daftar_Anak[i]->nama << endl;
   }
   cout << endl;
}
#endif