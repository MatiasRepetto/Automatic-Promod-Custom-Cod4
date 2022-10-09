#include "../include/utils.h"
#include <iostream>
#include <stdio.h>



int main(){
    varTxt_v aux;
    int mMint;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "(0) Exit" << std::endl;
    std::cin >> mMint;
    switch(mMint){
        case 1:
            return main();
        case 2:
            return main();
        case 3:
            return main();
        case 0:
            return 0;
        default:
            return main();
    }
    utils::writefile(aux);
    return 0;
}