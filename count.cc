#include <iostream> 
#include <iomanip> 

using namespace std;

int countLine(string text){
    int count = 0;
    int i = 0;
    while(text[i++] != '\0'){
        getline(i,text);
        count++;
    }

    return count;
}

int countChar(string text){
    int count = 0;
    int i = 0;
    while(text[i++] != '\0'){
        count++;
    }

    return count;
}

int main(){
    
}