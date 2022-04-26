/**********
 * @File count.cc
 * @Author Katie Clarke
 * @Brief count.cc counts the number of lines and characters
 * Count.cc
 * Course: CS 3560
 * Date: April 26, 2022
 * **********/

#include <iostream> 
#include <fstream>
#include <iomanip> 

using namespace std;

/*********************************************************
 *Function: int countLine(string text)
 * Parameters: None
 * Purpose: to count the number of lines used in arguments
 *******************************************************/
int countLine(string file){
    int count = 0;
    string text;
    ifstream openFile(file);

    //checking to see if there is a file or not
    if(!openFile){
        cout << "file does not exist" << endl;
        exit(0);
    }
    //count the number of lines
    while(getline(openFile, text)){
        count++;
    }
    openFile.close();

    return count; 
}

/*********************************************************
 *Function: int countChar(char *text)
 * Parameters: None
 * Purpose: to count the number of characters in an argument
 *******************************************************/
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

/*********************************************************
 *Function: int main(int argc, char** argv)
 * Parameters: None
 * Purpose: to execute functions countChar and countLine
 * to print out the answers after compiling
 *******************************************************/
int main(int argc, char** argv){
    string file, text;
    cout << "input file name: " << endl;
    cin >> file;
    ifstream openFile(file);

    if(!openFile){
        cout << "file does not exist" << endl;
        if(!openFile){
            cout << "Input a word: " << endl;

        }
        exit(0);
    }
  
    cout << countLine("file.txt") << " Lines" << endl;
    cout << countChar("file.txt") << " Characters" << endl;

    return 0;
}