#include <iostream>

int main() {
    int patients;
    int totalRooms;
    int takenRooms;

    std::cout<<"how many patients: ";
    std::cin>> patients;

    std::cout<<"how many rooms total: ";
    std::cin>> totalRooms;

    std::cout<<"how many taken rooms: ";
    std::cin>> takenRooms;

    int freeRooms = totalRooms - takenRooms;

    std::cout<< "patients: " << patients << "\n";
    std::cout<<"total rooms: " << totalRooms << "\n";
    std::cout<<"free rooms: " << freeRooms << "\n";
    std::cout<<"taken rooms: " << takenRooms << "\n";

    return 0;
}