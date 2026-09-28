#include "bookStore.h"

namespace chaminji2693305
{
    bool compareBook(const book& b1, const book& b2)
    {
        return  b1.getID() == b2.getID() && b1.getPrice() == b2.getPrice();
    }
}

int main()
{
    using namespace chaminji2693305;
    bookStore bs1; bs1.print();
    bookStore bs2{book{11, 11111}, true}; bs2.print();

    if(compareBook(bs1.getBook(), bs2.getBook()))
        std::cout << "same\n";
    else
        std::cout << "not same\n";
    return 0;
}