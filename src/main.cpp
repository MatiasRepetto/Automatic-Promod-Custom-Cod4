#include "../include/utils.h"
#include <iostream>
#include <stdio.h>

int main(){
    varTxt_v aux;
    int mMint;
    std::cout << "(1) Edit Class Limits" << std::endl;
    std::cout << "(2) Edit Team Deathmatch Configuration" << std::endl;
    std::cout << "(3) Edit Deathmatch Configuration" << std::endl;
    std::cout << "(141) Craft my Custom Promod" << std::endl;
    std::cout << "(0) Exit" << std::endl;
    std::cin >> mMint;
    switch(mMint){
        case 1:
            int case1Aux;
            std::cout << "(1) Edit Limit of Assoult class" << std::endl;
            std::cout << "(2) Edit Limit of Specops class" << std::endl;
            std::cout << "(3) Edit Limit of Demolition class" << std::endl;
            std::cout << "(4) Edit Limit of Sniper class" << std::endl;
            std::cout << "(0) Back" << std::endl;
            std::cin >> case1Aux;
            switch(case1Aux){
                case 1:
                    std::cout << "Enter Limit of Assoult classes (1-64)" << std::endl;
                    std::cin >> aux.cAssoult;
                    aux.cAssoult = aux.cAssoult % 65;
                    return main();
                case 2:
                    std::cout << "Enter Limit of Specops classes (1-64)" << std::endl;
                    std::cin >> aux.cSpecops;
                    aux.cSpecops = aux.cSpecops % 65;
                    return main();
                case 3:
                    std::cout << "Enter Limit of Demolition classes (1-64)" << std::endl;
                    std::cin >> aux.cDemolitions;
                    aux.cDemolitions = aux.cDemolitions % 65;
                    return main();
                case 4:
                    std::cout << "Enter Limit of Sniper classes (1-64)" << std::endl;
                    std::cin >> aux.cSniper;
                    aux.cSniper = aux.cSniper % 65;
                    return main();
                case 0:
                    return main();
                default:
                    return main();
            }
        case 2:
            int case2Aux;
            std::cout << "(1) Edit Score Limit" << std::endl;
            std::cout << "(2) Edit Time Limit" << std::endl;
            std::cout << "(0) Back" << std::endl;
            std::cin >> case2Aux;
            switch(case1Aux){
                case 1:
                    std::cout << "Enter Score Limit" << std::endl;
                    std::cin >> aux.tdmScoreLimit;
                    return main();
                case 2:
                    std::cout << "Enter Time Limit (Minutes)" << std::endl;
                    std::cin >> aux.tdmTimeLimit;
                    return main();
                case 0:
                    return main();
                default:
                    return main();
            }
        case 3:
            return main();
        case 0:
            return 0;
        case 141:
            utils::writefile(aux);
            system("cd .\\resources\\promod4-master\\promod_ruleset && del custom_public.gsc && ren *.txt *.gsc");
            system(".\\resources\\promod4-master\\compile.bat");
            break;
        default:
            return main();
    }
    return 0;
}