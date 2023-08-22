#include <iostream>
enum month
{
    January = 1,
    Febrary,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December

};

int main()
{
    month m;
    int userchoice = 0;
    std::cout << "Please, enter month number [1-12]: \t\n";
    std::cin >> userchoice;
    std::cout << "Your choice is:\t" << static_cast<month>(userchoice) << std::endl;

    m = static_cast<month>(userchoice);
    if (userchoice == 0)
    {
        std::cout << "Zero is a bad choice" << std::endl;
        return (-1);
    }
    else if ((userchoice < 0) || (userchoice > 12))
    {
        std::cout << "\n\t Are you kidding me?" << std::endl;
        return (-1);
    }
    else

        switch (m)
        {
        case January: std::cout << "\n January ";
            break;
        case Febrary: std::cout << "\n Febrary ";
            break;
        case March: std::cout << "\n March ";
            break;
        case April: std::cout << "\n April ";
            break;
        case May: std::cout << "\n May ";
            break;
        case June: std::cout << "\n June ";
            break;
        case July: std::cout << "\n July ";
            break;

        case August: std::cout << "\n August ";
            break;
        case September: std::cout << "\n September ";
            break;
        case October: std::cout << "\n October ";
            break;
        case November: std::cout << "\n November ";
            break;
        case December: std::cout << "\n December ";
            break;

        }
    return (0);
}