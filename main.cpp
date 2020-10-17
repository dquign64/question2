#include<iostream>
#include "question2.h"

int main()
{
    int sales;

    std::cout << "Enter sales number: ";
    std::cin >> sales;

    while(sales > 0){
    get_sales_commission(sales);

    return 0;
    }
}