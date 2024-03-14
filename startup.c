#include <stdio.h>
#include <string.h>
void saluto()
{
    printf(" ciao, sono un software che ti suggerisce i colori che si abbinano ad un determinato tessuto e ti creo outfit con capi di vari brand. \nInserisci foto o dati del tuo capo(colore,taglie (europee e internazionali) in maiuscolo,eventuali allergie a tessuti) per farmelo abbinare  \n");
}
void colore(char *dati)
{
    if (strstr(dati, "nero") || strstr(dati, "nera"))
    {
        printf("tutti i colori stanno bene con il nero tranne il blu. \n");
    }
    if (strstr(dati, "rosso") || strstr(dati, "rossa"))
    {
        printf("i colori che stanno bene con il rosso sono il nero,il bianco,sfumature dello stesso colore,il blu. \n");
    }
    if (strstr(dati, "giallo") || strstr(dati, "gialla"))
    {
        printf(" i colori che stanno bene con il giallo sono grigio,arancione,beige. \n");
    }
    if (strstr(dati, "verde"))
    {
        printf("i colori che stanno bene con il verde sono il rosa,grigio,sfumature dello stesso colore,marrone,viola. \n");
    }
    if (strstr(dati, "blu"))
    {
        printf("i colori che stanno bene con il blu sono rosso,giallo,bianco,grigio,viola e altre sfumeture. \n");
    }
    if (strstr(dati, "bianco") || strstr(dati, "bianca"))
    {
        printf("i colori che stanno bene con il bianco sono azzuro,verde scuro,rosa,viola e marrone. \n");

    }
}
void taglia(char *dati)
{
    if (strstr(dati, "32") || strstr(dati, " 34"))
    {
        printf("la taglia corrispondente internazionale é XXS o XS.\n");
    }
    if (strstr(dati, "36") || strstr(dati, "38"))
    {
        printf("la taglia corrispondente internazionale é S o M.\n");
    }
    if (strstr(dati, "40") || strstr(dati, "42"))
    {
        printf("la taglia corrispondente internazionale é L o M\n");
    }
    if (strstr(dati, "XXS") || strstr(dati, "XS") || strstr(dati, "S"))
    {
        printf("la taglia corrispondente europea é 32 o 34 o 36.\n");
    }
    if (strstr(dati, "M"))
    {
        printf("la taglia corrispondente europea é 38.\n");
    }
    if (strstr(dati, "L") || strstr(dati, "XL"))
    {
        printf("la taglia corrispondente europea é 40 o 42.\n");
    }   
}
void allergie_tessuti(char *dati)
{
    if (strstr(dati, "lana") || strstr(dati, " seta "))
    {
        printf(" se sei allergico alla lana o alla seta ti consigliamo di indossare la canapa biologica o la seta biologica certificata. \n");
    }
    if (strstr(dati, "nylon") || strstr(dati, "lycra") || strstr(dati, "poliestere"))
    {
        printf(" se sei allergico al nylon o alla lycra o al poliestere ti consigliamo di indossare abiti derivati da fibre naturali. \n");
    }
}

void budgettino()
{
    printf(" Quanto vuoi spendere per l'acquisto dei nuovi capi? \n");
}

void budget(int a)
{
    if( a >= 0 && a <= 150)
    {
        printf("i negozi che ti consigliamo sono temu,shein,zara,H&M e bershka. \n");
    }
    else if( a > 150 && a < 500)
    {
        printf("i negozi che ti consigliamo sono nike,octopus,micheal kors,calvin klein,adidas,ralph lauren,ray ban etc... \n");
    }
    else
    {
        printf("i negozi che ti consigliamo sono gucci,dior,bulgari,fendi,balenciaga,prada,dodo. \n");
    }


}
int main()
{
    char dati[100];
    char soldi[100];
    int a;
    saluto();
    scanf(" %[^\n]s" ,dati);
    // printf(" %s\n" , dati);
    printf("caricamento \n");
    colore(dati);
    taglia(dati);
    allergie_tessuti(dati);
    budgettino();
    scanf(" %d" , &a);
    budget(a);

    
}