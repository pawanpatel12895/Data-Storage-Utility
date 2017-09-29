//
// Created by pawan on 25/9/17.
//

#include <vector>
#include "DBUtility.h"

void DBUtility::put(string jsonstring) {
    string uniquefilename = getuniquefilename();
    saveData(jsonstring, uniquefilename);

    vector<string> indexes = getindexes(jsonstring);
    for (int i = 0; i < indexes.size(); ++i)
        saveIndex(indexes[i], uniquefilename);
}

string DBUtility::getuniquefilename() {
    //TODO:
    return string();
}

void DBUtility::saveData(string basic_string, string basicString) {
    //TODO:
}

vector<string> DBUtility::getindexes(string basic_string) {
    //TODO:
    return vector<string>();
}

void DBUtility::saveIndex(string index, string filename) {
    //TODO:
}
