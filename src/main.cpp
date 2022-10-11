#include "../include/utils.h"
#include <iostream>
#include <stdio.h>

int main(){
    varTxt_v aux;
    int mMint;
    std::cout << "(1) Edit Class Limits" << std::endl;
    std::cout << "(2) Edit Team Deathmatch Configuration" << std::endl;
    std::cout << "(3) Edit Deathmatch Configuration" << std::endl;
    std::cout << "(4) Edit Grenades Otions" << std::endl;
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
            switch(case2Aux){
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
            int case3Aux;
            std::cout << "(1) Edit Score Limit" << std::endl;
            std::cout << "(2) Edit Time Limit" << std::endl;
            std::cout << "(3) Edit Spawn Delay" << std::endl;
            std::cout << "(0) Back" << std::endl;
            std::cin >> case3Aux;
            switch(case3Aux){
                case 1:
                    std::cout << "Enter Score Limit" << std::endl;
                    std::cin >> aux.dmScoreLimit;
                    return main();
                case 2:
                    std::cout << "Enter Time Limit (Minutes)" << std::endl;
                    std::cin >> aux.dmTimeLimit;
                    return main();
                case 3:
                    std::cout << "Enter Spawn Delay (Seconds)" << std::endl;
                    std::cin >> aux.dmSpawnDelay;
                    return main();
                case 0:
                    return main();
                default:
                    return main();
            }
        case 4:
            int case4Aux;
            std::cout << "(1) Edit Flash Grenade" << std::endl;
            std::cout << "(2) Edit Frag Grenade" << std::endl;
            std::cout << "(3) Edit Smoake Grenade" << std::endl;
            std::cout << "(0) Back" << std::endl;
            std::cin >> case4Aux;
            switch(case4Aux){
                case 1:
                    int flashAux;
                    std::cout << "(1) Allowed" << std::endl;
                    std::cout << "(0) Not allowed" << std::endl;
                    std::cin >> flashAux;
                    switch(flashAux){
                        case 1:
                            aux.grFlash = 1;
                        case 0:
                            aux.grFlash = 0;
                        default:
                            return main();
                    }
                    return main();
                case 2:
                    int fragAux;
                    std::cout << "(1) Allowed" << std::endl;
                    std::cout << "(0) Not allowed" << std::endl;
                    std::cin >> fragAux;
                    switch(fragAux){
                        case 1:
                            aux.grFrag = 1;
                        case 0:
                            aux.grFrag = 0;
                        default:
                            return main();
                    }
                    return main();
                case 3:
                    int smokeAux;
                    std::cout << "(1) Allowed" << std::endl;
                    std::cout << "(0) Not allowed" << std::endl;
                    std::cin >> smokeAux;
                    switch(smokeAux){
                        case 1:
                            aux.grSmoke = 1;
                        case 0:
                            aux.grSmoke = 0;
                        default:
                            return main();
                    }
                    return main();
                case 0:
                    return main();
                default:
                    return main();
            }
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