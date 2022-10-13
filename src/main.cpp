#include "../include/utils.h"
#include <iostream>
#include <stdio.h>

varTxt_t* aux = new varTxt_t;

int main(){
    system("cls");
    int mMint;
    std::cout << "(1) Edit Class Limits" << std::endl;
    std::cout << "(2) Edit Team Deathmatch Configuration" << std::endl;
    std::cout << "(3) Edit Deathmatch Configuration" << std::endl;
    std::cout << "(4) Edit Grenades Otions" << std::endl;
    std::cout << "(5) Edit Other random configs" << std::endl;
    std::cout << "(141) Craft my Custom Promod" << std::endl;
    std::cout << "(0) Exit" << std::endl;
    std::cin >> mMint;
    switch(mMint){
        case 1:
            system("cls");
            int case1Aux;
            std::cout << "(1) Edit Limit of Assoult class" << std::endl;
            std::cout << "(2) Edit Limit of Specops class" << std::endl;
            std::cout << "(3) Edit Limit of Demolition class" << std::endl;
            std::cout << "(4) Edit Limit of Sniper class" << std::endl;
            std::cout << "(0) Back" << std::endl;
            std::cin >> case1Aux;
            switch(case1Aux){
                case 1:
                    system("cls");
                    std::cout << "Enter Limit of Assoult classes (1-64)" << std::endl;
                    std::cin >> aux->cAssoult;
                    aux->cAssoult = aux->cAssoult % 65;
                    return main();
                case 2:
                    system("cls");
                    std::cout << "Enter Limit of Specops classes (1-64)" << std::endl;
                    std::cin >> aux->cSpecops;
                    aux->cSpecops = aux->cSpecops % 65;
                    return main();
                case 3:
                    system("cls");
                    std::cout << "Enter Limit of Demolition classes (1-64)" << std::endl;
                    std::cin >> aux->cDemolitions;
                    aux->cDemolitions = aux->cDemolitions % 65;
                    return main();
                case 4:
                    system("cls");
                    std::cout << "Enter Limit of Sniper classes (1-64)" << std::endl;
                    std::cin >> aux->cSniper;
                    aux->cSniper = aux->cSniper % 65;
                    return main();
                case 0:
                    return main();
                default:
                    return main();
            }
        case 2:
            system("cls");
            int case2Aux;
            std::cout << "(1) Edit Score Limit" << std::endl;
            std::cout << "(2) Edit Time Limit" << std::endl;
            std::cout << "(0) Back" << std::endl;
            std::cin >> case2Aux;
            switch(case2Aux){
                case 1:
                    system("cls");
                    std::cout << "Enter Score Limit" << std::endl;
                    std::cin >> aux->tdmScoreLimit;
                    return main();
                case 2:
                    system("cls");
                    std::cout << "Enter Time Limit (Minutes)" << std::endl;
                    std::cin >> aux->tdmTimeLimit;
                    return main();
                case 0:
                    return main();
                default:
                    return main();
            }
        case 3:
            system("cls");
            int case3Aux;
            std::cout << "(1) Edit Score Limit" << std::endl;
            std::cout << "(2) Edit Time Limit" << std::endl;
            std::cout << "(3) Edit Spawn Delay" << std::endl;
            std::cout << "(0) Back" << std::endl;
            std::cin >> case3Aux;
            switch(case3Aux){
                case 1:
                    system("cls");
                    std::cout << "Enter Score Limit" << std::endl;
                    std::cin >> aux->dmScoreLimit;
                    return main();
                case 2:
                    system("cls");
                    std::cout << "Enter Time Limit (Minutes)" << std::endl;
                    std::cin >> aux->dmTimeLimit;
                    return main();
                case 3:
                    system("cls");
                    std::cout << "Enter Spawn Delay (Seconds)" << std::endl;
                    std::cin >> aux->dmSpawnDelay;
                    return main();
                case 0:
                    return main();
                default:
                    return main();
            }
        case 4:
            system("cls");
            int case4Aux;
            std::cout << "(1) Edit Flash Grenade" << std::endl;
            std::cout << "(2) Edit Frag Grenade" << std::endl;
            std::cout << "(3) Edit Smoke Grenade" << std::endl;
            std::cout << "(0) Back" << std::endl;
            std::cin >> case4Aux;
            switch(case4Aux){
                case 1:
                    system("cls");
                    int flashAux;
                    std::cout << "(1) Allowed" << std::endl;
                    std::cout << "(0) Not allowed" << std::endl;
                    std::cin >> flashAux;
                    switch(flashAux){
                        case 1:
                            aux->grFlash = 1;
                        case 0:
                            aux->grFlash = 0;
                        default:
                            return main();
                    }
                    return main();
                case 2:
                    system("cls");
                    int fragAux;
                    std::cout << "(1) Allowed" << std::endl;
                    std::cout << "(0) Not allowed" << std::endl;
                    std::cin >> fragAux;
                    switch(fragAux){
                        case 1:
                            aux->grFrag = 1;
                        case 0:
                            aux->grFrag = 0;
                        default:
                            return main();
                    }
                    return main();
                case 3:
                    system("cls");
                    int smokeAux;
                    std::cout << "(1) Allowed" << std::endl;
                    std::cout << "(0) Not allowed" << std::endl;
                    std::cin >> smokeAux;
                    switch(smokeAux){
                        case 1:
                            aux->grSmoke = 1;
                        case 0:
                            aux->grSmoke = 0;
                        default:
                            return main();
                    }
                    return main();
                case 0:
                    return main();
                default:
                    return main();
            }
        case 5:
            system("cls");
            int case5Aux;
            std::cout << "(1) Edit height to inflict min fall damage" << std::endl;
            std::cout << "(2) Edit height to inflict max fall damage" << std::endl;
            std::cout << "(0) Back" << std::endl;
            std::cin >> case5Aux;
            switch(case5Aux){
                case 1:
                    system("cls");
                    std::cout << "Enter min height" << std::endl;
                    std::cin >> aux->fdMin;
                    return main();
                case 2:
                    system("cls");
                    std::cout << "Enter max height" << std::endl;
                    std::cin >> aux->fdMax;
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
            system("cls");
            break;
        default:
            return main();
    }
    return 0;
}