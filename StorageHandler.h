/**
 * Many of the functions are already present in C/C++, but are rewritten
 * as this project needs them frequently.
 * So instead making different functions, this class is developed for simplistic usage.
 *
 * .keep smiling.
 *
 */
//
// Created by pawan on 27/9/17.
//

#ifndef DATASTORAGEUTILITY_STORAGEHANDLER_H
#define DATASTORAGEUTILITY_STORAGEHANDLER_H

#include <iostream>
#include <string>

#if defined(WIN32) || defined(_WIN32)
#define PATH_SEPARATOR "\\"
#else
#define PATH_SEPARATOR "/"
#endif

using namespace std;

class StorageHandler {

    string BaseDir;
    string dataDir = string("data");
    string indexDir = string("indexes");

public:
    StorageHandler();

    static int makedir(string &, string &);

    static int makedir(string &);

    static string cwd();

    static string getPath(string &, string &);

    string getDataDirPath();

    string getIndexDirPath();

    string getBaseDirPath();

    FILE *putfile(string &, string &);

    StorageHandler(string &);
};


#endif //DATASTORAGEUTILITY_STORAGEHANDLER_H
