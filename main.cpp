#include <iostream>
#include "myFunctions.cpp"
#include "myFunctions.h"

int main(){
    int response{};
    std::cout << "(1) Transfer Money\n(2) MomoPay & Pay Bill\n(3) Airtime & Bundles\n(4) Allow Cash Out\n(5) Financial Services\n(6) My Wallet" << std::endl;
    std::cin >> response;
    std::cout << std::endl;

    /*
    if(response == 1){
        transferMoney();
    }else if(response == 2){
        momopay();
    }else if(response == 3){
        airtimeBundle();
    }else if(response == 4){
        allowCash();
    }else if(response == 5){
        financialServices();
    }else if(response == 6){
        myWallet();
    }else{
        std::cerr << "Invalid input! \n";
    }
    */
    return 0;
}