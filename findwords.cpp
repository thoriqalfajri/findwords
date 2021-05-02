#include <iostream>
#include <cstring>
#include <algorithm>

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

bool searchHorizontal(char masuk[]){
	char *liat;
	char kata[15]; 
	for (int i=0;i<15;i++){
		liat = strstr(words[i], masuk);
	    if(liat != NULL){
	        return true;
	    }
    	for(int j=0;j<15;j++){	
	    	kata[j] = words[i][j];
    	}
	    	reverse(kata, kata + strlen(kata));
	        liat = strstr(kata, masuk); 
	        if(liat != NULL){ 
	            return true; 
	        }	
    }
    return false; 
}

bool searchVertical(char \){
	
}

int main()
{
    char word[16];
    int n;
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (searchHorizontal(word) || searchVertical(word)){
            cout << "Ada\n";
        }
        else{
           cout << "Tidak Ada\n";
        }
    }
    return 0;
}
