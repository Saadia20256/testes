
#include <stdio.h>
#include <string.h>

#define NB_NOTES 5

int main() {
    char nom[100];
    float notes[NB_NOTES];
    float total = 0, moyenne;
    float max = 0, min = 100;
    int reussies = 0, echouees = 0;
    int a_note_100 = 0;

    // 1. Demander le nom
    printf("Entrez le nom de l'étudiant : ");
    fgets(nom, sizeof(nom), stdin);
    nom[strcspn(nom, "\n")] = '\0';  // Retirer le saut de ligne si présent

    // 2. Saisie et validation des notes
    for (int i = 0; i < NB_NOTES; i++) {
        do {
            printf("Entrez la note %d (entre 0 et 100) : ", i + 1);
            scanf("%f", &notes[i]);
            if (notes[i] < 0 || notes[i] > 100) {
                printf("❌ Note invalide. Veuillez saisir une note entre 0 et 100.\n");
            }
        } while (notes[i] < 0 || notes[i] > 100);

        total += notes[i];

        if (notes[i] > max) max = notes[i];
        if (notes[i] < min) min = notes[i];

        if (notes[i] >= 50)
            reussies++;
        else
            echouees++;

        if (notes[i] == 100)
            a_note_100 = 1;
    }

    // 3. Calcul de la moyenne
    moyenne = total / NB_NOTES;

    // 4. Détermination de la mention
    char mention;
    if (moyenne >= 90)
        mention = 'A';
    else if (moyenne >= 80)
        mention = 'B';
    else if (moyenne >= 70)
        mention = 'C';
    else if (moyenne >= 60)
        mention = 'D';
    else
        mention = 'F';

    // 5. Vérification réussite globale
    int reussi_global = (moyenne >= 50 && echouees <= 2);

    // 6. Affichage du rapport
    printf("\n===== RAPPORT FINAL POUR %s =====\n", nom);
    printf("Total des notes : %.2f\n", total);
    printf("Moyenne : %.2f\n", moyenne);
    printf("Note la plus haute : %.2f\n", max);
    printf("Note la plus basse : %.2f\n", min);
    printf("Mention globale : %c\n", mention);
    printf("Matières réussies : %d\n", reussies);
    printf("Matières échouées : %d\n", echouees);
    printf("Résultat global : %s\n", reussi_global ? "✅ Réussi" : "❌ Échoué");

    if (a_note_100) {
        printf("🎉 BONUS : L'étudiant a obtenu la note maximale (100) dans au moins une matière !\n");
    }

    printf("=================================\n");

    return 0;
}
