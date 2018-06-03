#include <stdio.h>

void transpose(char*, int);

int main() {

    char *chord = "Cm";

    transpose(chord, 12); 

    printf("\n");

    return 0;

}

void transpose(char *chord, int with) {

    char *chords[12] = {"C", "Cm", "D", "Dm", "E", "F", "Fm", "G", "Gm", "A", "Am", "B"};

    int index = 0;

    for(int i = 0; i < 12; i++) {

        if(chord == chords[i]) {

            index = i;
            break;

        }

    }

    index += with;

    while(index > 11) 
        index -= 12; 

    while(index < 0) 
        index += 12;

    printf("%s", chords[index]);
}
