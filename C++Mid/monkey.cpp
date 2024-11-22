#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char line[100000]; 
    char characters[100000];  

   
    while (cin.getline(line, 100000)) {  
        int index = 0; 

        for (int i = 0; i < 100000; i++) {
            characters[i] = '\0';
        }

     
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] != ' ') {  
                characters[index++] = line[i];  
            }
        }


        sort(characters, characters + index);

       
        for (int i = 0; i < index; i++) {
            cout << characters[i];
        }
        cout << endl;  
    }

    return 0;
}
