#include "sales_item.h"

int main()
{
    Sales_item currItem, valItem;
    if (std::cin >> currItem) {
        int sum = 1;
        while (std::cin >> valItem) {
            if (currItem.same_isbn(valItem)) {
                sum++;
            } else {
                std::cout << currItem.isbn << " occurs " << sum << " times" << std::endl;
                currItem = valItem;
                sum = 1;
            }
        } 
        std::cout << currItem.isbn << " occurs " << sum << " times" << std::endl;
    }
    return 0;
}
