#include <iostream>

struct Residence_address
{
    std::string City;
    std::string Street;
    int House_number;
    int Apartment_number;
    int Index;
};

void Address_output(Residence_address* addres )
{
    std::cout << "City: " <<addres->City << "\n" << "Street: " << addres->Street << "\n" << "House number: " << addres->House_number << "\n" << "Apartment number: " << addres->Apartment_number << "\n" << "Index: " << addres->Index << "\n";
}

int main()
{
    Residence_address addres;

    std::cout << "Enter city:\n";
    std::cin >> addres.City;

    std::cout << "Enter street:\n";
    std::cin >> addres.Street;

    std::cout << "Enter your house number:\n";
    std::cin >> addres.House_number;

    std::cout << "Enter apartment number:\n";
    std::cin >> addres.Apartment_number;

    std::cout << "Enter index:\n";
    std::cin >> addres.Index;
    
    Address_output(&addres);
    return 0;
}

