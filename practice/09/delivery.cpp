#include <iostream>

namespace delivery
{
    int cost(int count, int rate);
    int cost(int count);
}

int main()
{
    std::cout << "--- стоимость доставки ---\n";
    std::cout << "1 - стандартный тариф | 2 - индивидуальный\nРежим: ";

    int mode{};
    std::cin >> mode;

    switch (mode)
    {
    case 1:
    {
        std::cout << "количество посылок: ";
        int count{};
        std::cin >> count;

        int result{ delivery::cost(count) };
        if (result == -1)
        {
            std::cout << "неверные данные\n";
        }
        else
        {
            std::cout << "стоимость: " << result << " руб.\n";
        }
        break;
    }
    case 2:
    {
        std::cout << "количество посылок: ";
        int count{};
        std::cin >> count;

        std::cout << "тариф: ";
        int rate{};
        std::cin >> rate;

        int result{ delivery::cost(count, rate) };
        if (result == -1)
        {
            std::cout << "неверные данные\n";
        }
        else
        {
            std::cout << "стоимость: " << result << " руб.\n";
        }
        break;
    }
    default:
        std::cout << "Неизвестный режим\n";
        break;
    }

    return 0;
}

int delivery::cost(int count, int rate)
{
    bool isCountValid{ count >= 1 && count <= 20 };
    bool isRateValid{ rate >= 1 && rate <= 500 };

    if (!isCountValid || !isRateValid)
    {
        return -1;
    }

    return count * rate;
}

int delivery::cost(int count)
{
    return cost(count, 50);
}
