#include <iostream>
#include <string>
using namespace std;

class User {
protected:
    static int globalId;
    int id;
    string nama;
    string email;

public:
    User(string pNama, string pEmail) {
        id = generateId();
        nama = pNama;
        email = pEmail;
    }

    
    static int generateId() {
        return ++globalId;
    }
};


int User::globalId = 0;



class Member : public User {
private:
    bool status;

public:
   
    Member(string pNama, string pEmail, bool pStatus)
        : User(pNama, pEmail) {
        status = pStatus;
    }


    void showProfile() {
        cout << "===== PROFILE MEMBER =====" << endl;
        cout << "ID     : " << id << endl;
        cout << "Nama   : " << nama << endl;
        cout << "Email  : " << email << endl;
        cout << "Status : " << (status ? "Aktif" : "Nonaktif") << endl;
    }

 
    void setStatus(bool pStatus) {
        status = pStatus;
    }

   
    bool getStatus() {
        return status;
    }
};



class Admin : public User {
public:
    // Constructor
    Admin(string pNama, string pEmail)
        : User(pNama, pEmail) {
    }

  
    void showAllMember(Member members[], int jumlah) {
        cout << "\n===== DAFTAR MEMBER =====" << endl;

        for (int i = 0; i < jumlah; i++) {
            members[i].showProfile();
            cout << endl;
        }
    }


    void toggleActivationMember(Member &member) {
        member.setStatus(!member.getStatus());
    }
};



int main() {

    Member m1("Budi", "budi@gmail.com", true);
    Member m2("Andi", "andi@gmail.com", false);

   
    Member daftarMember[] = {m1, m2};

    
    Admin admin1("Admin", "admin@gmail.com");

    
    admin1.showAllMember(daftarMember, 2);

   
    admin1.toggleActivationMember(daftarMember[0]);

    cout << "\nSetelah Toggle Status:\n" << endl;

   
    admin1.showAllMember(daftarMember, 2);

    return 0;
}