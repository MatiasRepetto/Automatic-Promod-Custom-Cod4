#ifndef UTILS
#define UTILS

#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

class varTxt_t{
    public:
        int cSniper = 1, cAssoult = 64, cSpecops = 2, cDemolitions = 1;
        int tdmScoreLimit = 0, tdmTimeLimit = 10;
        int dmScoreLimit = 0, dmTimeLimit = 10, dmSpawnDelay = 0;
        int grFlash = 1, grFrag = 1, grSmoke = 1;
        int fdMax = 350, fdMin = 140;
        int killCam = 0;
        std::string domain = "www.promod.com";
};

class utils{
    public:
        static void writefile(varTxt_t*);
        static void banner();
};

#endif