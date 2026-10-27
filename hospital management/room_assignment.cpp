#include <iostream>

class roomAssignment{
public:
    int totalRooms;

    roomAssignment(int roomNum);
};

roomAssignment::roomAssignment(int roomNum)
    : totalRooms(roomNum) {
}

int main() {
    int totalRooms;

    std::cout<<"How many rooms total: ";
    std::cin>> totalRooms;
    std::cin.ignore();

    std::cout<<"\nTotal rooms: " << totalRooms;
}