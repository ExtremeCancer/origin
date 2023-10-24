#include <iostream>

struct client
{
    int bank_account = 0;
    std::string first_name;
    int balance = 0;
};

void Balance_update(client* c , int new_balance)
{
    c->balance = new_balance;
}
int main(int argc, char** argv)
{
    client c;
  
    std::cout << "Enter account number:\n";
    std::cin >> c.bank_account;

    std::cout << "Enter owner's name:\n";
    std::cin >> c.first_name;
 
    std::cout << "Enter balance:\n";
    std::cin >> c.balance;

    int new_balance;
    std::cout << "Enter new balance:\n";
    std::cin >> new_balance;
    Balance_update(&c , new_balance);
    std::cout << "Your account: " <<  c.first_name << ", " << c.bank_account << ", " << c.balance;
    return 0;
}

