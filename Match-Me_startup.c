#include <stdio.h>
#include <string.h>
void saluto()
{
    printf("ciao, sono  Match-me, un software che ti suggerisce i colori che si abbinano ad un determinato tessuto e ti creo outfit con capi di vari brand. \nInserisci foto o dati del tuo capo(colore,taglie (europee e internazionali) in maiuscolo,eventuali allergie a tessuti) per farmelo abbinare. \n");
}
void colore(char *dati)
{
    if (strstr(dati, "nero") || strstr(dati, "nera") || strstr(dati, "nere") || strstr(dati, "neri"))
    {
        printf("tutti i colori stanno bene con il nero tranne il blu.\n\n");
    }
    if (strstr(dati, "rosso") || strstr(dati, "rossa") || strstr(dati, "rosse") || strstr(dati, "rossi"))
    {
        printf("i colori che stanno bene con il rosso sono il nero,il bianco,sfumature dello stesso colore,il blu.\n\n");
    }
    if (strstr(dati, "giallo") || strstr(dati, "gialla") || strstr(dati, "gialle") || strstr(dati, "gialli"))
    {
        printf(" i colori che stanno bene con il giallo sono grigio,arancione,beige.\n\n");
    }
    if (strstr(dati, "verde") || strstr(dati,"verdi"))
    {
        printf("i colori che stanno bene con il verde sono il rosa,grigio,sfumature dello stesso colore,marrone,viola.\n\n");
    }
    if (strstr(dati, "blu"))
    {
        printf("i colori che stanno bene con il blu sono rosso,giallo,bianco,grigio,viola e altre sfumeture.\n\n");
    }
    if (strstr(dati, "bianco") || strstr(dati, "bianca") || strstr(dati, "bianche") || strstr(dati, "bianchi"))
    {
        printf("i colori che stanno bene con il bianco sono azzuro,verde scuro,rosa,viola e marrone.\n\n");

    }
}
void taglia(char *dati)
{
    if (strstr(dati, "32") || strstr(dati, " 34"))
    {
        printf("la taglia corrispondente internazionale é XXS o XS.\n\n");
    }
    if (strstr(dati, "36") || strstr(dati, "38"))
    {
        printf("la taglia corrispondente internazionale é S o M.\n\n");
    }
    if (strstr(dati, "40") || strstr(dati, "42"))
    {
        printf("la taglia corrispondente internazionale é L o M.\n\n");
    }
    if (strstr(dati, "XXS") || strstr(dati, "XS") || strstr(dati, "S"))
    {
        printf("la taglia corrispondente europea é 32 o 34 o 36.\n\n");
    }
    if (strstr(dati, "M"))
    {
        printf("la taglia corrispondente europea é 38.\n\n");
    }
    if (strstr(dati, "L") || strstr(dati, "XL"))
    {
        printf("la taglia corrispondente europea é 40 o 42.\n\n");
    }   
}
void allergie_tessuti(char *dati)
{
    if (strstr(dati, "lana") || strstr(dati, " seta "))
    {
        printf("se sei allergico alla lana o alla seta ti consigliamo di indossare la canapa biologica o la seta biologica certificata.\n\n");
    }
    if (strstr(dati, "nylon") || strstr(dati, "lycra") || strstr(dati, "poliestere"))
    {
        printf("se sei allergico al nylon o alla lycra o al poliestere ti consigliamo di indossare abiti derivati da fibre naturali.\n\n");
    }
}

void budgettino()
{
    printf("Quanto vuoi spendere per l'acquisto dei nuovi capi?\n");
}

void budget(int a)
{
    if( a >= 0 && a <= 150)
    {
        printf("i negozi che ti consigliamo sono temu,shein,zara,H&M e bershka.\n\n");
    }
    else if( a > 150 && a <= 500)
    {
        printf("i negozi che ti consigliamo sono nike,octopus,micheal kors,calvin klein,adidas,ralph lauren,ray ban etc...\n\n");
    }
    else if( a > 500)
    {
        printf("i negozi che ti consigliamo sono gucci,dior,bulgari,fendi,balenciaga,prada,dodo.\n\n");
    }


}
void tipo_di_capo()
{
    printf("Quale tipo di capo ti interesserebbe abbinare con quello da te proposto?\n");
}
void vestiti(char *vestito)
{
    if(strstr(vestito, "pantalone"))
    {
        printf("caricamento foto outfit pantalone...\n\n");
    }
    if(strstr(vestito, "maglietta"))
    {
        printf("caricamento foto outfit magliette...\n\n");
    }
    if(strstr(vestito, "scarpe"))
    {
        printf("caricamento foto outfit scarpe...\n\n");
    }
    if(strstr(vestito, "accessori"))
    {
        printf("caricamento foto outfit accessori...\n\n");
    }
}
void link(int a)
{
    if( a >= 0 && a <= 150)
    {
      printf("Questi sono i link dei brand che ti proponiamo;\n\nBershka:https://www.bershka.com/it/?utm_source=google&utm_medium=cpc&utm_campaign=BSK_PER_AO_GADS_IT_SEARCH_BRAND_WEB_MIX&gad_source=1&gclid=EAIaIQobChMIjveJyPH1hAMVx4toCR0_bQa1EAAYASAAEgLBj_D_BwE\n\nhttps://www.zara.com/it/\n\ntemu:https://www.temu.com/it?_bg_fs=1&_p_jump_id=10&_x_vst_scene=adg&_p_rfs=1&_x_ads_sub_channel=search&_x_ads_channel=google&_x_ads_account=6819862737&_x_ads_set=20030765992&_x_ads_id=151944540601&_x_ads_creative_id=658868582108&_x_ns_source=g&_x_ns_gclid=EAIaIQobChMI-aKc5fH1hAMV9KloCR0jGQHfEAAYASAAEgJmMfD_BwE&_x_ns_placement=&_x_ns_match_type=e&_x_ns_ad_position=&_x_ns_product_id=&_x_ns_target=&_x_ns_devicemodel=&_x_ns_wbraid=Cj8KCQjwwMqvBhCZARIuAF39vkq58jBUdBOYA3CgxotXQTQszurM2zsLopPfajTLRxVGcG8Q7BtYi1HQeRoC1Xg&_x_ns_gbraid=0AAAAAo4mICFNaLt2grIv6ViNdt7u7KH91&_x_ns_keyword=temu&_x_ns_targetid=kwd-4583699489&gad_source=1&gclid=EAIaIQobChMI-aKc5fH1hAMV9KloCR0jGQHfEAAYASAAEgJmMfD_BwE\n\nshein:https://it.shein.com/?affiliateID=1118196&url_from=admitad.com&click_id=0791de419b6e55e904ef16494868ec83&admitad_uid=0791de419b6e55e904ef16494868ec83\n\nH&M:https://www2.hm.com/it_it/index.html\n\n");
    }
    else if( a > 150 && a <= 500)
    {
        printf("Questi sono i link dei brand che ti proponiamo;\n\nNike:https://www.nike.com/it/?cp=10371701324_search_&Macro=-nike-g-10574001725-104726557135-e-c-IT-pure-452221806664-kwd-11642601-9181214&ds_rl=1252249&gad_source=1&gclid=EAIaIQobChMIisGNiPj1hAMV5AkGAB3ovQH0EAAYASAAEgLsvPD_BwE&gclsrc=aw.ds\n\nOctopus:https://www.octopusbrand.com/it/catalogue?gad_source=1&gclid=EAIaIQobChMIw4Convj1hAMV1zgGAB35qQmcEAAYAiAAEgL_6vD_BwE\n\nMicheal Kors:https://www.michaelkors.it/?ecid=MKS_IT_It_TM&gad_source=1&gclid=EAIaIQobChMI6p_vxvj1hAMVNZODBx1hAgFEEAAYASAAEgIxMvD_BwE&gclsrc=aw.ds\n\nCalvin Klein:https://www.calvinklein.it/?cmpid=ch:cpc|so:google|ca:calvin klein|cr:613295907774|lb:17744432859|ag:141888171314|pi:kwd-11661971&gad_source=1&gclid=EAIaIQobChMI-svR2fj1hAMV3ZdQBh2zGwP9EAAYASAAEgI9iPD_BwE&gclsrc=aw.ds\n\nAdidas:https://www.adidas.it/\n\nRalph Lauren:https://www.ralphlauren.it/en?utm_subchannel=brandsearch&utm_source=google&utm_medium=paidsearch&utm_campaign=brand&utm_term=core_exact&utm_content=cid20493597117_crid687877799022_kwralph lauren_tidkwd-11662081_pid{productid}&s_kwcid=AL!6316!3!687877799022!e!!g!!ralph lauren&label=Spring-2024&gad_source=1&gclid=EAIaIQobChMI5a6Kzf_1hAMVfJZQBh2pMwSJEAAYASAAEgLORfD_BwE\n\nRay Ban:https://www.ray-ban.com/italy/occhiali-da-sole/vedi-tutto?cid=PM-SGA_300419-1.IT-RayBan-IT-B-NA-Core-Exact-Prs-NA-Ecom-NA_IT-Brand-Core_ray+ban&s_kwcid=AL!16196!3!585801288938!e!!g!!ray ban!267195020!19267876700&gad_source=1&gclid=EAIaIQobChMIqv2f4P_1hAMV6ZVQBh13cwX-EAAYASAAEgIrI_D_BwE&gclsrc=aw.ds\n\n");
    }
    else if ( a > 500)
    {
        printf("Questi sono i link dei brand che ti proponiamo;\n\nGucci:https://www.gucci.com/it/it/?gad_source=1&gclid=EAIaIQobChMI296EjoH2hAMVrJWDBx27bgw6EAAYASAAEgKXQ_D_BwE&gclsrc=aw.ds\n\nDior:https://www.dior.com/it_it?gad_source=1&gclid=EAIaIQobChMI4-XAm4H2hAMVb5FQBh3gzgjXEAAYASAAEgI4gPD_BwE\n\nBulgari:https://www.bulgari.com/it-it/?gad_source=1&gclid=EAIaIQobChMIs5vxr4H2hAMVgqhoCR2CyQgJEAAYAiAAEgK8ufD_BwE&gclsrc=aw.ds\n\nFendi:https://www.fendi.com/it-it/?gad_source=1&gclid=EAIaIQobChMI3rLHwoH2hAMV0KeDBx3XNA6LEAAYASAAEgKmx_D_BwE&gclsrc=aw.ds\n\nPrada:https://www.prada.com/it/it.html?utm_campaign=GoogleSearch_IT&utm_medium=CPC&utm_source=Google&utm_content=Pure_Brand_Exact&s_kwcid=AL!8549!3!688889428545!e!!g!!prada&gad_source=1&gclid=EAIaIQobChMIyNL13YH2hAMVyREGAB3t_wM4EAAYASAAEgKwPfD_BwE&gclsrc=aw.ds\n\nDodo:https://www.dodo.it/it_it/?gad_source=1&gclid=EAIaIQobChMI0-DT74H2hAMVl5NoCR22-ATQEAAYASAAEgI1l_D_BwE\n\n");
    }
}
void abbonamenti()
{
    printf(" Ti proponiamo anche i nostri due abbbonamenti;\n-il Plus: a soli 3.99€ al mese con sconti e voucher nei siti di shein,bershka e zara\n-il Pro: a 6.99€ al mese avrai sconti oltre che su i siti del Plus, anche su Ralph Lauren,Octopus e Micheal Kors\n\n\nAffinché tu possa salvare i tuoi abbinamenti e usufruire degli abbonamenti, ti consigliamo di iscriverti a Match-me.\nAttiva le notifiche in app e iscriviti alla newsletter per non perdere ogni nuovo abbinamento.\n");
}
void arrivederci()
{
    printf("Ti ringraziamo per averci scelto e alla prossima :)!\n");
}
int main()
{
    char dati[100];
    char soldi[100];
    int a;
    char vestito[100];
    saluto();
    scanf(" %[^\n]s\n\n" ,dati);
    // printf(" %s\n" , dati);
    printf("caricamento...\n\n");
    colore(dati);
    taglia(dati);
    allergie_tessuti(dati);
    budgettino();
    scanf("%d" , &a);
    budget(a);
    tipo_di_capo();
    scanf(" %[^\n]s\n\n" ,vestito);
    vestiti(vestito);
    link(a);
    abbonamenti();
    arrivederci();

    
}