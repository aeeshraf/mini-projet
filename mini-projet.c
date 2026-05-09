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

void ajouter_etudiant(struct etudiant etudiants[],int *nombre_etudiant,int *informatique,int *finance,int *electricite,int *premiere,int *deuxieme,int *troisieme,int *quatrieme,int *cinquieme){
    int n;
    printf("Identifiant unique de l'étudiant: ");
    scanf("%s",etudiants[*nombre_etudiant].id);
    printf("Nom de l'étudiant: ");
    scanf("%s",etudiants[*nombre_etudiant].nom);
    printf("Prénom de l'étudiant: ");
    scanf("%s",etudiants[*nombre_etudiant].prenom);
    printf("Date de naissance de l'étudiant: ");
    scanf("%s",etudiants[*nombre_etudiant].date_de_naissance);
    printf("Adresse de l'étudiant: ");
    scanf("%s",etudiants[*nombre_etudiant].adresse);
    printf("Numéro de téléphone de l'étudiant: ");
    scanf("%s",etudiants[*nombre_etudiant].numero);
    printf("Email de l'étudiant: ");
    scanf("%s",etudiants[*nombre_etudiant].email);

    do{
        printf("Filière de l'étudiant:\n1.informatique\n2.finance\n3.electrique\n");
        scanf("%d",&n);
        if(n==1){strcpy(etudiants[*nombre_etudiant].filiere,"informatique");(*informatique)++;}
        else if(n==2){strcpy(etudiants[*nombre_etudiant].filiere,"finance");(*finance)++;}
        else if(n==3){strcpy(etudiants[*nombre_etudiant].filiere,"electrique");(*electricite)++;}
    }while(n!=1&&n!=2&&n!=3);

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
    char identifiant[10],a_modifier[20];int n;
    printf("Veuiller entrer l'id de letudiant: ");
    scanf("%s",identifiant);system("clear");
    printf("que voulez-vous changer:\n1.nom\n2.prenom\n3.date de naissance\n4.adresse\n5.numero de telephone\n6.email\n7.filiere\n8.annee d'etude\n");
    scanf("%d",&n);
    for(int i=0;i<nombre_etudiant;i++){
        if(strcmp(etudiants[i].id,identifiant)==0)
        {
            if(n==1){scanf("%s",a_modifier);strcpy(etudiants[i].nom,a_modifier);}
            else if(n==2){scanf("%s",a_modifier);strcpy(etudiants[i].prenom,a_modifier);}
            else if(n==3){scanf("%s",a_modifier);strcpy(etudiants[i].date_de_naissance,a_modifier);}
            else if(n==4){scanf("%s",a_modifier);strcpy(etudiants[i].adresse,a_modifier);}
            else if(n==5){scanf("%s",a_modifier);strcpy(etudiants[i].numero,a_modifier);}
            else if(n==6){scanf("%s",a_modifier);strcpy(etudiants[i].email,a_modifier);}
            else if(n==7)
            {  
               if(strcmp(etudiants[i].filiere,"informatique")==0){(*informatique)--;}
               else if(strcmp(etudiants[i].filiere,"finace")==0){(*finance)--;}
               else if(strcmp(etudiants[i].filiere,"electricite")==0){(*electricite)--;}
               do
                {
                    printf("Filière de l'étudiant:\n1.informatique\n2.finance\n3.electrique\n");
                    scanf("%d",&n);
                    if(n==1){strcpy(etudiants[i].filiere,"informatique");(*informatique)++;}
                    else if(n==2){strcpy(etudiants[i].filiere,"finance");(*finance)++;}
                    else if(n==3){strcpy(etudiants[i].filiere,"electrique");(*electricite)++;}
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
}
void main(){
    int nombre_etudiant=0,n,informatique=0,finance=0,electricite=0,premiere=0,deuxieme=0,troisieme=0,quatrieme=0,cinquieme=0;
    struct etudiant etudiants[100];

    do{
        scanf("%d",&n);
        if(n==1){system("clear");ajouter_etudiant(etudiants,&nombre_etudiant,&informatique,&finance,&electricite,&premiere,&deuxieme,&troisieme,&quatrieme,&cinquieme);}

        else if(n==2){system("clear");afficher_etudiant(etudiants,nombre_etudiant);}
        else if(n==3){system("clear");afficher_etudiant_plus_info(etudiants,nombre_etudiant);}
        else if(n==4){system("clear");modifier(etudiants,nombre_etudiant,&informatique,&finance,&electricite,&premiere,&deuxieme,&troisieme,&quatrieme,&cinquieme);}
    }while(n!=0);


}
