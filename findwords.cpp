#include <iostream>
#include <cstring>

using namespace std;
const int cols = 16, rows = 15;

 char words[rows][cols] = {"tgbwwinterwsesn",
                                "aaunttmmhfoodnb",
                                "jlwcqldzmpmvdmr",
                                "asagmquwvvbsohi",
                                "bwplotanadtpgnc",
                                "rewngodjcpnatnk",
                                "eeotwosbqharrsa",
                                "azcgeswewnaknpb",
                                "dinnerqodlwdcar",
                                "onopkwmparktzcc",
                                "qbfrogmamwpweey",
                                "lqzqnnmrzjjsclg",
                                "mosgzczetdbooto",
                                "pdcrzmsngrdnrpz",
                                "ohnkzwaterjgtra"};

char *getWordVertical(int);
char *reverse(char *);
bool searchVertical(char *);

bool searchHorizontal(char data[]){
	char *check;
	for (int i = 0; i < 15; i++){
        check = strstr(words[i], data);
	    if(check != NULL){
	        return true;
	    }
    }
    return false;
}

bool searchVertical(char data[]){
	char *check;
	char word[15];
	for (int i = 0; i < 15; i++){
        for (int j = 0; j < 15; j++){
            word[j] = words[j][i];
        }
        check = strstr(word, data);
        if(check != NULL){
	        return true;
	    }
    }
    return false;
}

int main()
{
    char word[16];
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (searchVertical(word) || searchHorizontal(word))
            cout << "Ada\n";
        else 
            cout << "Tidak Ada\n";
    }
    return 0;
}
