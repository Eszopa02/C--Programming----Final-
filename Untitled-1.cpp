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

    double price = 0;

    double totalPrice;

    double pricePayed;

    double remainder;

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

            int k = 0;

            double updatedRemainder = 0;

            double updatedRemainder2 = 0;

            double updatedRemainder3 = 0;

            double updatedRemainder4 = 0;

            double updatedRemainder5 = 0;

            double updatedRemainder6 = 0;

            double updatedRemainder7 = 0;

            double updatedRemainder8 = 0;

            double updatedRemainder9 = 0;

            double updatedRemainder10 = 0;

            if (hundred > 0)
            {
                k = hundred * 100;

                updatedRemainder = remainder - k;
            }

            fifty = updatedRemainder / 50;

            if (fifty > 0)
            {
                k = fifty * 50;

                updatedRemainder2 = updatedRemainder - k;
            }

            //not sure why this is happening but after fifty code stops checking to see if any of this other change is needed. 

            twenty = updatedRemainder2 / 20;

            if (twenty > 0)
            {
                k = twenty * 20;

                updatedRemainder3 = updatedRemainder2 - k;
            }

            ten = updatedRemainder3 / 10;

            if (ten > 0)
            {
                k = ten * 10;

                updatedRemainder4 = updatedRemainder3 - k;
            }

            five = updatedRemainder4 / 5;

            if (five > 0)
            {
                k = five * 5;

                updatedRemainder5 = updatedRemainder4 - k;
            }

            one = updatedRemainder5 / 1;

            if (one > 0)
            {
                k = one * 1;

                updatedRemainder6 = updatedRemainder5 - k;
            }

            quarter = updatedRemainder6 / 0.25;

            if (quarter > 0)
            {
                k = quarter * 0.25;

                updatedRemainder7 = updatedRemainder6 - k;
            }

            dime = updatedRemainder7 / 0.10;

            if (dime > 0)
            {
                k = dime * 0.10;

                updatedRemainder8 = updatedRemainder7 - k;
            }

            nickel = updatedRemainder8 / 0.05;

            if (nickel > 0)
            {
                k = nickel * 0.05;

                updatedRemainder9 = updatedRemainder8 - k;
            }

            penny = updatedRemainder9 / 0.01;

            if (penny > 0)
            {
                k = penny * 0.01;

                updatedRemainder10 = updatedRemainder9 - k;
            }

            std::cout << "\nHundreds: " << hundred << " Fifty: " << fifty << " Twenty: " << twenty << " Ten: " << ten << " Five: " << five << " One: " << one << " Quarters: " << quarter << " Dimes: " << dime << " Nickels: " << nickel << " Pennies: " << penny;
            

            break;
        }
    } while (choice != 0);



}