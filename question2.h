double get_sales_commission(double sales){
    double sale;
    double p;
    double saleC;

    if (sale >= 0 && sale <= 499){
        p = .05;
    }
    else if(sale >= 500 && sale <=999){
        p = .06;
    }
    else if(sale >= 1000 && sale <= 1499){
        p = .07;
    }
    else if(sale >= 1500){
        p = .08;
    }
    else if(sale < 0){
        p = 0;
    }
    else{
        return 0;
    }
    saleC = sale * p;

    std::cout << "Sales of " << sale << "yields a commission of " << saleC;
    std::cout << "Enter sales number: ";
    std::cin >> sale;
}