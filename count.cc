/**********
 * @File count.cc
 * @Author Katie Clarke
 * @Brief count.cc counts the number of lines and characters
 * Count.cc
 * Course: CS 3560
 * Date: April 26, 2022
 * **********/

#include <iostream> 
#include <iomanip> 

using namespace std;

/*********************************************************
 *Function: int countLine(string text)
 * Parameters: None
 * Purpose: to count the number of lines used in arguments
 *******************************************************/
int countLine(string text){
    int count = 0;
    int i = 0;
    while(text[i++] != '\0'){
        istream& getline(char* , int size);
        count++;
    }

    cout << count << " Lines" << endl;
    return count;
}

/*********************************************************
 *Function: int countChar(char *text)
 * Parameters: None
 * Purpose: to count the number of characters in an argument
 *******************************************************/
int countChar(char *text){
    int count = 0;
    int i = 0;
    while(text[i++] != '\0'){
        count++;
    }

    cout << count << " Characters" << endl;
    return count;
}

/*********************************************************
 *Function: int main(int argc, char** argv)
 * Parameters: None
 * Purpose: to execute functions countChar and countLine
 * to print out the answers after compiling
 *******************************************************/
int main(int argc, char** argv){
    
    for(int i = 0; i < argc; i++){
        cout << setw(5) << i << setw(8) << countChar(argv[i]) << " " << argv[i] << endl;

        cout << setw(5) << countLine(argv[i]) << endl;
    }

    return 0;
}