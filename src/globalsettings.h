#ifndef GLOBALSETTINGS_H
#define GLOBALSETTINGS_H

#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

class GlobalSettings{
public:
    GlobalSettings();

public:
    inline static void setMarkedOnlyForVCF(bool flag){
        markedOnlyForVCF = flag;
    }
    inline static void setLegacyMode(bool flag){
        legacyMode = flag;
    }
    inline static void setOutputOriginalReads(bool flag){
        outputOriginalReads = flag;
    }
    inline static void setStandaloneHtml(bool flag){
        standaloneHtml = flag;
    }

public:
    static bool markedOnlyForVCF;
    static bool legacyMode;
    static bool outputOriginalReads;
    static bool standaloneHtml;
};


#endif