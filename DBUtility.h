//
// Created by pawan on 25/9/17.
//

#ifndef DATASTORAGEUTILITY_DBUTILITY_H
#define DATASTORAGEUTILITY_DBUTILITY_H

#include <sys/stat.h>
#include <iostream>
#include <vector>
#include "StorageHandler.h"
using namespace std;

class DBUtility {

    string db_name;
    StorageHandler storageHandler;
public:
    DBUtility(string name) {
        db_name = name;
        storageHandler = StorageHandler(name);
    }

    void put(string jsonstring) ;

    string getuniquefilename();

    void saveData(string basic_string, string basicString);

    vector<string> getindexes(string basic_string);

    void saveIndex(string index, string filename);
};


#endif //DATASTORAGEUTILITY_DBUTILITY_H
