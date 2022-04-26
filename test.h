#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int countChar(string file){
    int count = 0;
    char character;
    ifstream openFile(file);

    //checking to see if the file does not exist
    if(!openFile){
        cout << "FILE DOES NOT EXIST" << endl;
        exit(0);
    }
    //while the file is open, count the characters
    while(openFile >> character){
        count ++;
    }
    openFile.close();

    return count;
}