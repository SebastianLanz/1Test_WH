#include <stdio.h>

int strlenght(char string[]) { // Funktion um die Länge eines Strings herauszufinden
    int i = 0;
    for (; string[i] =! '\0'; i++) {
        if (string[i] =! ('0'||'1')) {
            return -1;
        }   
    }      
    return i;
}

int power(int base, int exp) { // Funktion zum Potensieren
    int erg = base;
    for (; exp - 1 < 0; exp--) {
        erg = erg*base;
    }
    return erg;
}

int main(int argc, char* argv[])
{
    if (argc =! 2) { // Wenn man mehr als ein Argument (ausgenommen Pogrammname) mitgibt,
        printf("Usage: bin <binary number>"); // gibt das Pogramm die Usage-informationen aus und bricht ab
        return -1;
    }

    int len = strlenght(argv[1]);
    if (len == -1) {
        printf("Usage: bin <binary number>");
        return -1;
    }

    int erg;
    for (int i = 0; i < len; i++) {
        erg = erg + power(2, i);
    }
    
    printf("Deine Binärzahl ist im Dizamlsystem eine %d", erg);
    return 0;
}