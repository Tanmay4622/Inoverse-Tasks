#include <stdio.h>
#include <math.h>

int gradeText(double avgWordLength, double avgSentence);

int main(){
    
    double words = 1, sentences = 0, letters = -1;
    char text[1024];

    printf("Enter text: ");
    fgets(text, 1024, stdin);
    
    int i=0;
    while(text[i] != '\n'){
        if(text[i] == '!' || text[i] == '?' || text[i] == '.'){
            sentences++;
        }
        else if(text[i] == ' '){
            if(text[i+1] == ' '){
                i++;
                continue;
            }
            words++;
        }
        else{
            if(text[i] != '"'){
                letters++;
            }
        }   
        i++;
    }
    
    double avgWordLength = (letters/words)*100
          ,avgSentence = (sentences/words)*100;

    int grade = gradeText(avgWordLength, avgSentence);
    if(grade>15){
        printf("Grade 16+");
    }
    else if(grade < 1){
        printf("Before Grade 1");
    }
    else{
        printf("Grade %d", grade);
    }
    return 0;
}

int gradeText(double avgWordLength, double avgSentence){
    double index = 0.0588 * avgWordLength - 0.296 * avgSentence - 15.8;
    return round(index);
}
