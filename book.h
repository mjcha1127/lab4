#pragma once
#include <iostream>

namespace chaminji2693305
{
    class book
    {
        private: 
        int id;//id: 1~1000
        int price;//price: 0~50000won

        void testID()
        {
            if(id<1 || id>1000)
           {
                std::cout << "Invalid book id\n";
                std::exit(1);
           }

        }
        void testPrice()
        {  
            if(price <0||price >50000)
            {
                std::cout << "Invalid book id\n";
                std::exit(1);
            }
        }

        public:
        void input()
        {
            std::cout <<"Enter book id: ";
            std::cin>>id; testID();
            std::cout <<"Enter book price: ";
            std::cin >>price ; testPrice();
        }

        void setID(int d){id=d; testID();}
        void setPrice(int p){price=p; testPrice();}
        void print()
        {
            std::cout << id << ", " << price << "won\n";
        }
        int getID() {return id;}
    int getPrice() {return price;}
    };

}