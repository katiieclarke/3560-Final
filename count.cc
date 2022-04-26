#include <iostream> 
#include <iomanip> 

using namespace std;

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

int countChar(char *text){
    int count = 0;
    int i = 0;
    while(text[i++] != '\0'){
        count++;
    }

    cout << count << " Characters" << endl;
    return count;
}

int main(int argc, char** argv){
    
    for(int i = 0; i < argc; i++){
        cout << setw(5) << i << setw(8) << countChar(argv[i]) << " " << argv[i] << endl;

        cout << setw(5) << countLine(argv[i]) << endl;
    }

    return 0;
}