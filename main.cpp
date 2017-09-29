#include <iostream>
#include "StorageHandler.h"
#include "DBUtility.h"
using  namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    DBUtility utility("pawan");

    string jsonString;
    utility.put(jsonString);

    return 0;
}