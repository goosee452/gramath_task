#include <iostream>
#include <string>

using namespace std;


int main()
{
   char comparedLetters[40] = {'b','c','d','f','g','h','j','k','l','m','z','x','w','v','t','s','r','q','p','n','B','C','D','F','G','H','J','K','L','M','Z','X','W','V','T','S','R','Q','P','N'};
   char lettersForChange[40] = {'z','x','w','v','t','s','r','q','p','n','b','c','d','f','g','h','j','k','l','m', 'Z','X','W','V','T','S','R','Q','P','N','B','C','D','F','G','H','J','K','L','M'};

    string text;
    getline(cin, text);

    for(int i = 0; i < text.length(); i++){
        for(int b = 0; b < 40; b++){
            if(text[i] == comparedLetters[b]){
                text[i] = lettersForChange[b];
                break;
            }
        }
    }

    cout << text;

    return 0;
}
