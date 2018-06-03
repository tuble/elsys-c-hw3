#include <stdio.h>
#include <string.h>

void transpose(char*, int);
void separate_chords(char[]);

int main() {

    char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZAmDmBFGm";

    separate_chords(input);

    printf("\n");

    return 0;
}


void transpose(char *chord, int with) {

    char *chords[12] = {"C", "Cm", "D", "Dm", "E", "F", "Fm", "G", "Gm", "A", "Am", "B"};

    int index = 0;

    for(int i = 0; i < 12; i++) {

        if(strcmp(chord, chords[i]) == 0) {
            
            index = i;
            break;

        }

    }

    index += with;

    while(index > 11) 
        index -= 12; 

    while(index < 0) 
        index += 12;
    

    printf("%s ", chords[index]);
}

void separate_chords(char input[]) {

    char chords[7] = {'C', 'D', 'E', 'F','G','A', 'B'};

    for(int i = 0; i <= strlen(input); i++) {

        if(input[i] == ' ' || input[i] == 'm')
            continue;

        for(int j = 0; j < 7; j++) {

            if(input[i] == chords[j]) {

                char chord[3] = "";

                chord[0] = input[i];

                if(input[i + 1] == 'm') 
                    chord[1] = input[i + 1];
                
                
                //printf("%s final chord", chord);

                transpose(chord, -1);
                break;
            }

        }

    }

}
