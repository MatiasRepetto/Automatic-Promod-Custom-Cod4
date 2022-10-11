#ifndef UTILS
#define UTILS

#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

struct varTxt_t{
    int cSniper = 1, cAssoult = 64, cSpecops = 2, cDemolitions = 1;
    int tdmScoreLimit = 0, tdmTimeLimit = 10;
    int dmScoreLimit = 0, dmTimeLimit = 10, dmSpawnDelay = 0;
};

typedef varTxt_t varTxt_v;

class utils{
    public:
        static void writefile(varTxt_v);
};

#endif