#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
    char text[500];
    string buffer;

    cin.getline(text, 500);

    int i = 0, id = 0;

    replase:
        for (i = id; i < strlen(text); i++){

            while(text[i]!='('){
                if(text[i] != '(') cout<<text[i];
                i++;
            }

            if(text[i] == '('){
                while ( text[i] != ')'){
                    i++;
                    if(text[i] !=')')
                        buffer += text[i];
                    id = i+1;
                }
            }
        
            reverse( buffer.begin(), buffer.end() );
        
            cout<<buffer;
            buffer = "";
            break;
        }
    if(id == strlen(text) || id > strlen(text)){
        return 0;
    }
    goto replase;
}
