#include <iostream>

void transferMoney(){
    std::cout << "(1) Airteltigo \n";
    std::cout << "(2) Vodafone \n";
    std::cout << "(3) MTN \n";
    std::cout << "(4) E-zwich \n";
    std::cout << "(5) Other Banks \n";
    std::cout << "(6) G-Money \n";
    std::cout << "(7) Zeepay \n";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "# Back \n";
    std::cout << "00 Main Menu \n";

    std::cin >> option_;
    if(option_ == 1){
        //Airteltigo
        std::cout << "Enter Recipient's Number" << std::endl;
        std::cin >> phonenum;
        std::cout << "Confirm Recipient's Number" << std::endl;
        std::cin >> phonenumconfirm;
        if(phonenum==phonenumconfirm){
            std::cout << "Enter the amount" << std::endl;
            std::cin >> amount;
            if (amount > 99.9){
                elevy=amount*0.03;
                std::cout << "The transfer + e-levy tax on your money is " << (amount + elevy) << std::endl;
                std::cout << "Enter your AirtelTigo PIN to continue: \n";
                std::cin >> pin;
                for (auto pins : codes){
                    if ( pins == pin){
                        std::cout << "Enter 1 to confirm or 2 to cancel \n";
                        std::cin >> conorrej;
                        if (conorrej == 1)
                        {
                            std::cout << "The transfer has successfully been made! Continue to use AirtelTigo Money for amazing offers \n";
                        }
                        else if (conorrej == 2)
                        {
                            std::cout << "The transfer has been cancelled. Continue to use AirtelTigo" << std::endl;
                        }
                        else
                        {
                            std::cout << "Invalid Input!" << std::endl;
                        }
                    }
                    else{
                        std::cout << "You've entered an incorrect PIN!" << std::endl;
                    }
                }

            }
            else
            {
                std::cout << "The transfer + e-levy 0.00 is " << amount << std::endl;
                std::cout << "Enter your AirtelTigo Money PIN: \n";
                std::cin >> pin;
                for(auto pins : codes){
                    if (pins == pin){
                        std::cout << "Enter 1 to confirm or 2 to cancel the process. \n";
                        std::cin >> conorrej;
                        if (conorrej==1){
                            std::cout << "The transaction has been completed successfully! \n continue using AirtelTigo Money for amazing offers";
                        }
                        else if (conorrej == 2){
                            std::cout << "The transaction has been cancelled! \n";
                            std::cout << "Continue to use AirtelTigo Money for amazing offers." << std::endl;
                        }
                        else{
                            std::cout << "Invalid input! \n";
                        }
                    }
                    else{
                        std::cout << "You've entered an incorrect PIN! \n";
                    }
                }
            }

        }
        else
        {
            std::cout << "The numbers do not match. Please try again later! \n";
        }
    }
            else if (option_ == 2)
            {
                //Vodafone
                std::cout << "Enter the recipient number \n";
                std::cin >> phonenum;
                std::cout << "Confirm Recipient's number \n";
                std::cin >> phonenumconfirm;
                if(phonenum==phonenumconfirm){
                    std::cout << "Enter the amount" << std::endl;
                    std::cin >> amount;
                    if (amount > 99.9)
                    {
                        elevy=amount*0.03;
                        std::cout << "The transfer + e-levy tax on your money is " << (amount + elevy) << std::endl;
                        std::cout << "Enter your AirtelTigo Money PIN to continue: \n";
                        std::cin >> pin;
                        for (auto pins : codes){
                            if (pins == pin){
                                std::cout << "Enter 1 to confirm or 2 to cancel \n";
                                std::cin >> conorrej;
                                if (conorrej == 1)
                                {
                                    std::cout << "The transaction has successfully been made! Continue to use AirtelTigo Money for amazing offers \n";
                                }
                                else if (conorrej == 2)
                                {
                                    std::cout << "The transaction has been cancelled. Continue to use AirtelTigo" << std::endl;
                                }
                                else
                                {
                                    std::cout << "Invalid Input!" << std::endl;
                                }
                            }
                            else{
                                std::cout << "You entered an incorrect PIN! \n";
                            }
                        }
                    }
                    else
                    {
                        std::cout << "The transfer + e-levy 0.00 is " << amount << std::endl;
                        std::cout << "Enter your AirtelTigo Money PIN: \n";
                        std::cin >> pin;
                        for (auto pins : codes){
                            if (pins == pin){
                                std::cout << "Enter 1 to confirm or 2 to cancel: \n";
                                std::cin >> conorrej;
                                if (conorrej==1){
                                    std::cout << "The transaction has been completed successfully. \n Continue to use AirtelTigo for amazing offers\n ";
                                }
                                else if (conorrej==2){
                                    std::cout << "The transaction has been cancelled. Continue to use AirtelTigo Money for amazing offers. \n";
                                }
                            }
                            else{
                                std::cout << "You've entered an incorrect PIN! \n";
                            }
                        }
                    }
                }
                else
                {
                    std::cerr << "The numbers do not match. Please try again later! \n";
                }
            }
            else if (option_ == 3){
                //MTN
                std::cout << "Enter Recipient's number \n";
                std::cin >> phonenum;
                std::cout << "Confirm Recipient's number \n";
                std::cin >> phonenumconfirm;
                if(phonenum==phonenumconfirm){
                    std::cout << "Enter the amount" << std::endl;
                    std::cin >> amount;
                    if (amount > 99.9)
                    {
                        elevy=amount*0.03;
                        std::cout << "The transfer + e-levy tax on your money is " << (amount + elevy) << std::endl;
                        std::cout << "Enter your AirtelTigo Money PIN: \n";
                        std::cin >> pin;
                        for (auto pins : codes){
                            if (pins == pin){
                                std::cout << "Enter 1 to confirm or 2 to cancel \n";
                                std::cin >> conorrej;
                                if (conorrej == 1)
                                {
                                    std::cout << "The transaction has successfully been made! Continue to use AirtelTigo Money for amazing offers \n";
                                }
                                else if (conorrej == 2)
                                {
                                    std::cout << "The transaction has been cancelled. Continue to use AirtelTigo" << std::endl;
                                }
                                else
                                {
                                    std::cout << "Invalid Input!" << std::endl;
                                }
                            }
                            else{
                                std::cout << "You entered an incorrect PIN \n";
                            }
                        }
                    }
                    else
                    {
                        std::cout << "The transfer + e-levy 0.00 is " << amount << std::endl;
                        std::cout << "Enter your AirtelTigo Money PIN: \n";
                        std::cin >> pin;
                        for (auto pins : codes){
                            if (pins == pin){
                                std::cout << "Enter 1 to confirm and 2 to cancel: \n";
                                std::cin >> conorrej;
                                if (conorrej==1){
                                    std::cout << "The transaction has succesfully been made! Continue to use AirtelTigo for amazing offers! \n";
                                }
                                else if(conorrej==2){
                                    std::cout << "The transaction has been cancelled. Continue to use AirtelTigo! \n";
                                }
                                else{
                                    std::cout << "Invalid Input! \n";
                                }
                            }
                            else{
                                std::cout << "You've entered an incorrect PIN! \n";
                            }
                        }
                    }

                }
                else
                {
                    std::cout << "The numbers do not match. Please try again later! \n";
                }
            }
            else if (option_ == 4){
                //E-zwich
                std::string ecard;
                std::cout << "Enter E-Zwich Card Number \n";
                std::cin >> ecard;
                std::cout << "Dear Customer, the transaction failed at the recipient's end. Your wallet has not been debited. Thank you \n";
                std::cout << "Error Code: GSPI_909" << std::endl;
            }
            else if (option_ == 5){
                //Other Banks
                int response{};
                std::cout << "(1) From AirtelTigo Money Wallet \n";
                std::cout << "(2) To AirtelTigo Money Wallet \n";
                std::cin >> response;
                if (response==1){
                    int select{};
                    std::cout << "Please Select the First Letter of the Bank \n";
                    std::cout << "(1) A \n";
                    std::cout << "(2) B to E \n";
                    std::cout << "(3) F \n";
                    std::cout << "(4) G to P \n";
                    std::cout << "(5) Q to S\n";
                    std::cout << "(6) T to Z\n";
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cin >> select;
                    if (select == 1){
                        int sele{},accnum{};
                        std::cout << "(1) ABSA \n";
                        std::cout << "(2) ADOM SAVINGS AND LOANS \n";
                        std::cout << "(3) ADB \n";
                        std::cout << "(4) ACCESS BANK \n";
                        std::cout << "(5) ARP APEX BANK\n";
                        std::cin >> sele;
                        if(sele == 1){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if(sele == 2){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (sele == 3){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (sele == 4){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (sele == 5){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else{std::cout <<"Invalid Input! \n";}
                    }
                    else if (select == 2){
                        int opt{},accnum{};
                        std::cout << "(1) BANK OF AFRICA \n";
                        std::cout << "(2) BANK OF BARODA \n";
                        std::cout << "(3) BSIC \n";
                        std::cout << "(4) CAL \n";
                        std::cout << "(5) ECOBANK \n";
                        std::cout << "(6) ENERGY \n";
                        std::cin >> opt;
                        if(opt == 1){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if(opt == 2){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (opt == 3){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (opt == 4){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (opt == 5){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (opt == 6){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited. \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else{std::cout <<"Invalid Input! \n";}
                    }
                    else if (select == 3){
                    int sele{},accnum{};
                    std::cout << "(1) FIDELITY \n";
                    std::cout << "(2) FIRST ALLIED \n";
                    std::cout << "(3) FBN \n";
                    std::cout << "(4) FIRST NATIONAL BANK \n";
                    std::cin >> sele;
                        if(sele == 1){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if(sele == 2){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (sele == 3){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (sele == 4){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else{
                            std::cout <<"Invalid Input! \n";
                        }
                    }
                    else if (select == 4){
                        int sele{},accnum{};
                        std::cout << "(1) GCB \n";
                        std::cout << "(2) GT BANK \n";
                        std::cout << "(3) GHL \n";
                        std::cout << "(4) NIB \n";
                        std::cout << "(5) PREMIUM \n";
                        std::cout << "(6) PRUDENTIAL \n";
                        std::cin >> sele;
                        if(sele == 1){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if(sele == 2){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (sele == 3){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (sele == 4){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (sele == 5){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (sele == 6){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited. \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else{std::cout <<"Invalid Input! \n";}
                    }
                    else if (select == 5){
                        int sele{},accnum{};
                        std::cout << "(1) REPUBLIC BANK \n";
                        std::cout << "(2) SOVEREIGN \n";
                        std::cout << "(3) STANBIC \n";
                        std::cout << "(4) STANDARD CHARTERED \n";
                        std::cout << "(5) SERVICE INTEGRITY SAVINGS AND LOANS \n";
                        std::cin >> sele;
                        if(sele == 1){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if(sele == 2){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (sele == 3){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (sele == 4){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (sele == 5){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else{std::cout <<"Invalid Input! \n";}
                    }
                    else if (select == 6){
                        int sele{},accnum{};
                        std::cout << "(1) THE ROYAL BANK \n";
                        std::cout << "(2) UNIBANK \n";
                        std::cout << "(3) UBA \n";
                        std::cout << "(4) UNIVERSAL MERCHANT \n";
                        std::cout << "(5) ZENITH \n";
                        std::cin >> sele;
                        if(sele == 1){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if(sele == 2){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (sele == 3){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (sele == 4){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else if (sele == 5){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited \n";
                            std::cout << "Thank you. Error Code: GPSI_100 \n";
                        }
                        else{std::cout <<"Invalid Input! \n";}
                    }
                    else{
                        std::cout << "Invalid Input! \n";
                    }
                }
                else if (response == 2){
                    int select{};
                    std::cout << "Please Select the First Letter of the Bank \n";
                    std::cout << "(1) A \n";
                    std::cout << "(2) B to E \n";
                    std::cout << "(3) Q to S \n";
                    std::cout << "(4) T to Z \n";
                    std::cin >> select;
                    if (select == 1)
                    {
                        int sele{},accnum{};
                        std::cout << "(1) ACCESS BANK \n";
                        std::cout << "(2) ARB APEX BANK \n";
                        std::cin >> sele;
                        if (sele == 1){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at recipient's end. Your wallet has not been debited. \n";
                            std::cout << "Thank you. Error Code: GHHS_432 \n";
                        }
                        else if (sele == 2)
                        {
                            std::cout << "Enter accout number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at recipient's end. Your wallet has not been debited. \n";
                            std::cout << "Thank you. Error code: GHHS_432 \n";
                        }
                        else{
                            std::cout << "Invalid Input! \n";
                        }
                    }
                    else if(select == 2){
                        int sele{},accnum{};
                        std::cout << "(1) BANK OF AFRICA \n";
                        std::cout << "(2) BSIC \n";
                        std::cin >> sele;
                            if (sele == 1){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at recipient's end. Your wallet has not been debited. \n";
                            std::cout << "Thank you. Error Code: GHHS_432 \n";
                        }
                        else if (sele == 2)
                        {
                            std::cout << "Enter accout number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at recipient's end. Your wallet has not been debited. \n";
                            std::cout << "Thank you. Error code: GHHS_432 \n";
                        }
                        else{
                            std::cout << "Invalid Input! \n";
                        }
                    }
                    else if (select == 3){
                        int sele{},accnum{};
                        std::cout << "(1) STANDARD CHARTERED \n";
                        std::cin >> sele;
                        if (sele == 1){
                            std::cout << "Enter account number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited. \n";
                            std::cout << "Thank you. Error code: GIPS_111 \n";
                        }
                        else{
                            std::cout << "Invalid input! \n";
                        }
                    }
                    else if (select == 4){
                        int sele{},accnum{};
                        std::cout << "(1) ZENITH \n";
                        std::cin >> sele;
                        if (sele == 1){
                            std::cout << "Enter recipient's number \n";
                            std::cin >> accnum;
                            std::cout << "Dear customer, the transaction failed at the recipient's end. Your wallet has not been debited. \n";
                            std::cout << "Thank you. Error code: GPSS_111 \n";
                        }
                        else{
                            std::cout << "Invalid input! \n";
                        }
                    }

                }
                else{
                    std::cout << "Invalid Input!" << std::endl;
                }
            }
            else if (option_ == 6){
                //G_Money
                std::string repnum{};
                std::cout << "Enter recipient's number \n";
                std::cin >> repnum;
                std::cout << "Dear customer, the transaction failed due to an invalid card number. Kindly check and try again. \n";
                std::cout << "Thank you. Error code: GPSI_111\n";

            }
            else if(option_ == 7){
                //Zeepay
                std::string repnum{};
                std::cout << "Enter recipient's number \n";
                std::cin >> repnum;
                std::cout << "Dear customer, the transaction failed due to an invalid card number. Kindly check and try again. \n";
                std::cout << "Thank you. Error Code: GPSI_112 \n";
            }
}

void momopay(){
    char mpresp{};
    std::cout << "<<<<<<<<<<<<<<<   MoMoPay & Pay Bill   >>>>>>>>>>>>>>>>>>>" << std::endl << std::endl;
    std::cout << "1) MoMoPay\n2) Pay Bill\n3) GhQR\n4) Fuels\n5) Ghana.GOV\n0) Back" << std::endl;
    std::cin >> mpresp;
    if(mpresp == '1'){
        std::cout << "Enter Merchant id/Payment Reference" << std::endl;
        // This takes a string
    }else if(mpresp == '2'){

    }else if(mpresp == '3'){

    }else if(mpresp == '4'){

    }else if(mpresp == '5'){

    }else if(mpresp == '0'){
        main();
    }
}

void airtimeBundle(){

}

void allowCash(){

}

void financialServices(){

}

void myWallet(){
    
}
