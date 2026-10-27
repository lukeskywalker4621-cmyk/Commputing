#include <iostream>
#include <string>

class patientReg{
public:
    std::string name;
    std::string reason;
    int room;
    int floor;
    int ID;
    bool critical;

    patientReg(std::string pname, std::string preason, int proom, int pfloor, int pID, bool pcritical);
};

patientReg::patientReg(std::string pname, std::string preason, int proom, int pfloor, int pID, bool pcritical)
    : name(pname),
    reason(preason),
    room(proom),
    floor(pfloor),
    ID(pID),
    critical(pcritical) {
}

int main() {
    std::string name;
    std:: string reason;
    int room;
    int floor;
    int ID;
    bool critical;
    std::string input;

    std::cout<<"Name: ";
    std::getline(std::cin, name);

    std::cout<<"Reason: ";
    std::getline(std::cin, reason);

    std::cout<<"Room: ";
    std::cin>> room;
    std::cin.ignore();

    std::cout<<"Floor: ";
    std::cin>> floor;
    std::cin.ignore();

    std::cout<<"ID: ";
    std::cin>> ID;
    std::cin.ignore();

    std::cout<<"Critical: ";
    std::cin>>input;

    if (input == "yes" || input == "Yes" || input == "y" || input == "Y") {
        critical = true;
    }
    else {
        critical = false;
    }
    

    patientReg patientReg(name, reason, room, floor, ID, critical);

    std::cout<<" \n";
    std::cout<<"----------Patient Registration----------\n";
    std::cout<<"Name: " << patientReg.name << "\n";
    std::cout<<"Reason: " << patientReg.reason << "\n";
    std::cout<<"Room: " << patientReg.room << "\n";
    std::cout<<"Floor: " << patientReg.floor << "\n";
    std::cout<<"ID: " << patientReg.ID << "\n";
    if (critical) {
        std::cout<<"CRITICAL CONDITION";
    }
    else {
        std::cout<<"Patient is stable";
    }

    return 0;
}