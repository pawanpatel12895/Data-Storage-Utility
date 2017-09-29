//
// Created by pawan on 27/9/17.
//

#include "StorageHandler.h"
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

StorageHandler::StorageHandler() {
    BaseDir = cwd();
}

StorageHandler::StorageHandler(string &baseName) {
    string cwd = this->cwd();
    makedir(cwd, baseName);
}

string StorageHandler::cwd() {
    string cwd;
    size_t bufsize = 255;
    char *buf = (char *) malloc(bufsize);
    buf = getcwd(buf, bufsize);
    if (buf != NULL) {
        cwd = string(buf);
    }
    //TODO: else throw error.
    free(buf);
    return cwd;
}

string StorageHandler::getDataDirPath() {
    return getPath(BaseDir, dataDir);
}

string StorageHandler::getIndexDirPath() {
    return getPath(BaseDir, indexDir);
}

string StorageHandler::getBaseDirPath() {
    return BaseDir;
}

int StorageHandler::makedir(string &parent, string &name) {
    string path = getPath(parent, name);
    return makedir(path);
}

string StorageHandler::getPath(string &parent, string &child) {
    return parent + PATH_SEPARATOR + child;
}

int StorageHandler::makedir(string &path) {
    int stat = system(("mkdir -p " + path).c_str());
    //    if(stat == -1)    //TODO: throw error
    return stat;

    /*int stat = mkdir((path).c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
    //    if(stat == -1)    //TODO: throw error
    return stat;*/
}

FILE *StorageHandler::putfile(string &parent, string &filename) {
    makedir(parent);
    return nullptr;
}

