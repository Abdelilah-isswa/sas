#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define RESET "\033[0m"

typedef struct
{
    char Nom[50];
    char Numéro_de_téléphone[50];
    char Adresse_email[50];

} Contact;

int count = 0, tot = 0;
void Ajouter(Contact info[])
{

    printf("\nCombien d'utilisateurs voulez-vous ajouter ? ");
    scanf("%d", &count);
    getchar();
    if (count <= 100)
    {
        for (int i =tot; i < count+tot; i++)
        {
            printf(BLUE "\n----------------------------\n" RESET);
            printf("%-12s: ", "Nom");
            scanf("%[^\n]", info[i].Nom);
            getchar();
            printf("%-14s: ", "Téléphone");
            scanf("%[^\n]", info[i].Numéro_de_téléphone);
            getchar();
            printf("%-12s: ", "Email ");
            scanf("%[^\n]", info[i].Adresse_email);
            getchar();
        }
        printf(GREEN "Félicitations ! Le contact a été ajouté avec succès !\n" RESET);
        tot = count + tot;
    }
}
void modifies(Contact info[])
{
    char nomRechercher[50];
    int trouve = 0;

    printf("%-12s: ", "Entrer le nom à rechercher:");
    scanf(" %[^\n]", nomRechercher);

    for (int i = 0; i < tot; i++)
    {
        if (strcmp(nomRechercher, info[i].Nom) == 0)
        {
            printf(GREEN"Contact trouvé !\n"RESET);
            printf("Nom: %s\n", info[i].Nom);
            printf(" le nouveau Nom: \n");
            scanf(" %[^\n]", info[i].Nom);

            printf("Téléphone: %s\n", info[i].Numéro_de_téléphone);
            printf("le nouveau Téléphone:");
            scanf(" %[^\n]", info[i].Numéro_de_téléphone);
            printf("Adresse e-mail : %s\n", info[i].Adresse_email);
            printf(" le nouveau Email: ");
            scanf(" %[^\n]", info[i].Adresse_email);
            trouve = 1;
            break;
        }
    }
    if (trouve != 1)
    {
        printf("Contact introuvable.\n");
    }
}

void Rechercher(Contact info[])
{
    char nomRechercher[50];
    int trouve = 0; 

    printf("%-12s: ", "Entrer le nom à rechercher");
    scanf(" %[^\n]", nomRechercher);

    for (int i = 0; i < tot; i++)
    {
        if (strcmp(nomRechercher, info[i].Nom) == 0)
        {
            printf(GREEN"Contact trouvé !\n"RESET);
            printf("%-12s: %s\n", "Nom", info[i].Nom);
            printf("%-12s: %s\n","Téléphone", info[i].Numéro_de_téléphone);
            printf("%-12s: %s\n","Email", info[i].Adresse_email);
            trouve = 1;
            break;
        }
    }

    if (!trouve)
    {
        printf(RED"Contact introuvable.\n"RESET);
    }
}

void Afficher(Contact info[])
{
    if (tot == 0)
    {
        printf(RED"Aucun contact!\n"RESET);
        return;
    }
    for (int i = 0; i < tot; i++)
    {
        printf("%-12s: %s\n", "Nom", info[i].Nom);
printf("%-14s: %s\n", "Téléphone", info[i].Numéro_de_téléphone);
printf("%-12s: %s\n", "Email", info[i].Adresse_email);
printf("-----------------------\n")

    }
}

void supprimer(Contact info[])
{
    char nomRechercher[50];
    int trouve = 0;
    char choix; 

    printf("Entrer le nom pour le supprimer:\n");
    scanf(" %[^\n]", nomRechercher); 
    for (int i = 0; i < tot; i++)
    {
        if (strcmp(nomRechercher, info[i].Nom) == 0)
        {
            printf(GREEN"Contact trouvé !\n"RESET);
            printf("Nom: %s\n", info[i].Nom);
            printf("Téléphone: %s\n", info[i].Numéro_de_téléphone);
            printf("Email: %s\n", info[i].Adresse_email);
            trouve = 1;
            printf("Voulez-vous le supprimer ? y/n");
            scanf(" %[^\n]s", choix);
            if (choix == 'y' || choix == 'Y')
            {
                for (int j = i; j < tot - 1; j++)
                {
                    info[j] = info[j + 1];
                }
                tot--;
                printf("supprimer avec success");
            }
            else
            {
                printf("non supprimer");
            }
            break;
        }

        if (!trouve)
        {
            printf(RED"Contact introuvable.\n"RESET);
        }
    }
}

int main()
{
    Contact info[100];
    int choix;
    char buffer[100];

    do
    {
        printf("====================================\n");

        printf(RED "\tGestionnaire de Contacts\t\n" RESET);
        printf(RED "====================================\n" RESET);

        printf(BLUE "1." RESET " Ajouter un contact");
        printf(BLUE "\n2." RESET " Modifier un contact");
        printf(BLUE "\n3." RESET " Supprimer un Contact");
        printf(BLUE "\n4." RESET " Afficher Tous les Contacts");
        printf(BLUE "\n5." RESET " Rechercher un Contact");
        printf(RED "\n6. Quitter\n" RESET);
        printf(RED "====================================" RESET);

        printf("\nVotre choix : ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            Ajouter(info);

            break;
        case 2:
            modifies(info);
            break;
        case 3:
            supprimer(info);
            break;
        case 4:
            Afficher(info);
            break;
        case 5:
            Rechercher(info);
            break;
        case 6:
            printf("exit\n");
            break;
        default:
            printf("Choix Invalide\n");
            goto here;
        }
        
    } while (choix != 6);
    here:
    return 0;
}
