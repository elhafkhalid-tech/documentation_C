#include <stdio.h>
float CalculeLePremierPaiement()
{
    return (20000*6/(100*12))+20000-386.66;
}
float CalculeLeDeuxiemPaiement()
{
    float PremierCalcul = CalculeLePremierPaiement();
    return (PremierCalcul*6/(100*12))+PremierCalcul-386.66;
}
float CalculeLeTroixiemPaiement()
{
    float DeuxiemCalcul = CalculeLeDeuxiemPaiement();
    return ( DeuxiemCalcul*6/(100*12))+ DeuxiemCalcul-386.66;
}
void PrintfResultat()
{
    printf("Le Premier Paiement est : %f",CalculeLePremierPaiement());
    printf("\nLe Deuxieme Paiement est : %f",CalculeLeDeuxiemPaiement());
    printf("\nLe Troisieme Paiement est : %f",CalculeLeTroixiemPaiement());
}
int main()
{
    PrintfResultat();
}