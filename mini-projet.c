#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct etudiant
{
    char id[10];
    char nom[40];
    char prenom[40];
    char date_de_naissance[12];
    char adresse[40];
    char numero[11];
    char email[40];
    char filiere[40];
    char annee_detude[20];
};

void menu(){
    system("clear");
    printf("-------------------------------------------\nsysteme de gestion des dossiers etudiants\n-------------------------------------------\n");
    printf("1.Ajouter un nouvel etudiant\n2.Afficher la liste des etudiants\n3.Modifier un dossier etudiant\n4.Supprimer un etudiant\n5.Rechercher un etudiant\n6.Afficher les statistiques des etudiants\n7.Quitter\n");
    printf("-------------------------------------------\nVeuillez choisir une option (1-7) :\n");

}

void ajouter_etudiant(struct etudiant etudiants[],int *nombre_etudiant,int *informatique,int *finance,int *electricite,int *premiere,int *deuxieme,int *troisieme,int *quatrieme,int *cinquieme){
    int n;
    printf("Identifiant unique de l'étudiant: ");
    scanf(" %[^\n]",etudiants[*nombre_etudiant].id);system("clear");
    printf("Nom de l'étudiant: ");
    scanf(" %[^\n]",etudiants[*nombre_etudiant].nom);system("clear");
    printf("Prénom de l'étudiant: ");
    scanf(" %[^\n]",etudiants[*nombre_etudiant].prenom);system("clear");
    printf("Date de naissance de l'étudiant: ");
    scanf(" %[^\n]",etudiants[*nombre_etudiant].date_de_naissance);system("clear");
    printf("Adresse de l'étudiant: ");
    scanf(" %[^\n]",etudiants[*nombre_etudiant].adresse);system("clear");
    printf("Numéro de téléphone de l'étudiant: ");
    scanf(" %[^\n]",etudiants[*nombre_etudiant].numero);system("clear");
    printf("Email de l'étudiant: ");
    scanf(" %[^\n]",etudiants[*nombre_etudiant].email);system("clear");

    do{
        printf("Filière de l'étudiant:\n1.informatique\n2.finance\n3.electricite\n");
        scanf("%d",&n);
        if(n==1){strcpy(etudiants[*nombre_etudiant].filiere,"informatique");(*informatique)++;}
        else if(n==2){strcpy(etudiants[*nombre_etudiant].filiere,"finance");(*finance)++;}
        else if(n==3){strcpy(etudiants[*nombre_etudiant].filiere,"electricite");(*electricite)++;}
    }while(n!=1&&n!=2&&n!=3);system("clear");

    do{
        printf("Année d'étude de l'étudiant: \n1.1ère Année\n2.2ème Année\n3.3ème Année\n4.4ème Année\n5.5ème Année\n");
        scanf("%d",&n);
        if(n==1){strcpy(etudiants[*nombre_etudiant].annee_detude,"1ère Année");(*premiere)++;}
        else if(n==2){strcpy(etudiants[*nombre_etudiant].annee_detude,"2ème Année");(*deuxieme)++;}
        else if(n==3){strcpy(etudiants[*nombre_etudiant].annee_detude,"3ème Année");(*troisieme)++;}
        else if(n==4){strcpy(etudiants[*nombre_etudiant].annee_detude,"4ème Année");(*quatrieme)++;}
        else if(n==5){strcpy(etudiants[*nombre_etudiant].annee_detude,"5ème Année");(*cinquieme)++;}
    }while(n!=1&&n!=2&&n!=3&&n!=4&&n!=5);
    (*nombre_etudiant)++;

    


}

void afficher_etudiant(struct etudiant etudiants[],int nombre_etudiant){
    int n;
    for(int i=0;i<nombre_etudiant;i++)
    {
        printf("Identifiant : %s\n",etudiants[i].id);
        printf("Nom : %s\n",etudiants[i].nom);
        printf("Prénom : %s\n",etudiants[i].prenom);
        printf("------------------------------------------\n");
    }

};

void afficher_etudiant_plus_info(struct etudiant etudiants[],int nombre_etudiant){
    for(int i=0;i<nombre_etudiant;i++)
    {
        printf("Identifiant unique de l'étudiant: %s\n",etudiants[i].id);
        printf("Nom de l'étudiant: %s\n",etudiants[i].nom);
        printf("Prénom de l'étudiant: %s\n",etudiants[i].prenom);
        printf("Date de naissance de l'étudiant: %s\n",etudiants[i].date_de_naissance);
        printf("Adresse de l'étudiant: %s\n",etudiants[i].adresse);
        printf("Numéro de téléphone de l'étudiant: %s\n",etudiants[i].numero);
        printf("Email de l'étudiant: %s\n",etudiants[i].email);
        printf("Filière de l'étudiant: %s\n",etudiants[i].filiere);
        printf("Année d'étude de l'étudiant: %s\n",etudiants[i].annee_detude);
        printf("------------------------------------------\n");
    }
};

void modifier(struct etudiant etudiants[],int nombre_etudiant,int *informatique,int *finance,int *electricite,int *premiere,int *deuxieme,int *troisieme,int *quatrieme,int *cinquieme){
    char identifiant[10],a_modifier[20];int n,trouve=0;
    printf("Veuiller entrer l'id de letudiant: ");
    scanf(" %[^\n]",identifiant);system("clear");
    printf("que voulez-vous changer:\n1.nom\n2.prenom\n3.date de naissance\n4.adresse\n5.numero de telephone\n6.email\n7.filiere\n8.annee d'etude\n");
    scanf("%d",&n);system("clear");
    for(int i=0;i<nombre_etudiant;i++){
        if(strcmp(etudiants[i].id,identifiant)==0)
        {   trouve=1;
            if(n==1){printf("nouvelle valeur=> ");scanf(" %[^\n]",a_modifier);strcpy(etudiants[i].nom,a_modifier);}
            else if(n==2){printf("nouvelle valeur=> ");scanf(" %[^\n]",a_modifier);strcpy(etudiants[i].prenom,a_modifier);}
            else if(n==3){printf("nouvelle valeur=> ");scanf(" %[^\n]",a_modifier);strcpy(etudiants[i].date_de_naissance,a_modifier);}
            else if(n==4){printf("nouvelle valeur=> ");scanf(" %[^\n]",a_modifier);strcpy(etudiants[i].adresse,a_modifier);}
            else if(n==5){printf("nouvelle valeur=> ");scanf(" %[^\n]",a_modifier);strcpy(etudiants[i].numero,a_modifier);}
            else if(n==6){printf("nouvelle valeur=> ");scanf(" %[^\n]",a_modifier);strcpy(etudiants[i].email,a_modifier);}
            else if(n==7)
            {  
               if(strcmp(etudiants[i].filiere,"informatique")==0){(*informatique)--;}
               else if(strcmp(etudiants[i].filiere,"finance")==0){(*finance)--;}
               else if(strcmp(etudiants[i].filiere,"electricite")==0){(*electricite)--;}
               do
                {
                    printf("Filière de l'étudiant:\n1.informatique\n2.finance\n3.electricite\n");
                    scanf("%d",&n);
                    if(n==1){strcpy(etudiants[i].filiere,"informatique");(*informatique)++;}
                    else if(n==2){strcpy(etudiants[i].filiere,"finance");(*finance)++;}
                    else if(n==3){strcpy(etudiants[i].filiere,"electricite");(*electricite)++;}
                }
                while(n!=1&&n!=2&&n!=3);
            }
            else if(n==8)
            {
                if(strcmp(etudiants[i].annee_detude,"1ère Année")==0){(*premiere)--;}
                else if(strcmp(etudiants[i].annee_detude,"2ème Année")==0){(*deuxieme)--;}
                else if(strcmp(etudiants[i].annee_detude,"3ème Année")==0){(*troisieme)--;}
                else if(strcmp(etudiants[i].annee_detude,"4ème Année")==0){(*quatrieme)--;}
                else if(strcmp(etudiants[i].annee_detude,"5ème Année")==0){(*cinquieme)--;}
                do
                {
                    printf("Année d'étude de l'étudiant: \n1.1ère Année\n2.2ème Année\n3.3ème Année\n4.4ème Année\n5.5ème Année\n");
                    scanf("%d",&n);
                    if(n==1){strcpy(etudiants[i].annee_detude,"1ère Année");(*premiere)++;}
                    else if(n==2){strcpy(etudiants[i].annee_detude,"2ème Année");(*deuxieme)++;}
                    else if(n==3){strcpy(etudiants[i].annee_detude,"3ème Année");(*troisieme)++;}
                    else if(n==4){strcpy(etudiants[i].annee_detude,"4ème Année");(*quatrieme)++;}
                    else if(n==5){strcpy(etudiants[i].annee_detude,"5ème Année");(*cinquieme)++;}
                }
                while(n!=1&&n!=2&&n!=3&&n!=4&&n!=5);
            }


        }
            
    }   
    if(trouve==0){printf("etudiant inexistant\n");}
}

void supprimer(struct etudiant etudiants[],int *nombre_etudiant,int *informatique,int *finance,int *electricite,int *premiere,int *deuxieme,int *troisieme,int *quatrieme,int *cinquieme){
    char id[10];int n,trouve=0;
    printf("veuiller saisir l'id de l'etudiant a suprimer: ");
    scanf(" %[^\n]",id);system("clear");
    printf("etes vous sur ?:\n1.oui\n2.non\n");
    scanf("%d",&n);
    
    if(n==1)
    {

        for(int i=0;i<*nombre_etudiant;i++)
        {
            if(strcmp(etudiants[i].id,id)==0)
            {
                if(strcmp(etudiants[i].filiere,"informatique")==0){(*informatique)--;}
                else if(strcmp(etudiants[i].filiere,"finance")==0){(*finance)--;}
                else if(strcmp(etudiants[i].filiere,"electricite")==0){(*electricite)--;}

                if(strcmp(etudiants[i].annee_detude,"1ère Année")==0){(*premiere)--;}
                else if(strcmp(etudiants[i].annee_detude,"2ème Année")==0){(*deuxieme)--;}
                else if(strcmp(etudiants[i].annee_detude,"3ème Année")==0){(*troisieme)--;}
                else if(strcmp(etudiants[i].annee_detude,"4ème Année")==0){(*quatrieme)--;}
                else if(strcmp(etudiants[i].annee_detude,"5ème Année")==0){(*cinquieme)--;}
                for (int j=i;j<*nombre_etudiant-1;j++){
                    etudiants[j]=etudiants[j+1];
                }
                trouve=1;
                (*nombre_etudiant)--;
                break;
                
            }
        }
        if(trouve==0){printf("etudiant inexistant\n");}
    }
    


}

void rechercher(struct etudiant etudiants[],int nombre_etudiant){
    char nom[15],prenom[15],id[10];
    int choix,trouve=0;
    printf("1.recherche par id\n2.recherche par nom\n3.recherche par prenom\n=>");
    scanf("%d",&choix);
    if(choix==1)
    {   
        system("clear");
        printf("enterer l'id: ");
        scanf("%s",id);
        system("clear");
        
        for(int i=0;i<nombre_etudiant;i++)
        {

            if(strcmp(etudiants[i].id,id)==0)
            {
                printf("Identifiant unique de l'étudiant: %s\n",etudiants[i].id);
                printf("Nom de l'étudiant: %s\n",etudiants[i].nom);
                printf("Prénom de l'étudiant: %s\n",etudiants[i].prenom);
                printf("Date de naissance de l'étudiant: %s\n",etudiants[i].date_de_naissance);
                printf("Adresse de l'étudiant: %s\n",etudiants[i].adresse);
                printf("Numéro de téléphone de l'étudiant: %s\n",etudiants[i].numero);
                printf("Email de l'étudiant: %s\n",etudiants[i].email);
                printf("Filière de l'étudiant: %s\n",etudiants[i].filiere);
                printf("Année d'étude de l'étudiant: %s\n",etudiants[i].annee_detude);
                printf("------------------------------------------\n");
                trouve=1;
            }
            
        } 

    }
    else if(choix==2)
    {
        system("clear");
        printf("enterer le nom: ");
        scanf("%s",nom);
        system("clear");
        
        for(int i=0;i<nombre_etudiant;i++)
        {

            if(strcmp(etudiants[i].nom,nom)==0)
            {
                printf("Identifiant unique de l'étudiant: %s\n",etudiants[i].id);
                printf("Nom de l'étudiant: %s\n",etudiants[i].nom);
                printf("Prénom de l'étudiant: %s\n",etudiants[i].prenom);
                printf("Date de naissance de l'étudiant: %s\n",etudiants[i].date_de_naissance);
                printf("Adresse de l'étudiant: %s\n",etudiants[i].adresse);
                printf("Numéro de téléphone de l'étudiant: %s\n",etudiants[i].numero);
                printf("Email de l'étudiant: %s\n",etudiants[i].email);
                printf("Filière de l'étudiant: %s\n",etudiants[i].filiere);
                printf("Année d'étude de l'étudiant: %s\n",etudiants[i].annee_detude);
                printf("------------------------------------------\n");
                trouve=1;
            }
        }  

    }
    else if(choix==3)
    {
        system("clear");
        printf("enterer le prenom: ");
        scanf("%s",prenom);
        system("clear");
        
        for(int i=0;i<nombre_etudiant;i++)
        {

            if(strcmp(etudiants[i].prenom,prenom)==0)
            {
                printf("Identifiant unique de l'étudiant: %s\n",etudiants[i].id);
                printf("Nom de l'étudiant: %s\n",etudiants[i].nom);
                printf("Prénom de l'étudiant: %s\n",etudiants[i].prenom);
                printf("Date de naissance de l'étudiant: %s\n",etudiants[i].date_de_naissance);
                printf("Adresse de l'étudiant: %s\n",etudiants[i].adresse);
                printf("Numéro de téléphone de l'étudiant: %s\n",etudiants[i].numero);
                printf("Email de l'étudiant: %s\n",etudiants[i].email);
                printf("Filière de l'étudiant: %s\n",etudiants[i].filiere);
                printf("Année d'étude de l'étudiant: %s\n",etudiants[i].annee_detude);
                printf("------------------------------------------\n");
                trouve=1;
            }
        }  

    }
    if(trouve==0){printf("etudiant inexistant\n");}
}

void statistiques(int nombre_etudiant,int informatique,int finance,int electricite,int premiere,int deuxieme,int troisieme,int quatrieme,int cinquieme){
    printf("Nombre total d'étudiants: %d\n",nombre_etudiant);
    printf("Nombre d'étudiants par filière:\n\tinformatique: %d\n\tfinance: %d\n\telectricite: %d\n",informatique,finance,electricite);
    printf("Nombre d'étudiants par année d'étude:\n\t1ère Année: %d\n\t2ème Année: %d\n\t3ème Année: %d\n\t4ème Année: %d\n\t5ème Année: %d\n",premiere,deuxieme,troisieme,quatrieme,cinquieme);
}
void main(){
    int nombre_etudiant=0,n,informatique=0,finance=0,electricite=0,premiere=0,deuxieme=0,troisieme=0,quatrieme=0,cinquieme=0;
    struct etudiant etudiants[100];
    menu();
    do{
        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n'); 
            n = -1; 
        }
        if(n==1){system("clear");ajouter_etudiant(etudiants,&nombre_etudiant,&informatique,&finance,&electricite,&premiere,&deuxieme,&troisieme,&quatrieme,&cinquieme);}
        else if(n==2){system("clear");afficher_etudiant(etudiants,nombre_etudiant);printf("entrer 1 pour + de detail: ");scanf("%d",&n);if(n==1){system("clear");afficher_etudiant_plus_info(etudiants,nombre_etudiant);}}
        else if(n==3){system("clear");modifier(etudiants,nombre_etudiant,&informatique,&finance,&electricite,&premiere,&deuxieme,&troisieme,&quatrieme,&cinquieme);}
        else if(n==4){system("clear");supprimer(etudiants,&nombre_etudiant,&informatique,&finance,&electricite,&premiere,&deuxieme,&troisieme,&quatrieme,&cinquieme);}
        else if(n==5){system("clear");rechercher(etudiants,nombre_etudiant);}
        else if(n==6){system("clear");statistiques(nombre_etudiant,informatique,finance,electricite,premiere,deuxieme,troisieme,quatrieme,cinquieme);}
        else if(n==7)
        {
            system("clear");
            printf("\n-------------------------------------------\n");
            printf("Fin de session.\n");
            printf("Nombre total d'étudiants enregistrés : %d\n", nombre_etudiant);
            printf("Merci d'avoir utilisé notre logiciel de gestion.\n");
            printf("-------------------------------------------\n");
            break;
        }


do
        {
            printf("\nEntrer '0' pour retourner au menu: ");
            if (scanf("%d", &n) != 1) {
                while (getchar() != '\n');
                n = -1;
            }
            system("clear");
        }
        while(n!=0);
        if(n==0){menu();}

    }while(n!=7);


}
