#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable : 4996)

    int main(int argc, char* argv) {
        printf("Bienvenue dans le challenge du nom: Trouvez le nombre de l'enigme du jour!\n Prenez votre boisson chaude\n Pret? C'est parti!");
        int enigmeDuJour = 0, nombreEntre = 0;
        const int MAX = 365, MIN = 1;
        srand(time(NULL));
        enigmeDuJour = (rand() % (MAX - MIN + 1)) + MIN;

        do {
            printf("Donnez un nombre!");
            scanf("%d", &nombreEntre);
            if (enigmeDuJour > nombreEntre)
                printf("Ca chauffe  !\n\n");
            else if (enigmeDuJour < nombreEntre)
                printf("C'est moins, a refroidit !\n\n");
            else
                printf("Bravo champion!Comment est ta boisson ? \n\n");
            if (nombreEntre == 0)
                printf("Tu fais des divisions par 0 toi?");
            if (nombreEntre >= 301)
                printf("Contribuez a ce challenge en proposant des enigmes en commentaires!\n\n Ou revenez plus tard");
        } while (nombreEntre != enigmeDuJour);
        return 0;}