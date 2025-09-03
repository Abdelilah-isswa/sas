int main() {

    int nmbrProduits;
    float prixProduit = 125;
    float total=0;

    printf("Entrer nombre de produits :");
    scanf("%d",&nmbrProduits);

    int j=0;
    for (int  i = 0; i < nmbrProduits; i++)
    {
        total=total+prixProduit-(prixProduit*j/100);
        j=j+2;

    }

    printf("Total est : %f",total);


}