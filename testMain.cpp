#include <iostream>
#include <string>
#include <fstream>
#include "test.h"

int main(){
    //testing if the file opens
    string file,text;
    char character;
    int count = 0;

    cout << "Input File Name: " << endl;
    cin >> file;
    ifstream openFile(file);

    if(!openFile){
        cout << "File Does Not Exist!!" << endl;
        cout << "Test Passed for File Not Existing" << endl;
        if(!openFile){
            char str[100];
            int i, character;
            character = 0;
            cout << "No File so cannot count characters" << endl;
            cout << "Input a word " << endl;
            cin >> str;

            for(i = 0; str[i] > '0'; i++){
                if(str[i]!=' '){
                    character++;
                }
            }
            cout << character << " characters" << endl;
            getchar();
            cout << "Test passed for counting characters from inputted word" << endl;
            return 0;
        }
        exit(0);
    }

    cout << file << " is the name of file" << endl;
    cout << "Test past for file opening!!" << endl;



    while(openFile >> character){
        count ++;

        if(!openFile){
            cout << "No Characters to Count" << endl;
            exit(0);
        }
    }

    openFile.close();

    return count;
    
}