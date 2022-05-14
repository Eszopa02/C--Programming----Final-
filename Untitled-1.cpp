//Eden Szopa
//05/13/2022
//C++ Programming class at Columbia College Chicago


#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>

int main()
{
    std::cout << "Hello World!\n";
    int i, j;

    int mocha = 0;
    int latte = 0;
    int earlGrey = 0;
    int chamomile = 0;
    int blackTea = 0;
    int greenTea = 0;
    int appleJuice = 0;
    int lemonPie = 0;
    int chocolateCupcake = 0;
    int englishScone = 0;

    int choice;

    int price = 0;

    int totalPrice;

    int pricePayed;

    int remainder;

    int hundred = 0;
    int fifty = 0;
    int twenty = 0;
    int ten = 0;
    int five = 0;
    int one = 0;
    int quarter = 0;
    int dime = 0;
    int nickel = 0;
    int penny = 0;

    std::string shopInventory[10][2] =
    {
        {"Mocha", " - $5.50"},
        {"Latte", " - $5.50"},
        {"Earl Grey Tea", " - $4.00"},
        {"Chamomile", " - $4.00"},
        {"Black Tea", " - $4.00"},
        {"Green Tea", " - $4.00"},
        {"Apple Juice", " - $4.50"},
        {"Lemon Meringue Pie", " - $4.00"},
        {"Chocolate Cupcake", " - $2.50"},
        {"English Scone", " - $2.25"}
    };

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            std::cout << shopInventory[i][j] << '\n';
        }
    }

    std::cout << "\nWhat would you like to get?";

    do
    {
        std::cout << "\n0.Mocha\n" << std::endl << "1.Latte\n" << std::endl << "2.Earl Gray Tea\n" << std::endl << "3.Chamomile\n"
            << std::endl << "4. Black Tea\n" << std::endl << "5.Green Tes\n" << std::endl << "6.Apple Juice\n" << std::endl <<
            "7.Lemon Meringue Pie\n" << std::endl << "8.Chocolate Cupcake\n" << std::endl << "9.English Scone\n" << "10.That's all";

        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "\nHow many Mocha's do you want?\n";
            std::cin >> mocha;
            price += 5.50;
            totalPrice = price * mocha;

            std::cout << "Total price: $" << totalPrice;
            break;
        case 1:
            std::cout << "\nHow many Latte's do you want?\n";
            std::cin >> latte;
            price += 5.50;
            totalPrice = price * latte;

            std::cout << "Total price: $" << totalPrice;
            break;
        case 2:
            std::cout << "\nHow many Earl Grey's do you want?\n";
            std::cin >> earlGrey;
            price += 4;
            totalPrice = price * earlGrey;

            std::cout << "Total price: $" << totalPrice;
            break;
        case 3:
            std::cout << "\nHow many Chamomile tea's do you want?\n";
            std::cin >> chamomile;
            price += 4;
            totalPrice = price * chamomile;

            std::cout << "Total price: $" << totalPrice;
            break;
        case 4:
            std::cout << "\nHow many Black tea's do you want?\n";
            std::cin >> blackTea;
            price += 4;
            totalPrice = price * blackTea;

            std::cout << "Total price: $" << totalPrice;
            break;
        case 5:
            std::cout << "\nHow many Green tea's do you want?\n";
            std::cin >> greenTea;
            price += 4;
            totalPrice = price * greenTea;

            std::cout << "Total price: $" << totalPrice;
            break;
        case 6:
            std::cout << "\nHow many Apple Juices do you want?\n";
            std::cin >> appleJuice;
            price += 4.50;
            totalPrice = price * appleJuice;

            std::cout << "Total price: $" << totalPrice;
            break;
        case 7:
            std::cout << "\nHow many Lemon Pie's do you want?\n";
            std::cin >> lemonPie;
            price += 4;
            totalPrice = price * lemonPie;

            std::cout << "Total price: $" << totalPrice;
            break;
        case 8:
            std::cout << "\nHow many Chocolate Cupcakes do you want?\n";
            std::cin >> chocolateCupcake;
            price += 2.50;
            totalPrice = price * chocolateCupcake;

            std::cout << "Total price: $" << totalPrice;
            break;
        case 9:
            std::cout << "\nHow many English Scones do you want?\n";
            std::cin >> englishScone;
            price += 2.25;
            totalPrice = price * englishScone;

            std::cout << "Total price: $" << totalPrice;
            break;
        case 10:
            std::cout << "Alright, so you want: " << mocha << " mocha's, " << latte << " latte's, " << earlGrey << " earl grey tea's, " << chamomile << " chamomile tea's, " <<
                blackTea << " black tea's, " << greenTea << " green tea's, " << appleJuice << " apple juices, " << lemonPie << " lemon pie's, " <<
                chocolateCupcake << " chocolate cupcakes, and" << englishScone << " english scones. Your total is " << totalPrice;

            std::cout << "Please input the amount you will pay (must be a whole number";
            std::cin >> pricePayed;

            if (pricePayed < totalPrice)
            {
                std::cout << "Sorry that doesn't seem to be enough, try again:";
                std::cin >> pricePayed;
            }

            remainder = pricePayed - totalPrice;

            std::cout << "\nYour change is $" << remainder;

            hundred = remainder / 100;

            

            fifty = remainder / 50;

            twenty = remainder / 20;

            ten = remainder / 10;

            five = remainder / 5;

            one = remainder / 1;

            quarter = remainder / 0.25;

            dime = remainder / 0.10;

            nickel = remainder / 0.05;

            penny = remainder / 0.01;

            std::cout << "\nHundreds: " << hundred << " Fifty: " << fifty << " Twenty: " << twenty << " Ten: " << ten << " Five: " << five << " One: " << one << " Quarters: " << quarter << " Dimes: " << dime << " Nickels: " << nickel << " Pennies: " << penny;
            

            break;
        }
    } while (choice != 0);



}