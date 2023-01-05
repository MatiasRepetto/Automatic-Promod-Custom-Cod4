#include "../include/utils.h"
#include <iostream>
#include <stdio.h>

varTxt_t* aux = new varTxt_t;

int main(){
    system("cls");
    utils::banner();
    int mMint;
    std::cout << "(1) Edit Class Limits" << std::endl;
    std::cout << "(2) Edit Team Deathmatch Configuration" << std::endl;
    std::cout << "(3) Edit Deathmatch Configuration" << std::endl;
    std::cout << "(4) Edit Grenades Otions" << std::endl;
    std::cout << "(5) Edit Other random configs" << std::endl;
    std::cout << "(6) Add CodJumper Features" << std::endl;
    std::cout << "(141) Craft my Custom Promod" << std::endl;
    std::cout << "(0) Exit" << std::endl;
    std::cin >> mMint;
    switch(mMint){
        case 1:
            system("cls");
            utils::banner();
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
                    utils::banner();
                    std::cout << "Enter Limit of Assoult classes (1-64)" << std::endl;
                    std::cin >> aux->cAssoult;
                    aux->cAssoult = aux->cAssoult % 65;
                    return main();
                case 2:
                    system("cls");
                    utils::banner();
                    std::cout << "Enter Limit of Specops classes (1-64)" << std::endl;
                    std::cin >> aux->cSpecops;
                    aux->cSpecops = aux->cSpecops % 65;
                    return main();
                case 3:
                    system("cls");
                    utils::banner();
                    std::cout << "Enter Limit of Demolition classes (1-64)" << std::endl;
                    std::cin >> aux->cDemolitions;
                    aux->cDemolitions = aux->cDemolitions % 65;
                    return main();
                case 4:
                    system("cls");
                    utils::banner();
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
            utils::banner();
            int case2Aux;
            std::cout << "(1) Edit Score Limit" << std::endl;
            std::cout << "(2) Edit Time Limit" << std::endl;
            std::cout << "(0) Back" << std::endl;
            std::cin >> case2Aux;
            switch(case2Aux){
                case 1:
                    system("cls");
                    utils::banner();
                    std::cout << "Enter Score Limit" << std::endl;
                    std::cin >> aux->tdmScoreLimit;
                    return main();
                case 2:
                    system("cls");
                    utils::banner();
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
            utils::banner();
            int case3Aux;
            std::cout << "(1) Edit Score Limit" << std::endl;
            std::cout << "(2) Edit Time Limit" << std::endl;
            std::cout << "(3) Edit Spawn Delay" << std::endl;
            std::cout << "(0) Back" << std::endl;
            std::cin >> case3Aux;
            switch(case3Aux){
                case 1:
                    system("cls");
                    utils::banner();
                    std::cout << "Enter Score Limit" << std::endl;
                    std::cin >> aux->dmScoreLimit;
                    return main();
                case 2:
                    system("cls");
                    utils::banner();
                    std::cout << "Enter Time Limit (Minutes)" << std::endl;
                    std::cin >> aux->dmTimeLimit;
                    return main();
                case 3:
                    system("cls");
                    utils::banner();
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
            utils::banner();
            int case4Aux;
            std::cout << "(1) Edit Flash Grenade" << std::endl;
            std::cout << "(2) Edit Frag Grenade" << std::endl;
            std::cout << "(3) Edit Smoke Grenade" << std::endl;
            std::cout << "(0) Back" << std::endl;
            std::cin >> case4Aux;
            switch(case4Aux){
                case 1:
                    system("cls");
                    utils::banner();
                    int flashAux;
                    std::cout << "(1) Allowed" << std::endl;
                    std::cout << "(0) Not allowed" << std::endl;
                    std::cin >> flashAux;
                    if(flashAux == 0 || flashAux == 1){
                        aux->grFlash = flashAux;
                    }
                    return main();
                case 2:
                    system("cls");
                    utils::banner();
                    int fragAux;
                    std::cout << "(1) Allowed" << std::endl;
                    std::cout << "(0) Not allowed" << std::endl;
                    std::cin >> fragAux;
                    if(fragAux == 0 || fragAux == 1){
                        aux->grFrag = fragAux;
                    }
                    return main();
                case 3:
                    system("cls");
                    utils::banner();
                    int smokeAux;
                    std::cout << "(1) Allowed" << std::endl;
                    std::cout << "(0) Not allowed" << std::endl;
                    std::cin >> smokeAux;
                    if(smokeAux == 0 || smokeAux == 1){
                        aux->grSmoke = smokeAux;
                    }
                    return main();
                case 0:
                    return main();
                default:
                    return main();
            }
        case 5:
            system("cls");
            utils::banner();
            int case5Aux;
            std::cout << "(1) Edit height to inflict min fall damage" << std::endl;
            std::cout << "(2) Edit height to inflict max fall damage" << std::endl;
            std::cout << "(3) Allow/Disable KillCam" << std::endl;
            std::cout << "(4) Edit Hub Web page" << std::endl;
            std::cout << "(0) Back" << std::endl;
            std::cin >> case5Aux;
            switch(case5Aux){
                case 1:
                    system("cls");
                    utils::banner();
                    std::cout << "Enter min height" << std::endl;
                    std::cin >> aux->fdMin;
                    return main();
                case 2:
                    system("cls");
                    utils::banner();
                    std::cout << "Enter max height" << std::endl;
                    std::cin >> aux->fdMax;
                    return main();
                case 3:
                    system("cls");
                    utils::banner();
                    int killCamAux;
                    std::cout << "(1) Allowed" << std::endl;
                    std::cout << "(0) Not allowed" << std::endl;
                    std::cin >> killCamAux;
                    if(killCamAux == 0 || killCamAux == 1){
                        aux->killCam = killCamAux;
                    }
                    return main();
                case 4:
                    system("cls");
                    utils::banner();
                    std::cout << "Enter your page domain (ex : www.promod.com)" << std::endl;
                    std::cin >> aux->domain;
                    return main();
                case 0:
                    return main();
                default:
                    return main();
            }
        case 6:
            system("cls");
            utils::banner();
            int case6Aux;
            std::cout << "(1) Instant recovery from fatigue" << std::endl;
            std::cout << "(0) Back" << std::endl;
            std::cin >> case6Aux;
            switch(case6Aux){
                case 1:
                    system("cls");
                    utils::banner();
                    int noTired;
                    std::cout << "(1) Allowed" << std::endl;
                    std::cout << "(0) Not allowed" << std::endl;
                    std::cin >> noTired;
                    if(noTired == 0 || noTired == 1){
                        aux->noTiredValue = noTired;
                    }
                    return main();
                case 0:
                    return main();
                default:
                    return main();
            }
        case 0:
            break;
        case 141:
            utils::writefile(aux);
            system("cd .\\resources\\promod4-master\\promod_ruleset && del custom_public.gsc && ren *.txt *.gsc");
            system(".\\resources\\promod4-master\\compile.bat");
            system("cls");
            system("exit");
            delete aux;
            aux = NULL;
            return 0;
        default:
            return main();
    }
    delete aux;
    return 0;
}