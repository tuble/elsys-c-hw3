#include <stdio.h>
#include <string.h>


void separate_chords(char[]);

int main() {

    //char input[] = "AmEm    Fm FFFDA G B C I HGJG CGDmEmE   ";
    char input[] = "AmDF FDAmFDAm ";

    separate_chords(input);

    return 0;
}


void separate_chords(char input[]) {

    char chords[7] = {'C', 'D', 'E', 'F','G','A', 'B'};

    for(int i = 0; i <= strlen(input); i++) {

        if(input[i] == ' ' || input[i] == 'm')
            continue;

        for(int j = 0; j < 7; j++) {

            if(input[i] == chords[j]) {

                printf("%c", input[i]);

                if(input[i + 1] == 'm')
                    printf("%c", input[i + 1]);

                printf("\n");

                break;
            }

        }

    }

}
