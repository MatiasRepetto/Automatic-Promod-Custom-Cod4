#ifndef UTILS
#define UTILS

#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

struct varTxt_t{
    int cSniper, cAssoult, cSpecops, cDemolitions;
};

typedef varTxt_t varTxt_v;

class utils{
    public:
        static void writefile(varTxt_v);
};

#endif