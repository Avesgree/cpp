#include <iostream>

namespace report
{
    void printValue(int count)
    {
        std::cout << "Count: " << count << '\n';
    }

    void printValue(double reading)
    {
        std::cout << "Reading: " << reading << '\n';
    }

    void printValue(bool running)
    {
        std::cout << "Running: " << std::boolalpha << running << '\n';
    }
}

namespace rep = report;

int main()
{
    int count{};
    double reading{};
    int state{};

    std::cout << "количество: ";
    std::cin >> count;

    std::cout << "показание: ";
    std::cin >> reading;

    std::cout << "состояние (0/1): ";
    std::cin >> state;

    bool isRunning{ state != 0 };

    rep::printValue(count);
    rep::printValue(reading);
    rep::printValue(isRunning);

    rep::printValue(1);
    rep::printValue(1.0);
    rep::printValue(true);

    return 0;
}