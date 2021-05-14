#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

void Start();
void Stats();
void info();
void Klasse(int *hp, int *atk, int *hard, int *xp);


void Befehle(char befehl[],int *x, int *coins, int *Heiltrank, int *Hhp, int *Hlp,
             int *Hcp, int *tnd, int *atk, int *hp, int *lv, int *Highscore, int *slv,
             int *scoin, int *ruelv, int *rcoin, int *stlv, int *stpu, int *stcoin,
             int *hplv, int *hppu, int *hpcoin, int *hard, int *atkt, int *hpt, char name[],
             int *xp, int *end, int *uend, int *gegner, int *pxp);


void Magieshop(int **coins, int **Heiltrank, int **Hhp, int **Hlp, int **Hcp,
               int **stlv, int **stpu, int **stcoin,int **hplv,
               int **hppu, int **hpcoin, int **hard, int **atkt, int **hpt);

void Werkstatt(int **coins, int **atk, int **hp,  int **slv, int **scoin, int **ruelv, int **rcoin,int **hard);
void Level(int ***lv, int ***pxp, int ***xp, int ***hp, int ***atk, char name[]);
void Ksys(char handel[], int *z);
void Inventar(int *HP, int ***hp, int ***Heiltrank, char name[], int ***Hhp, int ***Hlp);
void inventar2(int **hp, int **atk, int **stlv, int **stpu, int **hplv, int **hppu, int **atkt, int **hpt);

void Load(char name[], int **atk, int **hp, int **pxp, int **xp, int **lv, int **coins, int **Heiltrank, int **Hhp,
          int **Hlp, int **Hcp, int **Highscore, int **slv, int **scoin, int **ruelv, int **rcoin, int **stlv,
          int ** stpu, int **stcoin, int **hplv, int **hppu, int **hpcoin, int **hard, int **atkt, int **hpt,
          int **end, int **uend, int **gegner);

void Save(char name[], int **atk, int **hp, int **pxp, int **xp, int **lv, int **coins, int **Heiltrank, int **Hhp,
          int **Hlp, int **Hcp, int **Highscore, int **slv, int **scoin, int **ruelv, int **rcoin, int **stlv,
          int ** stpu, int **stcoin, int **hplv, int **hppu, int **hpcoin, int **hard, int **atkt, int **hpt,
          int **end, int **uend, int **gegner);

void IntToString(int ***zahl, FILE* datei);
int StringToInt(char string[]);
int StringToInt1(char string[]);

void Dungeon(int *lv, int *pxp, int *xp, int *hp, int *atk, char name[], int *tnd, int *coins, int *Heiltrank, int *Highscore, int *Hhp, int *Hlp, int *end, int *uend);
void Dg1(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg2(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg3(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg4(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg5(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg6(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg7(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg8(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg9(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg10(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg11(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg12(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg13(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg14(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg15(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg16(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg17(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg18(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg19(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg20(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg21(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg22(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg23(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg24(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg25(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg26(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg27(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg28(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg29(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg30(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg31(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg32(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg33(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg34(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg35(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg36(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg37(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg38(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg39(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg40(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg41(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg42(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg43(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg44(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg45(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg46(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg47(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg48(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg49(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp);
void Dg50(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp, int **end, int **uend);



void Hackmarkt(int **atk, int **hp, int **coins, int **lv, int **Highscore, int **atkt, int **hpt);


int main ()
{
    int lv=1, pxp=0, xp;  // lv der Spieler, xp von Spieler und nötige xp
    int hp, atk;        // Heilungspunkt, Angriffsschaden

    char name[35];         // Name der Spieler
    char befehl[20];         // befehle
    int x=0, tnd=0;
    int coins=0, Heiltrank=0;
    int Hhp=20, Hlp=1, Hcp=25;
    int Highscore=0;
    char enter;

    int slv=1, scoin=250, ruelv=1, rcoin=350;

    int stlv=1, stpu=4, stcoin, hplv=1, hppu=15, hpcoin; // Magieshop
    int hard;
    int atkt=0, hpt=0, ok=0;

    int end=0, uend=1, gegner=0;

    Start();

    while(ok==0){
        printf("\n(1 to 30 Character long!)\n");
        printf("Name: ");
        gets(name);
        int l = strlen(name);

        if(l>=1&&l<=30){
            ok=1;
        }else{
            printf("\n");
        }

    }

    printf("---------------------------------------------------------------------------\n\n");
    Klasse(&hp,&atk,&hard,&xp);
    printf("---------------------------------------------------------------------------\n\n");

    if(hard==0)
    {
        stcoin=300;
        hpcoin=500;

    }
    else if(hard==1)
    {
        stcoin=850;
        hpcoin=1000;
    }

    while(tnd!=1)
    {
        if(tnd!=1)
        {
            printf("Command: ");
        }
        gets(befehl);

        Befehle(befehl,&x,&coins,&Heiltrank,&Hhp,&Hlp,&Hcp,&tnd,&atk,
                &hp,&lv,&Highscore,&slv,&scoin,&ruelv,&rcoin,&stlv,&stpu,
                &stcoin,&hplv,&hppu,&hpcoin,&hard,&atkt,&hpt,name,&xp,&end,
                &uend,&gegner,&pxp);

        if(x==1)
        {
            Dungeon(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,
                    &Highscore,&Hhp,&Hlp,&end,&uend);
                    gegner++;

        }
        x=0;



        if(end==1){

            end=2;

            printf("Congratulations, you complete that game!\n");
            printf("\nYour Stats and Items:\n\n");
            printf("%s  lv. %d\n", name, lv);
            printf("HP %d\n", hp);
            printf("ATK %d\n", atk);
            printf("Enemy defeated: %d\n", gegner);
            printf("(lv. %d) Sword\n", slv);
            printf("(lv. %d) Armor\n", ruelv);
            printf("(lv. %d) Heal Potion: %d\n", Hlp, Hhp);
            printf("(lv. %d) ATK Potion: %d\n", stlv, stpu);
            printf("(lv. %d) HP Potion: %d\n", hplv, hppu);
            printf("---------------------------------------------------------------------------\n\n");

        }

    }

    printf("\n%s has %d points\n", name, Highscore);

    printf("\nPress enter: ");
    scanf("%c", &enter);

    return 0;
}

void Start()
{

    printf("Version 1.5.5\n");
    printf("Welcome to Code Dungeon!\n");
    printf("In command, use -> ? <- for informationen of commands\n");
    printf("Give your Name and the game can start!\n\n");

}

void Klasse(int *hp, int *atk, int *hard, int *xp)
{
    int stopp=0;
    char klasse[8];


    while(stopp!=1)
    {
        printf("Choose your class!:\n\n");

        printf("Knight = 35 HP, 10 ATK, need XP 30\n");
        printf("Warrior = 15 HP,  15 ATK, need XP 15\n");
        printf("Master = 9 HP, 15 ATK, need XP 135 and\n");
        printf("               Potion, upgrades... cost expensive\n\n");

        printf("Class: ");
        gets(klasse);


        if(klasse[0]=='K'&&klasse[1]=='n'&&klasse[2]=='i'&&klasse[3]=='g'&&
           klasse[4]=='h'&&klasse[5]=='t'&&klasse[6]=='\0'){

            (*hp)=35;
            (*atk)=10;
            (*xp)=30;
            (*hard)=0;
            stopp=1;

        }else if(klasse[0]=='W'&&klasse[1]=='a'&&klasse[2]=='r'&&klasse[3]=='r'&&
           klasse[4]=='i'&&klasse[5]=='o'&&klasse[6]=='r'&&klasse[7]=='\0'){

            (*hp)=15;
            (*atk)=15;
            (*xp)=15;
            (*hard)=0;
            stopp=1;

        }else if(klasse[0]=='M'&&klasse[1]=='a'&&klasse[2]=='s'&&klasse[3]=='t'&&
           klasse[4]=='e'&&klasse[5]=='r'&&klasse[6]=='\0'){
            (*hp)=9;
            (*atk)=15;
            (*xp)=135;
            (*hard)=1;
            stopp=1;

           }else{

            printf("\nWrong command\n\n");

           }

    }

}


void info()
{

    printf("\n\nBefehl:\n");
    printf("> hm        : search enemy\n");
    printf("> Magicshop : Buy Potion\n");
    printf("> Smith     : Upgrade your Armor and Sword\n");
    printf("> inventory : go in inventory\n");
    printf("> end       : leave the game\n");
    printf("> save      : save game progress\n");
    printf("> load      : load game progress\n");
    printf("\nInventory:\n");
    printf("> ATK       : Upgrade your ATK\n");
    printf("> HP        : Upgrade your HP\n");
    printf("> leave     : leave the Inventory\n");
    printf("\nFightCommand:\n");
    printf("> attack    : Attack\n");
    printf("> stats     : Show the Stats of Player and Enemy\n");
    printf("> HmInv     : Open your Hm Inventory\n");
    printf("> Ht        : Drink a Heal Potion(Only in HmInv)\n");
    printf("\nMagicshop:\n");
    printf("> leave     : leave the Shop\n");
    printf("> upgrade   : Show Upgrades\n");
    printf("> Htlv      : Upgrade the Heal Potion\n");
    printf("> Ht        : Buy a Heal Potion\n");
    printf("> Atlv      : Upgrade the ATK Potion\n");
    printf("> At        : Buy a ATK Potion\n");
    printf("> htlv      : Upgrade the HP Potion\n");
    printf("> ht        : Buy a HP Potion\n");
    printf("> end       : leave the upgrade\n");
    printf("\nSmith:\n");
    printf("> SwordUpgd : Upgrade the Sword\n");
    printf("> ArmorUpgd : Upgrade the Armor\n");
    printf("> leave     : leave Smith\n");
    printf("\nSave/Load:\n");
    printf("> L : Leave Save/Load(Only on command [YES/NO]!)\n");
    printf("---------------------------------------------------------------------------\n\n\n");

}

void Befehle(char befehl[], int *x, int *coins, int *Heiltrank, int *Hhp, int *Hlp, int *Hcp, int *tnd, int *atk,
             int *hp, int *lv, int *Highscore, int *slv, int *scoin, int *ruelv, int *rcoin, int *stlv,
             int *stpu, int *stcoin, int *hplv, int *hppu, int *hpcoin, int *hard, int *atkt, int *hpt, char name[],
             int *xp, int*end, int *uend, int *gegner, int *pxp)
{

    if(befehl[0]=='?'&&befehl[1]=='\0')
    {
        info();
    }
    else if(befehl[0]=='h'&&befehl[1]=='m'&&befehl[2]=='\0')
    {
        (*x)=1;
    }
    else if(befehl[0]=='M'&&befehl[1]=='a'&&befehl[2]=='g'&&befehl[3]=='i'&&befehl[4]=='c'&&befehl[5]=='s'&&
            befehl[6]=='h'&&befehl[7]=='o'&&befehl[8]=='p'&&befehl[9]=='\0')
    {

        Magieshop(&coins,&Heiltrank,&Hhp,&Hlp,&Hcp,&stlv,&stpu,&stcoin,&hplv,&hppu,&hpcoin,&hard,&atkt,&hpt);
    }
    else if(befehl[0]=='S'&&befehl[1]=='m'&&befehl[2]=='i'&&befehl[3]=='t'&&befehl[4]=='h'&&befehl[5]=='\0')
    {

        Werkstatt(&coins,&atk,&hp,&slv,&scoin,&ruelv,&rcoin,&hard);
    }
    else if(befehl[0]=='i'&&befehl[1]=='n'&&befehl[2]=='v'&&befehl[3]=='e'&&befehl[4]=='n'&&befehl[5]=='t'&&
            befehl[6]=='o'&&befehl[7]=='r'&&befehl[8]=='y'&&befehl[9]=='\0')
    {

        inventar2(&hp,&atk,&stlv,&stpu,&hplv,&hppu,&atkt,&hpt);
    }
    else if(befehl[0]=='u'&&befehl[1]=='N'&&befehl[2]=='d'&&befehl[3]=='3'&&befehl[4]=='r'&&befehl[5]=='-'&&
            befehl[6]=='C'&&befehl[7]=='D'&&befehl[8]=='-'&&befehl[9]=='7'&&befehl[10]=='4'&&befehl[11]=='1'&&
            befehl[12]=='3'&&befehl[13]=='\0')
    {
        Hackmarkt(&atk,&hp,&coins,&lv,&Highscore,&atkt,&hpt);
    }
    else if(befehl[0]=='s'&&befehl[1]=='a'&&befehl[2]=='v'&&befehl[3]=='e'&&befehl[4]=='\0')
    {
        Save(name,&atk,&hp,&pxp,&xp,&lv,&coins,&Heiltrank,&Hhp,&Hlp,&Hcp,&Highscore,&slv,&scoin,&ruelv,&rcoin,&stlv,
             &stpu,&stcoin,&hplv,&hppu,&hpcoin,&hard,&atkt,&hpt,&end,&uend,&gegner);
    }
    else if(befehl[0]=='l'&&befehl[1]=='o'&&befehl[2]=='a'&&befehl[3]=='d'&&befehl[4]=='\0')
    {
        Load(name,&atk,&hp,&pxp,&xp,&lv,&coins,&Heiltrank,&Hhp,&Hlp,&Hcp,&Highscore,&slv,&scoin,&ruelv,&rcoin,&stlv,
             &stpu,&stcoin,&hplv,&hppu,&hpcoin,&hard,&atkt,&hpt,&end,&uend,&gegner);
    }
    else if(befehl[0]=='e'&&befehl[1]=='n'&&befehl[2]=='d'&&befehl[3]=='\0')
    {
        (*tnd)=1;
    }
    else
    {

    }

}

void ZahlToString(int *zahl, FILE* datei){
    char number[100], help;
    int i=0, j, length=0;

    while((*zahl)>0){

        number[i]=((*zahl)%10)+48;
        i++;
        (*zahl)/=10;
        length++;

    }

    if(length%2==0){

        for(i=0, j=length-1;i<j;i++,j--){
            help=number[i];
            number[i]=number[j];
            number[j]=help;
        }

    }else{

        for(i=0, j=length-1;i!=j;i++,j--){
            help=number[i];
            number[i]=number[j];
            number[j]=help;
        }

    }

    number[length]='\0';

    fputs(number,datei);

}

int StringToInt(char string[]){
    int z;

    if(string[0]=='1'&&string[1]=='\0'){
        z=string[0]-48;
    }else if(string[0]=='2'&&string[1]=='\0'){
        z=string[0]-48;
    }else if(string[0]=='3'&&string[1]=='\0'){
        z=string[0]-48;
    }else if(string[0]=='4'&&string[1]=='\0'){
        z=string[0]-48;
    }else if(string[0]=='5'&&string[1]=='\0'){
        z=string[0]-48;
    }else{
        z=8;
    }

    return z;
}

int StringToInt1(char string[]){
    int length = strlen(string), i;
    int zahl=0;

    for(i=0;i<length;i++){

        zahl+=string[i]-48;
        zahl*=10;

    }

    zahl/=10;

    return zahl;
}

void Save(char name[], int **atk, int **hp, int **pxp, int **xp, int **lv, int **coins, int **Heiltrank, int **Hhp,
          int **Hlp, int **Hcp, int **Highscore, int **slv, int **scoin, int **ruelv, int **rcoin, int **stlv,
          int ** stpu, int **stcoin, int **hplv, int **hppu, int **hpcoin, int **hard, int **atkt, int **hpt,
          int **end, int **uend, int **gegner){

    FILE *datei;
    int stopp=0, z, stp=0;
    char jn[5], file[20];
    char string[10], name1[30];

    printf("\n---------------------------------------------------------------------------\n");

    while(stopp==0){

        printf("Where do you want save(1 bis 5): ");
        gets(string);
        z=StringToInt(string);
        printf("\n");

        if(z>=1&&z<=5){

            printf("Are you sure?[YES/NO]: ");
            gets(jn);

            if(jn[0]=='Y'&&jn[1]=='E'&&jn[2]=='S'&&jn[3]=='\0'){
                stopp=1;
                printf("\n");
            }else if(jn[0]=='L'&&jn[1]=='\0'){
                stopp=1;
                stp=1;
            }
            else{
                printf("\n");
            }

        }else{
            printf("\n");
        }

    }

    if(stp==0){
        if(z==1){
            strcpy(file,"save\\File1.txt");
        }
        else if(z==2){
            strcpy(file,"save\\File2.txt");
        }
        else if(z==3){
            strcpy(file,"save\\File3.txt");
        }
        else if(z==4){
            strcpy(file,"save\\File4.txt");
        }
        else if(z==5){
            strcpy(file,"save\\File5.txt");
        }

        datei = fopen(file,"w");

        strcpy(name1,name);

        int atkd=(**atk), hpp=(**hp), pxpp=(**pxp), xpp=(**xp);
        int ccoins=(**coins), HHeiltrank=(**Heiltrank), rruelv=(**ruelv);
        int rrcoin=(**rcoin), sstcoin=(**stcoin), hhplv=(**hplv);
        int hppud=(**hppu), hardd=(**hard), atktd=(**atkt), lvd=(**lv), Hhpd=(**Hhp);
        int Hlpd=(**Hlp), Highscored=(**Highscore), slvd=(**slv), stlvd=(**stlv);
        int scoind=(**scoin), gegnerd=(**gegner), hpcoind=(**hpcoin), Hcpd=(**Hcp);
        int stpud=(**stpu), endd=(**end), hptd=(**hpt), uendd=(**uend);

        fputs(name1,datei);
        fputs(";",datei);
        ZahlToString(&atkd,datei);
        fputs(";",datei);

        if(ccoins!=0){
        ZahlToString(&ccoins,datei);
        fputs(";",datei);
        }else{
            fputs("-;",datei);
        }

        if(HHeiltrank!=0){
        ZahlToString(&HHeiltrank,datei);
        fputs(";",datei);
        }else{
            fputs("-;",datei);
        }

        ZahlToString(&xpp,datei);
        fputs(";",datei);
        ZahlToString(&hpp,datei);
        fputs(";",datei);
        ZahlToString(&rruelv,datei);
        fputs(";",datei);
        ZahlToString(&rrcoin,datei);
        fputs(";",datei);
        ZahlToString(&sstcoin,datei);
        fputs(";",datei);
        ZahlToString(&hhplv,datei);
        fputs(";",datei);
        ZahlToString(&hppud,datei);
        fputs(";",datei);

        if(hardd!=0){
        ZahlToString(&hardd,datei);
        fputs(";",datei);
        }else{
            fputs("-;",datei);
        }

        if(atktd!=0){
        ZahlToString(&atktd,datei);
        fputs(";",datei);
        }else{
            fputs("-;",datei);
        }

        ZahlToString(&lvd,datei);
        fputs(";",datei);
        ZahlToString(&Hhpd,datei);
        fputs(";",datei);
        ZahlToString(&Hlpd,datei);
        fputs(";",datei);

        if(Highscored!=0){
        ZahlToString(&Highscored,datei);
        fputs(";",datei);
        }else{
            fputs("-;",datei);
        }

        if(pxpp!=0){
        ZahlToString(&pxpp,datei);
        fputs(";",datei);
        }else{
            fputs("-;",datei);
        }

        ZahlToString(&slvd,datei);
        fputs(";",datei);
        ZahlToString(&stlvd,datei);
        fputs(";",datei);
        ZahlToString(&scoind,datei);
        fputs(";",datei);

        if(gegnerd!=0){
        ZahlToString(&gegnerd,datei);
        fputs(";",datei);
        }else{
            fputs("-;",datei);
        }

        ZahlToString(&hpcoind,datei);
        fputs(";",datei);
        ZahlToString(&Hcpd,datei);
        fputs(";",datei);
        ZahlToString(&stpud,datei);
        fputs(";",datei);

        if(endd!=0){
        ZahlToString(&endd,datei);
        fputs(";",datei);
        }else{
            fputs("-;",datei);
        }

        if(hptd!=0){
        ZahlToString(&hptd,datei);
        fputs(";",datei);
        }else{
            fputs("-;",datei);
        }

        ZahlToString(&uendd,datei);

        fclose(datei);

        printf("\nGAME SAVED!\n");

          }

    printf("\n---------------------------------------------------------------------------\n");

}

void Load(char name[], int **atk, int **hp, int **pxp, int **xp, int **lv, int **coins, int **Heiltrank, int **Hhp,
          int **Hlp, int **Hcp, int **Highscore, int **slv, int **scoin, int **ruelv, int **rcoin, int **stlv,
          int ** stpu, int **stcoin, int **hplv, int **hppu, int **hpcoin, int **hard, int **atkt, int **hpt,
          int **end, int **uend, int **gegner){

    FILE *datei;
    int stopp=0, stp=0, z;
    char jain[5], file[20];
    char string[10], dstring[150];
    char *vstring, zeiche[5]={"-"};

    printf("\n---------------------------------------------------------------------------\n");


    while(stopp==0){

        printf("Where do you want save(1 bis 5): ");
        gets(string);
        z=StringToInt(string);
        printf("\n");

        if(z>=1&&z<=5){

            printf("Are you sure?[YES/NO]: ");
            gets(jain);

            if(jain[0]=='Y'&&jain[1]=='E'&&jain[2]=='S'&&jain[3]=='\0'){
                stopp=1;
                printf("\n");
            }else if(jain[0]=='L'&&jain[1]=='\0'){
                stopp=1;
                stp=1;
                printf("\n---------------------------------------------------------------------------\n");
            }else{
                printf("\n");
            }

        }else{
            printf("\n");
        }

    }


    if(stp==0){

        if(z==1){
            strcpy(file,"save\\File1.txt");
        }
        else if(z==2){
            strcpy(file,"save\\File2.txt");
        }
        else if(z==3){
            strcpy(file,"save\\File3.txt");
        }
        else if(z==4){
            strcpy(file,"save\\File4.txt");
        }
        else if(z==5){
            strcpy(file,"save\\File5.txt");
        }

        datei = fopen(file,"r");

            fgets(dstring,150,datei);

            vstring=strtok(dstring,";");
            strcpy(name,vstring);
            vstring=strtok(NULL,";");
            (**atk)=StringToInt1(vstring);

            vstring=strtok(NULL,";");
            if(strcmp(vstring,zeiche)==0){
                (**coins)=0;
            }else{
                (**coins)=StringToInt1(vstring);
            }

            vstring=strtok(NULL,";");
            if(strcmp(vstring,zeiche)==0){
                (**Heiltrank)=0;
            }else{
                (**Heiltrank)=StringToInt1(vstring);
            }

            vstring=strtok(NULL,";");
            (**xp)=StringToInt1(vstring);
            vstring=strtok(NULL,";");
            (**hp)=StringToInt1(vstring);
            vstring=strtok(NULL,";");
            (**ruelv)=StringToInt1(vstring);
            vstring=strtok(NULL,";");
            (**rcoin)=StringToInt1(vstring);
            vstring=strtok(NULL,";");
            (**stcoin)=StringToInt1(vstring);
            vstring=strtok(NULL,";");
            (**hplv)=StringToInt1(vstring);
            vstring=strtok(NULL,";");
            (**hppu)=StringToInt1(vstring);

            vstring=strtok(NULL,";");
            if(strcmp(vstring,zeiche)==0){
                (**hard)=0;
            }else{
                (**hard)=StringToInt1(vstring);
            }

            vstring=strtok(NULL,";");
            if(strcmp(vstring,zeiche)==0){
                (**atkt)=0;
            }else{
                (**atkt)=StringToInt1(vstring);
            }

            vstring=strtok(NULL,";");
            (**lv)=StringToInt1(vstring);
            vstring=strtok(NULL,";");
            (**Hhp)=StringToInt1(vstring);
            vstring=strtok(NULL,";");
            (**Hlp)=StringToInt1(vstring);

            vstring=strtok(NULL,";");
            if(strcmp(vstring,zeiche)==0){
                (**Highscore)=0;
            }else{
                (**Highscore)=StringToInt1(vstring);
            }

            vstring=strtok(NULL,";");
            if(strcmp(vstring,zeiche)==0){
                (**pxp)=0;
            }else{
                (**pxp)=StringToInt1(vstring);
            }

            vstring=strtok(NULL,";");
            (**slv)=StringToInt1(vstring);
            vstring=strtok(NULL,";");
            (**stlv)=StringToInt1(vstring);
            vstring=strtok(NULL,";");
            (**scoin)=StringToInt1(vstring);

            vstring=strtok(NULL,";");
            if(strcmp(vstring,zeiche)==0){
                (**gegner)=0;
            }else{
                (**gegner)=StringToInt1(vstring);
            }

            vstring=strtok(NULL,";");
            (**hpcoin)=StringToInt1(vstring);
            vstring=strtok(NULL,";");
            (**Hcp)=StringToInt1(vstring);
            vstring=strtok(NULL,";");
            (**stpu)=StringToInt1(vstring);

            vstring=strtok(NULL,";");
            if(strcmp(vstring,zeiche)==0){
                (**end)=0;
            }else{
                (**end)=StringToInt1(vstring);
            }

            vstring=strtok(NULL,";");
            if(strcmp(vstring,zeiche)==0){
                (**hpt)=0;
            }else{
                (**hpt)=StringToInt1(vstring);
            }

            vstring=strtok(NULL,";");
            (**uend)=StringToInt1(vstring);

        fclose(datei);

        printf("\nGAME LOADED!\n");



    printf("\n---------------------------------------------------------------------------\n");

    }
    }

//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------

void Hackmarkt(int **atk, int **hp, int **coins, int **lv, int **Highscore, int **atkt, int **hpt)
{
    int stopp=0;
    char hackcode[20]="";

    while(stopp!=1)
    {

        printf("\nHackCode: ");
        gets(hackcode);

        if(hackcode[0]=='e'&&hackcode[1]=='x'&&hackcode[2]=='t'&&hackcode[3]=='r'&&hackcode[4]=='a'&&
                hackcode[5]=='c'&&hackcode[6]=='o'&&hackcode[7]=='i'&&hackcode[8]=='n'&&hackcode[9]=='s'&&hackcode[10]=='\0')
        {

            (**coins)+=500;
            if((**coins)>999999){
                (**coins)=999999;
            }
        }
        else if(hackcode[0]=='a'&&hackcode[1]=='t'&&hackcode[2]=='k'&&hackcode[3]=='h'&&hackcode[4]=='p'&&
                hackcode[5]=='c'&&hackcode[6]=='o'&&hackcode[7]=='i'&&hackcode[8]=='n'&&hackcode[9]=='\0')
        {

            (**coins)+=1000;
            (**hp)+=50;
            (**atk)+=25;
            if((**coins)>999999){
                (**coins)=999999;
            }
            if((**hp)>999999){
                (**hp)=999999;
            }
            if((**atk)>999999){
                (**atk)=999999;
            }
        }
        else if(hackcode[0]=='l'&&hackcode[1]=='v'&&hackcode[2]=='h'&&hackcode[3]=='a'&&hackcode[4]=='c'&&
                hackcode[5]=='k'&&hackcode[6]=='\0')
        {

            (**lv)+=2;
            if((**lv)>999999){
                (**lv)=999999;
            }
        }
        else if(hackcode[0]=='H'&&hackcode[1]=='i'&&hackcode[2]=='g'&&hackcode[3]=='h'&&hackcode[4]=='a'&&
                hackcode[5]=='c'&&hackcode[6]=='k'&&hackcode[7]=='\0')
        {

            (**Highscore)+=1000;
            if((**Highscore)>999999){
                (**Highscore)=999999;
            }
        }
        else if(hackcode[0]=='3'&&hackcode[1]=='0'&&hackcode[2]=='.'&&hackcode[3]=='6'&&hackcode[4]=='.'&&
                hackcode[5]=='2'&&hackcode[6]=='0'&&hackcode[7]=='1'&&hackcode[8]=='9'&&hackcode[9]=='\0')
        {

            (**hp)+=9999;
            (**atk)+=999;
            (**coins)+=99999;
            (**Highscore)+=99999;
            if((**coins)>999999){
                (**coins)=999999;
            }
            if((**hp)>999999){
                (**hp)=999999;
            }
            if((**atk)>999999){
                (**atk)=999999;
            }
            if((**Highscore)>999999){
                (**Highscore)=999999;
            }
        }
        else if(hackcode[0]=='a'&&hackcode[1]=='t'&&hackcode[2]=='P'&&hackcode[3]=='o'&&hackcode[4]=='t'&&
                hackcode[5]=='i'&&hackcode[6]=='o'&&hackcode[7]=='n'&&hackcode[8]=='\0')
        {

            (**atkt)+=5;
            if((**atkt)>999999){
                (**atkt)=999999;
            }
        }
        else if(hackcode[0]=='h'&&hackcode[1]=='p'&&hackcode[2]=='P'&&hackcode[3]=='o'&&hackcode[4]=='t'&&
                hackcode[5]=='i'&&hackcode[6]=='o'&&hackcode[7]=='n'&&hackcode[8]=='\0')
        {

            (**hpt)+=5;
            if((**hpt)>999999){
                (**hpt)=999999;
            }
        }
        else if(hackcode[0]=='h'&&hackcode[1]=='t'&&hackcode[2]=='k'&&hackcode[3]=='t'&&hackcode[4]=='P'&&
                hackcode[5]=='o'&&hackcode[6]=='t'&&hackcode[7]=='i'&&hackcode[8]=='o'&&hackcode[9]=='n'&&hackcode[10]=='\0')
        {

            (**atkt)+=20;
            (**hpt)+=20;
            if((**atkt)>999999){
                (**atkt)=999999;
            }
            if((**hpt)>999999){
                (**hpt)=999999;
            }
        }
        else if(hackcode[0]=='l'&&hackcode[1]=='e'&&hackcode[2]=='a'&&hackcode[3]=='v'&&hackcode[4]=='e'&&
                hackcode[5]=='\0')
        {

            stopp=1;
        }

    }

    printf("---------------------------------------------------------------------------\n\n");

}

//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------

void Magieshop(int **coins, int **Heiltrank, int **Hhp, int **Hlp, int **Hcp,
               int **stlv, int **stpu, int **stcoin,int **hplv, int **hppu,
               int **hpcoin, int **hard, int **atkt, int **hpt)
{
    char magbefehl[20]="";
    int stopp=0, st=0;

    if((**hard)==0)
    {

        printf("\nYou have %d Coins\n\n", (**coins));

        printf("(lv.%d)Heal Potion: %d Coins\n\n", (**Hlp), (**Hcp));
        printf("(lv.%d)ATK Potion: %d Coins\n\n", (**stlv), (**stcoin));
        printf("(lv.%d)HP Potion: %d Coins\n\n", (**hplv), (**hpcoin));

        while(stopp!=1)
        {
            printf("Magicshop: ");
            gets(magbefehl);

            if(magbefehl[0]=='H'&&magbefehl[1]=='t'&&magbefehl[2]=='\0')
            {
                if((**coins)>=(**Hcp))
                {
                    if((**Heiltrank)<=999999){
                    (**Heiltrank)++;
                    }else{
                        printf("\nLIMIT REACHED!");
                    }
                    (**coins)-=(**Hcp);
                    printf("\nPurchase successful!\n");
                    printf("\nYou have %d Coins\n\n", (**coins));
                }
                else
                {
                    printf("\nYou have not enough Coins!\n\n");
                }
            }
            else if(magbefehl[0]=='A'&&magbefehl[1]=='t'&&magbefehl[2]=='\0')
            {

                if((**coins)>=(**stcoin))
                {
                    if((**atkt)<=999999){
                    (**atkt)++;
                    }else{
                        printf("\nLIMIT REACHED!");
                    }
                    (**coins)-=(**stcoin);
                    printf("\nPurchase successful!\n");
                    printf("\nYou have %d Coins\n\n", (**coins));
                }
                else
                {
                    printf("\nYou have not enough Coins!\n\n");
                }
            }
            else if(magbefehl[0]=='h'&&magbefehl[1]=='t'&&magbefehl[2]=='\0')
            {

                if((**coins)>=(**hpcoin))
                {
                    if((**hpt)<=999999){
                    (**hpt)++;
                    }else{
                        printf("\nLIMIT REACHED!");
                    }
                    (**coins)-=(**hpcoin);
                    printf("\nPurchase successful!\n");
                    printf("\nYou have %d Coins\n\n", (**coins));
                }
                else
                {
                    printf("\nYou have not enough Coins!\n\n");
                }
            }
            else if(magbefehl[0]=='u'&&magbefehl[1]=='p'&&magbefehl[2]=='g'&&magbefehl[3]=='r'&&
                    magbefehl[4]=='a'&&magbefehl[5]=='d'&&magbefehl[6]=='e'&&magbefehl[7]=='\0')
            {
                while(st!=1)
                {
                    int zlv=(**Hlp)+1, hhhp=(**Hhp)*2, c=hhhp*4.5; //Rechnung für bezahlen;
                    int z1lv=(**stlv)+1, ahp=(**stpu)*2, ac=ahp*28.5;
                    int z2lv=(**hplv)+1, pointh=(**hppu)*2, ch=pointh*8.5;

                    if(c>999999){
                        c=999999;
                    }
                    if(ac>999999){
                        ac=999999;
                    }
                    if(ch>999999){
                        ch=999999;
                    }


                    if((**Hhp)<999999){
                    printf("\nUpgrade: Heal Potion lv. %d -> Heal Potion lv. %d / Coins %d", (**Hlp), zlv, c);
                    printf("\n Heal Potion lv. %d : %d HP / Heal Potion lv. %d : %d HP\n", (**Hlp), (**Hhp), zlv, hhhp);
                    }else{
                        printf("\nHeal Potion is MAX LV.!\n");
                    }
                    printf("---\n");
                    if((**stpu)<999999){
                    printf("\nUpgrade: ATK Potion lv. %d -> ATK Potion lv. %d / Coins %d", (**stlv), z1lv, ac);
                    printf("\n ATK Potion lv. %d : %d ATK / ATK Potion lv. %d : %d ATK\n", (**stlv), (**stpu), z1lv, ahp);
                    }else{
                        printf("\nATK Potion is MAX LV.!\n");
                    }
                    printf("---\n");
                    if((**hppu)<999999){
                    printf("\nUpgrade: HP Potion lv. %d -> HP Potion lv. %d / Coins %d", (**hplv), z2lv, ch);
                    printf("\n HP Potion lv. %d : %d HP / HP Potion lv. %d : %d HP\n\n", (**hplv), (**hppu), z2lv, pointh);
                    }else{
                        printf("\nHP Potion is MAX LV.!\n");
                    }
                    printf("---------------------------------------------------------------------------\n\n");
                    printf("Magicshop(upgrade): ");
                    gets(magbefehl);

                    if(magbefehl[0]=='H'&&magbefehl[1]=='t'&&magbefehl[2]=='l'&&magbefehl[3]=='v'&&magbefehl[4]=='\0')
                    {
                        if((**Hhp)<999999){
                            if((**coins)>=c)
                            {
                                (**Hlp)=zlv;
                                (**Hhp)=hhhp;

                                if((**Hhp)>999999){
                                    (**Hhp)=999999;
                                }

                                (**coins)-=c;
                                printf("\nPurchase successful!\n");
                                printf("\nYou have %d Coins\n\n", (**coins));
                            }
                            else
                            {
                                printf("\nYou have not enough Coins!\n\n");

                            }
                        }else{
                            printf("\nMAX LV!\n");
                            printf("---------------------------------------------------------------------------\n\n");
                        }
                    }
                    else if(magbefehl[0]=='A'&&magbefehl[1]=='t'&&magbefehl[2]=='l'&&magbefehl[3]=='v'&&magbefehl[4]=='\0')
                    {
                        if((**stpu)<999999){
                            if((**coins)>=ac)
                            {

                                (**stlv)=z1lv;
                                (**stpu)=ahp;

                                if((**stpu)>999999){
                                    (**stpu)=999999;
                                }

                                (**coins)-=ac;
                                printf("\nPurchase successful!\n");
                                printf("\nYou have %d Coins\n\n", (**coins));

                            }
                            else
                            {
                                printf("\nYou have not enough Coins!\n\n");
                            }
                        }else{
                            printf("\nMAX LV!\n");
                            printf("---------------------------------------------------------------------------\n\n");
                        }


                    }
                    else if(magbefehl[0]=='h'&&magbefehl[1]=='t'&&magbefehl[2]=='l'&&magbefehl[3]=='v'&&magbefehl[4]=='\0')
                    {
                        if((**hppu)<999999){
                            if((**coins)>=ch)
                            {

                                (**hplv)=z2lv;
                                (**hppu)=pointh;

                                if((**hppu)>999999){
                                    (**hppu)=999999;
                                }

                                (**coins)-=ch;
                                printf("\nPurchase successful!\n");
                                printf("\nYou have %d Coins\n\n", (**coins));
                            }
                            else
                            {
                                printf("\nYou have not enough Coins!\n\n");
                            }
                        }else{
                            printf("\nMAX LV!\n");
                            printf("---------------------------------------------------------------------------\n\n");
                        }
                    }
                    else if(magbefehl[0]=='e'&&magbefehl[1]=='n'&&magbefehl[2]=='d'&&magbefehl[3]=='\0')
                    {

                        printf("\nleave the Upgrade!\n\n");
                        st=1;


                        printf("\nYou have %d Coins\n\n", (**coins));

                        printf("(lv.%d)Heal Potion: %d Coins\n\n", (**Hlp), (**Hcp));
                        printf("(lv.%d)ATK Potion: %d Coins\n\n", (**stlv), (**stcoin));
                        printf("(lv.%d)HP Potion: %d Coins\n\n", (**hplv), (**hpcoin));


                    }
                }

            }




            else if(magbefehl[0]=='l'&&magbefehl[1]=='e'&&magbefehl[2]=='a'&&magbefehl[3]=='v'
                            &&magbefehl[4]=='e'&&magbefehl[5]=='\0')
            {
                stopp=1;
            }

            else
            {
                printf("\nWRONG COMMAND!\n\n");
            }
        }
    }
    else if((**hard) !=0)
    {



        printf("\nYou have %d Coins\n\n", (**coins));

        printf("(lv.%d)Heal Potion: %d Coins\n\n", (**Hlp), (**Hcp));
        printf("(lv.%d)ATK Potion: %d Coins\n\n", (**stlv), (**stcoin));
        printf("(lv.%d)HP Potion: %d Coins\n\n", (**hplv), (**hpcoin));

        while(stopp!=1)
        {
            printf("Shop: ");
            gets(magbefehl);

            if(magbefehl[0]=='H'&&magbefehl[1]=='t'&&magbefehl[2]=='\0')
            {
                if((**coins)>=(**Hcp))
                {
                    (**Heiltrank)++;
                    (**coins)-=(**Hcp);
                    printf("\nPurchase successful!\n");
                    printf("\nYou have %d Coins\n\n", (**coins));
                }
                else
                {
                    printf("\nYou have not enough Coins!\n\n");
                }
            }
            else if(magbefehl[0]=='A'&&magbefehl[1]=='t'&&magbefehl[2]=='\0')
            {

                if((**coins)>=(**stcoin))
                {
                    (**atkt)++;
                    (**coins)-=(**stcoin);
                    printf("\nPurchase successful!\n");
                    printf("\nYou have %d Coins\n\n", (**coins));
                }
                else
                {
                    printf("\nYou have not enough Coins!\n\n");
                }
            }
            else if(magbefehl[0]=='h'&&magbefehl[1]=='t'&&magbefehl[2]=='\0')
            {

                if((**coins)>=(**hpcoin))
                {
                    (**hpt)++;
                    (**coins)-=(**hpcoin);
                    printf("\nPurchase successful!\n");
                    printf("\nYou have %d Coins\n\n", (**coins));
                }
                else
                {
                   printf("\nYou have not enough Coins!\n\n");
                }
            }
            else if(magbefehl[0]=='u'&&magbefehl[1]=='p'&&magbefehl[2]=='g'&&magbefehl[3]=='r'&&
                    magbefehl[4]=='a'&&magbefehl[5]=='d'&&magbefehl[6]=='e'&&magbefehl[7]=='\0')
            {
                while(st!=1)
                {
                    int zlv=(**Hlp)+1, hhhp=(**Hhp)*2, c=hhhp*8.5; //Rechnung für bezahlen;
                    int z1lv=(**stlv)+1, ahp=(**stpu)*2.5, ac=ahp*28.5;
                    int z2lv=(**hplv)+1, pointh=(**hppu)*2.5, ch=pointh*12.5;

                    if(c>999999){
                        c=999999;
                    }
                    if(ac>999999){
                        ac=999999;
                    }
                    if(ch>999999){
                        ch=999999;
                    }

                    if((**Hhp)<999999){
                    printf("\nUpgrade: Heal Potion lv. %d -> Heal Potion lv. %d / Coins %d", (**Hlp), zlv, c);
                    printf("\n Heal Potion lv. %d : %d HP / Heal Potion lv. %d : %d HP\n", (**Hlp), (**Hhp), zlv, hhhp);
                    }else{
                        printf("\nHeal Potion is MAX LV.!\n");
                    }
                    printf("---\n");
                    if((**stpu)<999999){
                    printf("\nUpgrade: ATK Potion lv. %d -> ATK Potion lv. %d / Coins %d", (**stlv), z1lv, ac);
                    printf("\n ATK Potion lv. %d : %d ATK / ATK Potion lv. %d : %d ATK\n", (**stlv), (**stpu), z1lv, ahp);
                    }else{
                        printf("\nATK Potion is MAX LV.!\n");
                    }
                    printf("---\n");
                    if((**hppu)<999999){
                    printf("\nUpgrade: HP Potion lv. %d -> HP Potion lv. %d / Coins %d", (**hplv), z2lv, ch);
                    printf("\n HP Potion lv. %d : %d HP / HP Potion lv. %d : %d HP\n\n", (**hplv), (**hppu), z2lv, pointh);
                    }else{
                        printf("\nHP Potion is MAX LV.!\n");
                    }
                    printf("---------------------------------------------------------------------------\n\n");
                    printf("Magicshop(upgrade): ");
                    gets(magbefehl);

                    if(magbefehl[0]=='H'&&magbefehl[1]=='t'&&magbefehl[2]=='l'&&magbefehl[3]=='v'&&magbefehl[4]=='\0')
                    {
                        if((**Hhp)<999999){
                            if((**coins)>=c)
                            {
                                (**Hlp)=zlv;
                                (**Hhp)=hhhp;

                                if((**Hhp)>999999){
                                    (**Hhp)=999999;
                                }

                                (**coins)-=c;
                                printf("\nPurchase successful!\n");
                                printf("\nYou have %d Coins\n\n", (**coins));
                            }
                            else
                            {
                                printf("\nYou have not enough Coins!\n\n");

                            }
                        }else{
                            printf("\nMAX LV!\n");
                            printf("---------------------------------------------------------------------------\n\n");
                        }
                    }
                    else if(magbefehl[0]=='A'&&magbefehl[1]=='t'&&magbefehl[2]=='l'&&magbefehl[3]=='v'&&magbefehl[4]=='\0')
                    {
                        if((**stpu)<999999){
                            if((**coins)>=ac)
                            {

                                (**stlv)=z1lv;
                                (**stpu)=ahp;

                                if((**stpu)>999999){
                                    (**stpu)=999999;
                                }

                                (**coins)-=ac;
                                printf("\nPurchase successful!\n");
                                printf("\nYou have %d Coins\n\n", (**coins));

                            }
                            else
                            {
                                printf("\nYou have not enough Coins!\n\n");
                            }
                        }else{
                            printf("\nMAX LV!\n");
                            printf("---------------------------------------------------------------------------\n\n");
                        }


                    }
                    else if(magbefehl[0]=='h'&&magbefehl[1]=='t'&&magbefehl[2]=='l'&&magbefehl[3]=='v'&&magbefehl[4]=='\0')
                    {
                        if((**hppu)<999999){
                            if((**coins)>=ch)
                            {

                                (**hplv)=z2lv;
                                (**hppu)=pointh;

                                if((**hppu)>999999){
                                    (**hppu)=999999;
                                }

                                (**coins)-=ch;
                                printf("\nPurchase successful!\n");
                                printf("\nYou have %d Coins\n\n", (**coins));
                            }
                            else
                            {
                                printf("\nYou have not enough Coins!\n\n");
                            }
                        }else{
                            printf("\nMAX LV!\n");
                            printf("---------------------------------------------------------------------------\n\n");
                        }
                    }
                    else if(magbefehl[0]=='e'&&magbefehl[1]=='n'&&magbefehl[2]=='d'&&magbefehl[3]=='\0')
                    {

                        printf("\nleave the Upgrade!\n\n");
                        st=1;

                        printf("\nYou have %d Coins\n\n", (**coins));

                        printf("(lv.%d)Heal Potion: %d Coins\n\n", (**Hlp), (**Hcp));
                        printf("(lv.%d)ATK Potion: %d Coins\n\n", (**stlv), (**stcoin));
                        printf("(lv.%d)HP Potion: %d Coins\n\n", (**hplv), (**hpcoin));

                    }
                }

            }




            else if(magbefehl[0]=='l'&&magbefehl[1]=='e'&&magbefehl[2]=='a'&&magbefehl[3]=='v'
                            &&magbefehl[4]=='e'&&magbefehl[5]=='\0')
            {
                stopp=1;
            }

            else
            {
                printf("\nWRONG COMMAND!\n\n");
            }
        }




    }
    printf("---------------------------------------------------------------------------\n\n");

}

void Werkstatt(int **coins, int **atk, int **hp,  int **slv, int **scoin, int **ruelv, int **rcoin, int **hard)
{
    char werkbefehl[20]="";
    int stopp=0, sc=(**scoin), rc=(**rcoin);

    if((**hard)==0){
        while(stopp!=1)
        {
            printf("\nYou have %d Coins\n\n", (**coins));

            printf("(lv.%d)Sword: %d Coins\n", (**slv), sc);
            printf("(lv.%d)Armor: %d Coins\n\n", (**ruelv), rc);

            printf("Smith: ");
            gets(werkbefehl);

            if(werkbefehl[0]=='S'&&werkbefehl[1]=='w'&&werkbefehl[2]=='o'&&werkbefehl[3]=='r'&&werkbefehl[4]=='d'&&
                    werkbefehl[5]=='U'&&werkbefehl[6]=='p'&&werkbefehl[7]=='g'&&werkbefehl[8]=='d'&&werkbefehl[9]=='\0')
            {
                if((**atk)<999999){
                    if((**coins)>=sc)
                    {
                        (**atk)+=35*(**slv)*(**slv)*1.75;
                        (**scoin)=(**scoin)*1.75;
                        (**coins)-=sc;
                        sc=(**scoin);

                        printf("\n+%d ATK\n", (**atk));

                        if((**scoin)>999999){
                            (**scoin)=999999;
                        }

                        (**slv)++;

                    }else
                    {
                        printf("\nYou have not enough Coins!\n\n");
                    }
                }else{
                    printf("\nYour ATK is MAX!\n");
                }

            }
            else if(werkbefehl[0]=='A'&&werkbefehl[1]=='r'&&werkbefehl[2]=='m'&&werkbefehl[3]=='o'&&werkbefehl[4]=='r'&&
                    werkbefehl[5]=='U'&&werkbefehl[6]=='p'&&werkbefehl[7]=='g'&&werkbefehl[8]=='d'&&werkbefehl[9]=='\0')
            {
                if((**hp)<999999){
                    if((**coins)>=rc)
                    {
                        (**hp)+=55*(**ruelv)*(**slv)*1.75;
                        (**rcoin)=(**rcoin)*1.75;
                        (**coins)-=rc;
                        rc=(**rcoin);

                        printf("\n+%d HP\n", (**hp));

                        if((**rcoin)>999999){
                            (**rcoin)=999999;
                        }

                        (**ruelv)++;

                    }else{
                        printf("\nYou have not enough Coins!\n\n");
                    }
                }else{
                    printf("\nYour HP is MAX!\n");
                }


            }
            else if(werkbefehl[0]=='l'&&werkbefehl[1]=='e'&&werkbefehl[2]=='a'&&werkbefehl[3]=='v'&&werkbefehl[4]=='e'&&
                    werkbefehl[5]=='\0')
            {

                stopp=1;

            }

        }
    }else{

        while(stopp!=1)
        {
            printf("\nYou have %d Coins\n\n", (**coins));


            sc=(**scoin);
            rc=(**rcoin);

            printf("(lv.%d)Sword: %d Coins\n", (**slv), sc);
            printf("(lv.%d)Armor: %d Coins\n\n", (**ruelv), rc);

            printf("Smith: ");
            gets(werkbefehl);

            if(werkbefehl[0]=='S'&&werkbefehl[1]=='w'&&werkbefehl[2]=='o'&&werkbefehl[3]=='r'&&werkbefehl[4]=='d'&&
                    werkbefehl[5]=='U'&&werkbefehl[6]=='p'&&werkbefehl[7]=='g'&&werkbefehl[8]=='d'&&werkbefehl[9]=='\0')
            {

                if((**atk)<999999){
                    if((**coins)>=sc)
                    {
                        (**atk)+=(35*(**slv))*(**slv)*2.75;
                        (**scoin)=(**scoin)*2.75;
                        (**coins)-=sc;

                        printf("\n+%d ATK\n", (**atk));

                        if((**scoin)>999999){
                            (**scoin)=999999;
                        }

                        (**slv)++;

                    }else
                    {
                        printf("\nYou have not enough Coins!\n\n");
                    }
                }else{
                    printf("\nYour ATK is MAX!\n");
                }



            }
            else if(werkbefehl[0]=='A'&&werkbefehl[1]=='r'&&werkbefehl[2]=='m'&&werkbefehl[3]=='o'&&werkbefehl[4]=='r'&&
                    werkbefehl[5]=='U'&&werkbefehl[6]=='p'&&werkbefehl[7]=='g'&&werkbefehl[8]=='d'&&werkbefehl[9]=='\0')
            {
                if((**hp)<999999){
                    if((**coins)>=rc)
                    {
                        (**hp)+=55*(**ruelv)*(**ruelv)*2.75;
                        (**rcoin)=(**rcoin)*2.75;
                        (**coins)-=rc;

                        printf("\n+%d HP\n", (**hp));

                        if((**rcoin)>999999){
                            (**rcoin)=999999;
                        }

                        (**ruelv)++;

                    }else{
                        printf("\nYou have not enough Coins!\n\n");
                    }
                }else{
                    printf("\nYour HP is MAX!\n");
                }


            }
            else if(werkbefehl[0]=='l'&&werkbefehl[1]=='e'&&werkbefehl[2]=='a'&&werkbefehl[3]=='v'&&werkbefehl[4]=='e'&&
                    werkbefehl[5]=='\0')
            {

                stopp=1;

            }

        }

    }

    printf("---------------------------------------------------------------------------\n\n");

}

void inventar2(int **hp, int **atk, int **stlv, int **stpu, int **hplv, int **hppu, int **atkt, int **hpt)
{
    char invbefehl[20]="";
    int stopp=1;


    while(stopp!=0)
    {


    printf("\n(lv. %d) ATKtrank +%d | Available %d\n", (**stlv), (**stpu), (**atkt));
    printf("(lv. %d) HPtrank  +%d | Available %d\n\n", (**hplv), (**hppu), (**hpt));


        printf("Inventory: ");
        gets(invbefehl);
        putchar('\n');

        if(invbefehl[0]=='A'&&invbefehl[1]=='T'&&invbefehl[2]=='K'&&invbefehl[3]=='\0')
        {

            if((**atkt)!=0)
            {

                int a=(**atk);

                (**atkt)--;
                (**atk)+=(**stpu);

                if((**atk)>999999){
                    (**atk)=999999;
                }

                printf("%d ATK -> %d ATK\n\n", a, (**atk));
            }
            else if((**atkt)==0)
            {
                printf("\nYou have not enough Coins!\n\n");
            }

        }
        else if(invbefehl[0]=='H'&&invbefehl[1]=='P'&&invbefehl[2]=='\0')
        {

            if((**hpt)!=0)
            {

                int h=(**hp);

                (**hpt)--;
                (**hp)+=(**hppu);

                if((**hp)>999999){
                    (**hp)=999999;
                }

                printf("%d HP -> %d HP\n\n", h, (**hp));
            }
            else if((**hpt)==0)
            {
                printf("\nYou have not enough Coins!\n\n");
            }
        }
        else if(invbefehl[0]=='l'&&invbefehl[1]=='e'&&invbefehl[2]=='a'&&invbefehl[3]=='v'&&invbefehl[4]=='e'&&
                invbefehl[5]=='\0'){
            stopp=0;
        }

    }

    printf("---------------------------------------------------------------------------\n\n");


}

void Dungeon(int *lv, int *pxp, int *xp, int *hp, int *atk, char name[], int *tnd, int *coins,
             int *Heiltrank, int *Highscore, int *Hhp, int *Hlp, int *end, int *uend)
{
    int zahl, ok, fehler, stopp=0;
    char enter;

    printf("\nDungeon 1 to 50!\n\n");

    while(stopp!=1)
    {
        do
        {
            fehler=0;
            fflush(stdin);
            printf("\nWhich Dungeon: ");
            ok=scanf("%d%c", &zahl, &enter);

            if(ok!=2 || enter != '\n')
            {
                fehler=1;
                printf("\nInteger please!\n");
            }
            else
            {
                fehler=0;
            }

        }
        while(fehler);

        if(zahl>=1&&zahl<=50)
        {
            stopp=1;
        }
        else
        {
            printf("Wrong Number!\n");
        }

    }

    printf("---------------------------------------------------------------------------\n\n");

    srand(time(NULL));

    if(zahl==1)
    {
        Dg1(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==2)
    {
        Dg2(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==3)
    {
        Dg3(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==4)
    {
        Dg4(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==5)
    {
        Dg5(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==6)
    {
        Dg6(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==7)
    {
        Dg7(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==8)
    {
        Dg8(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==9)
    {
        Dg9(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==10)
    {
        Dg10(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==11)
    {
        Dg11(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==12)
    {
        Dg12(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==13)
    {
        Dg13(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==14)
    {
        Dg14(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==15)
    {
        Dg15(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==16)
    {
        Dg16(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==17)
    {
        Dg17(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==18)
    {
        Dg18(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==19)
    {
        Dg19(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==20)
    {
        Dg20(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==21)
    {
        Dg21(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==22)
    {
        Dg22(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==23)
    {
        Dg23(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==24)
    {
        Dg24(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==25)
    {
        Dg25(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==26)
    {
        Dg26(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==27)
    {
        Dg27(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==28)
    {
        Dg28(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==29)
    {
        Dg29(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==30)
    {
        Dg30(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==31)
    {
        Dg31(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==32)
    {
        Dg32(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==33)
    {
        Dg33(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==34)
    {
        Dg34(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==35)
    {
        Dg35(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==36)
    {
        Dg36(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==37)
    {
        Dg37(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==38)
    {
        Dg38(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==39)
    {
        Dg39(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==40)
    {
        Dg40(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==41)
    {
        Dg41(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==42)
    {
        Dg42(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==43)
    {
        Dg43(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==44)
    {
        Dg44(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==45)
    {
        Dg45(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==46)
    {
        Dg46(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==47)
    {
        Dg47(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==48)
    {
        Dg48(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==49)
    {
        Dg49(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp);
    }
    else if(zahl==50)
    {
        Dg50(&lv,&pxp,&xp,&hp,&atk,name,&tnd,&coins,&Heiltrank,&Highscore,&Hhp,&Hlp,&end,&uend);
    }

}

void Dg1(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=18, gatk=3;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp;      // Heilungspunkt, Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Fighter!\n\n");

    zhp=rand()%5;

    ghp+=zhp;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Fighter has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nFighter:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+10 Coins");
        (**pxp)+=8;
        (**coins)+=10;
        (**Highscore)+=15;
        printf("\n+8 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg2(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=55, gatk=25;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: mutated Rat!\n\n");

    zhp=rand()%7;
    zatk=rand()%6;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("mutated Rat has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nmutated Rat:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+15 Coins");
        (**pxp)+=15;
        (**coins)+=15;
        (**Highscore)+=30;
        printf("\n+15 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg3(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=350, gatk=52;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Knight!\n\n");



    zhp=rand()%7;
    zatk=rand()%6;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Knight has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nKnight:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+25 Coins");
        (**pxp)+=35;
        (**coins)+=25;
        (**Highscore)+=55;
        printf("\n+35 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg4(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=675, gatk=88;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Muscle animal!\n\n");



    zhp=rand()%7;
    zatk=rand()%6;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Muscle animal has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nMuscle animal:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+40 Coins");
        (**pxp)+=50;
        (**coins)+=40;
        (**Highscore)+=85;
        printf("\n+50 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg5(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=1355, gatk=145;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: hateful Muscle animal!\n\n");



    zhp=rand()%15;
    zatk=rand()%10;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("hateful Muscle animal has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nhateful Muscle animal:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+90 Coins");
        (**pxp)+=80;
        (**coins)+=90;
        (**Highscore)+=125;
        printf("\n+80 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg6(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=1850, gatk=195;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Headhunter!\n\n");



    zhp=rand()%20;
    zatk=rand()%15;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Headhunter has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nHeadhunter:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+150 Coins");
        (**pxp)+=120;
        (**coins)+=150;
        (**Highscore)+=175;
        printf("\n+120 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg7(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=2850, gatk=250;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Shadow wolf!\n\n");



    zhp=rand()%25;
    zatk=rand()%20;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Shadow wolve has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nShadow wolve:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+195 Coins");
        (**pxp)+=180;
        (**coins)+=195;
        (**Highscore)+=225;
        printf("\n+180 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg8(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=3850, gatk=350;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: more quickly Shadow wolf!\n\n");



    zhp=rand()%50;
    zatk=rand()%20;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Fighter has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nmore quickly Shadow wolve:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+250 Coins");
        (**pxp)+=250;
        (**coins)+=250;
        (**Highscore)+=275;
        printf("\n+250 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg9(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=4500, gatk=425;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: dangerous Headhunter!\n\n");



    zhp=rand()%50;
    zatk=rand()%25;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("dangerous Headhunter has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\n:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+375 Coins");
        (**pxp)+=300;
        (**coins)+=375;
        (**Highscore)+=350;
        printf("\n+300 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg10(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=5850, gatk=550;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Assassin!\n\n");



    zhp=rand()%120;
    zatk=rand()%50;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Assassin has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nAssassin:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+850 Coins");
        (**pxp)+=550;
        (**coins)+=850;
        (**Highscore)+=750;
        printf("\n+550 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg11(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=6500, gatk=850;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Shadow Assassin!\n\n");



    zhp=rand()%250;
    zatk=rand()%80;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Shadow Assassin has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nShadow Assassin:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+950 Coins");
        (**pxp)+=900;
        (**coins)+=950;
        (**Highscore)+=800;
        printf("\n+900 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg12(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=8750, gatk=1000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: mutated Assassin!\n\n");



    zhp=rand()%250;
    zatk=rand()%80;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("mutated Assassin has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nmutated Assassin:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+1000 Coins");
        (**pxp)+=1000;
        (**coins)+=1000;
        (**Highscore)+=1000;
        printf("\n+1000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg13(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=12500, gatk=1250;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Wizard!\n\n");



    zhp=rand()%300;
    zatk=rand()%120;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Wizard has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nWizard:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+1250 Coins");
        (**pxp)+=1250;
        (**coins)+=1250;
        (**Highscore)+=1200;
        printf("\n+1250 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg14(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=15000, gatk=1500;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Thunder Wizard!\n\n");



    zhp=rand()%500;
    zatk=rand()%250;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Thunder Wizard has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nThunder Wizard:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+1400 Coins");
        (**pxp)+=1350;
        (**coins)+=1400;
        (**Highscore)+=1350;
        printf("\n+1350 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg15(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=17500, gatk=1900;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Shadow Wizard!\n\n");



    zhp=rand()%550;
    zatk=rand()%275;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Shadow Wizard has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nShadow Wizard:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+1650 Coins");
        (**pxp)+=1500;
        (**coins)+=1650;
        (**Highscore)+=1500;
        printf("\n+1500 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg16(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=22500, gatk=2200;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Golem!\n\n");



    zhp=rand()%700;
    zatk=rand()%325;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Golem has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nGolem:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+1900 Coins");
        (**pxp)+=1850;
        (**coins)+=1900;
        (**Highscore)+=2000;
        printf("\n+1850 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg17(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=28000, gatk=2800;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: dark Golem!\n\n");



    zhp=rand()%750;
    zatk=rand()%450;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("dark Golem has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\ndark Golem:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+2200 Coins");
        (**pxp)+=2100;
        (**coins)+=2200;
        (**Highscore)+=2300;
        printf("\n+2100 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg18(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=30000, gatk=3500;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Vampire!\n\n");



    zhp=rand()%800;
    zatk=rand()%500;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Vampire has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nVampire:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+2500 Coins");
        (**pxp)+=2300;
        (**coins)+=2500;
        (**Highscore)+=2600;
        printf("\n+2300 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg19(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=32500, gatk=4500;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: more quickly Vampire!\n\n");



    zhp=rand()%950;
    zatk=rand()%100;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("more quickly Vampire has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nmore quickly Vampire:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+2800 Coins");
        (**pxp)+=2500;
        (**coins)+=2800;
        (**Highscore)+=3000;
        printf("\n+2500 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg20(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=37500, gatk=6500;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: dark Vampire!\n\n");



    zhp=rand()%1000;

    ghp+=zhp;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("dark Vampire has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\ndark Vampire:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+3100 Coins");
        (**pxp)+=3000;
        (**coins)+=3100;
        (**Highscore)+=3200;
        printf("\n+3000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg21(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=40000, gatk=8000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Werewolf!\n\n");

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Werewolf has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nWerewolf:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+3400 Coins");
        (**pxp)+=3250;
        (**coins)+=3400;
        (**Highscore)+=3500;
        printf("\n+3250 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg22(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=44500, gatk=10000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: bright Werewolf!\n\n");



    zhp=rand()%1500;
    zatk=rand()%200;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("bright has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nbright Werewolf:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+3750 Coins");
        (**pxp)+=3800;
        (**coins)+=3750;
        (**Highscore)+=4000;
        printf("\n+3800 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg23(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=49500, gatk=12500;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: dark Werewolf!\n\n");



    zhp=rand()%2000;
    zatk=rand()%800;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("dark Werewolf has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\ndark Werewolf:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+4200 Coins");
        (**pxp)+=4250;
        (**coins)+=4200;
        (**Highscore)+=4300;
        printf("\n+4250 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg24(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=52000, gatk=15000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: blood addicted Werewolf!\n\n");



    zhp=rand()%3000;
    zatk=rand()%1500;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("blood addicted Werewolf has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nblood addicted Werewolf:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+4500 Coins");
        (**pxp)+=4800;
        (**coins)+=4500;
        (**Highscore)+=4800;
        printf("\n+4800 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg25(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=55000, gatk=18000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: hungry wolf!\n\n");



    zhp=rand()%5000;
    zatk=rand()%2000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("hungry wolf has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nhungry wolf:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+7500 Coins");
        (**pxp)+=7000;
        (**coins)+=7500;
        (**Highscore)+=7000;
        printf("\n+7000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg26(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=60000, gatk=22000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: hungry Vampire!\n\n");



    zhp=rand()%5000;
    zatk=rand()%2000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("hungry Vampire has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nhungry Vampire:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+7750 Coins");
        (**pxp)+=7500;
        (**coins)+=7750;
        (**Highscore)+=7200;
        printf("\n+7500 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg27(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=62500, gatk=25000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: hungry Werewolf!\n\n");



    zhp=rand()%5000;
    zatk=rand()%2500;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("hungry Werewolf has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nhungry Werewolf:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+8200 Coins");
        (**pxp)+=8250;
        (**coins)+=8200;
        (**Highscore)+=7500;
        printf("\n+8250 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg28(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=64000, gatk=28000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Walker!\n\n");



    zhp=rand()%8000;
    zatk=rand()%3000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Walker has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nWalker:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+8500 Coins");
        (**pxp)+=8750;
        (**coins)+=8500;
        (**Highscore)+=8000;
        printf("\n+8750 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg29(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=68000, gatk=30000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: dangerous Walker!\n\n");



    zhp=rand()%7000;
    zatk=rand()%8000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("dangerous Walker has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\ndangerous Walker:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+9500 Coins");
        (**pxp)+=9350;
        (**coins)+=9500;
        (**Highscore)+=9000;
        printf("\n+9350 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg30(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=70000, gatk=33500;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: dark %s!\n\n", name);



    zhp=rand()%9000;
    zatk=rand()%6000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nFALSCHER BEFEHL!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("dark %s has still %d HP\n", name,ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\ndark %s:\n", name);
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+11000 Coins");
        (**pxp)+=10000;
        (**coins)+=11000;
        (**Highscore)+=10000;
        printf("\n+10000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg31(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=73500, gatk=35000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Firedragon!\n\n");



    zhp=rand()%8000;
    zatk=rand()%8000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Firedragon has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nFiredragon:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+13000 Coins");
        (**pxp)+=12000;
        (**coins)+=13000;
        (**Highscore)+=12000;
        printf("\n+12000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg32(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=76000, gatk=40000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Icedragon!\n\n");



    zhp=rand()%12000;
    zatk=rand()%8000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Icedragon has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nIcedragon:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+15000 Coins");
        (**pxp)+=13500;
        (**coins)+=15000;
        (**Highscore)+=15000;
        printf("\n+13500 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg33(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=80000, gatk=43000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Earthdragon!\n\n");



    zhp=rand()%12000;
    zatk=rand()%9000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Earthdragon has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nEarthdragon:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+18000 Coins");
        (**pxp)+=16000;
        (**coins)+=18000;
        (**Highscore)+=18000;
        printf("\n+16000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg34(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=85000, gatk=47000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Airdragon!\n\n");



    zhp=rand()%15000;
    zatk=rand()%10000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Airdragon has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nAirdragon:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+20000 Coins");
        (**pxp)+=20000;
        (**coins)+=20000;
        (**Highscore)+=22000;
        printf("\n+20000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg35(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=90000, gatk=52000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Dragon Master!\n\n");



    zhp=rand()%10000;
    zatk=rand()%15000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Dragon Master has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nMaster Dragon:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+24000 Coins");
        (**pxp)+=23000;
        (**coins)+=24000;
        (**Highscore)+=25000;
        printf("\n+23000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));


    }else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg36(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=93000, gatk=55000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Orc!\n\n");



    zhp=rand()%15000;
    zatk=rand()%15000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Orc has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nOrc:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+30000 Coins");
        (**pxp)+=28000;
        (**coins)+=30000;
        (**Highscore)+=30000;
        printf("\n+28000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg37(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=96000, gatk=59000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: elite Orc!\n\n");



    zhp=rand()%15000;
    zatk=rand()%12000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("elite Orc has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nelite Orc:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+80000 Coins");
        (**pxp)+=30000;
        (**coins)+=32000;
        (**Highscore)+=32000;
        printf("\n+30000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg38(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=95000, gatk=62000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: dark Orc!\n\n");



    zhp=rand()%20000;
    zatk=rand()%15000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("dark Orc has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\ndark Orc:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+33000 Coins");
        (**pxp)+=31500;
        (**coins)+=33000;
        (**Highscore)+=32000;
        printf("\n+31500 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg39(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=98000, gatk=65000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: dark elite Orc!\n\n");



    zhp=rand()%35000;
    zatk=rand()%25000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("dark elite Orc has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\ndark elite Orc:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+32500 Coins");
        (**pxp)+=32500;
        (**coins)+=32500;
        (**Highscore)+=32500;
        printf("\n+32500 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg40(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=100000, gatk=70000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Goblin!\n\n");



    zhp=rand()%80000;
    zatk=rand()%50000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Goblin has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nGoblin:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+34000 Coins");
        (**pxp)+=34000;
        (**coins)+=34000;
        (**Highscore)+=35000;
        printf("\n+34000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg41(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=125000, gatk=73500;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: angry Goblin!\n\n");



    zhp=rand()%100000;
    zatk=rand()%80000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("angry Goblin has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nangry Goblin:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+38000 Coins");
        (**pxp)+=38000;
        (**coins)+=38000;
        (**Highscore)+=37000;
        printf("\n+38000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg42(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=165000, gatk=75000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: dark Goblin!\n\n");



    zhp=rand()%100000;
    zatk=rand()%85000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("angry Goblin has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nangry Goblin:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+40000 Coins");
        (**pxp)+=42000;
        (**coins)+=40000;
        (**Highscore)+=40000;
        printf("\n+42000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg43(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=195000, gatk=80000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: hateful Goblin!\n\n");



    zhp=rand()%120000;
    zatk=rand()%100000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("hateful Goblin has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nhateful Goblin:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+42000 Coins");
        (**pxp)+=43500;
        (**coins)+=42000;
        (**Highscore)+=42000;
        printf("\n+43500 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg44(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=210000, gatk=82000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: mutant!\n\n");



    zhp=rand()%120000;
    zatk=rand()%100000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Mutant has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nMutant:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+45000 Coins");
        (**pxp)+=45000;
        (**coins)+=45000;
        (**Highscore)+=45000;
        printf("\n+45000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg45(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=235000, gatk=85000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: uncontrolled Mutant!\n\n");



    zhp=rand()%150000;
    zatk=rand()%130000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("uncontrolled Mutant has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nuncontrolled Mutant:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+48000 Coins");
        (**pxp)+=48000;
        (**coins)+=48000;
        (**Highscore)+=48000;
        printf("\n+48000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg46(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=235000, gatk=85000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: dark Mutant!\n\n");



    zhp=rand()%150000;
    zatk=rand()%130000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("dark Mutant has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\ndark Mutant:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+51000 Coins");
        (**pxp)+=50000;
        (**coins)+=51000;
        (**Highscore)+=50000;
        printf("\n+50000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg47(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=260000, gatk=84500;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: dark and uncontrolled Mutant!\n\n");



    zhp=rand()%150000;
    zatk=rand()%130000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("dark and uncontrolled Mutant has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\ndark and uncontrolled Mutant:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+53000 Coins");
        (**pxp)+=52000;
        (**coins)+=53000;
        (**Highscore)+=52000;
        printf("\n+52000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg48(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=300000, gatk=88000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Omegaknight!\n\n");



    zhp=rand()%200000;
    zatk=rand()%150000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Omegaknight has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nOmegaknight:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s win\n\n", name);
        printf("+54000 Coins");
        (**pxp)+=53500;
        (**coins)+=54000;
        (**Highscore)+=53000;
        printf("\n+53500 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }


    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg49(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins, int **Heiltrank, int **Highscore, int **Hhp, int **Hlp)
{
    int ghp=350000, gatk=94000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: dark Omegaknight!\n\n");



    zhp=rand()%200000;
    zatk=rand()%150000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("dark Omegaknight has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\ndark Omegaknight:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }


    if(wb==1)
    {
        printf("%s hat gewonnen\n\n", name);
        printf("+60000 Coins");
        (**pxp)+=58000;
        (**coins)+=60000;
        (**Highscore)+=55000;
        printf("\n+58000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }

    else if(wb==2)
    {
        printf("Du hast verloren\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Dg50(int **lv, int **pxp, int **xp, int **hp, int **atk, char name[], int **tnd, int **coins,
           int **Heiltrank, int **Highscore, int **Hhp, int **Hlp, int **end, int **uend)
{
    int ghp=500000, gatk=125000;  // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Gegner
    int zhp, zatk;      // Heilungspunkt, Angriffsschaden und Geschwindigkeit von Zufall
    char handel[20];
    int wb, stopp=0, z, HP, GHP;

    printf("Enemy: Dungeon Master!\n\n");



    zhp=rand()%300000;
    zatk=rand()%250000;

    ghp+=zhp;
    gatk+=zatk;

    HP=(**hp);
    GHP=ghp;


    //Kampfsystem
    while(stopp!=1)
    {

        printf("FightCommand: ");
        gets(handel);
        printf("\n");
        Ksys(handel,&z);

        while(z==0)
        {
            printf("\nWRONG COMMAND!\n\n");
            printf("> ");
            gets(handel);
            printf("\n");
            Ksys(handel,&z);
        }
        if(z==1)
        {
            HP-=gatk;
            ghp-=(**atk);

            if(HP<0){
                HP=0;
            }
            if(ghp<0){
                ghp=0;
            }

            printf("%s has still %d HP\n", name, HP);
            printf("Dungeon Master has still %d HP\n", ghp);

            if(HP<=0)
            {
                wb=2;
                stopp=1;
            }
            else if(ghp<=0)
            {
                wb=1;
                stopp=1;
            }

            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==2)
        {

            printf("\n(lv. %d) %s:\n", (**lv), name);
            printf("HP: %4d/%d  \n", HP, (**hp));
            printf("ATK:  %3d\n", (**atk));
            printf("\nDungeon Master:\n");
            printf("HP: %4d/%d  \n", ghp, GHP);
            printf("ATK:  %3d\n", gatk);
            printf("---------------------------------------------------------------------------\n\n");
        }
        else if(z==3)
        {
            Inventar(&HP,&hp,&Heiltrank,name,&Hhp,&Hlp);
        }

    }

    if(wb==1)
    {

        if((**uend)==1){

            (**end)=1;
            (**uend)=2;

        }

        printf("%s win\n\n", name);
        printf("+100000 Coins");
        (**pxp)+=150000;
        (**coins)+=100000;
        (**Highscore)+=120000;
        printf("\n+150000 Exp\n");

        if((**pxp)>999999){
            (**pxp)=999999;
        }
        if((**coins)>999999){
            (**coins)=999999;
        }
        if((**Highscore)>999999){
            (**Highscore)=999999;
        }

        if((**pxp)>=(**xp))
        {
            Level(&lv,&pxp,&xp,&hp,&atk,name);
        }
        printf("\nExp: %d/%d\n\n", (**pxp), (**xp));
    }


    else if(wb==2)
    {
        printf("You lose\n");
        (**tnd)=1;
    }

    printf("---------------------------------------------------------------------------\n\n");
}

void Inventar(int *HP, int ***hp, int ***Heiltrank, char name[], int ***Hhp, int ***Hlp)
{
    char inbefehl[20]="";
    int stopp=0;

    printf("Leave the Hminventory(Command: leave)\n\n");
    printf("(lv. %d)Heal Potion: %d\n\n", (***Hlp), (***Heiltrank));

    while(stopp!=1)
    {
        printf("Item: ");
        gets(inbefehl);
        if(inbefehl[0]=='H'&&inbefehl[1]=='t'&&inbefehl[2]=='\0')
        {
            if((***Heiltrank)>=1)
            {
                (*HP)+=(***Hhp);
                (***Heiltrank)--;
                if((*HP)>(***hp))
                {
                    (*HP)=(***hp);
                }
                printf("\n%s healed +%d HP\n\n", name, (***Hhp));
            }
            else
            {
                printf("\nYou have not more Heal Potion!\n\n");
            }
        }
        else if(inbefehl[0]=='l'&&inbefehl[1]=='e'&&inbefehl[2]=='a'&&inbefehl[3]=='v'&&inbefehl[4]=='e'&&inbefehl[5]=='\0')
        {
            stopp=1;
        }
        else
        {
            printf("\nWRONG COMMAND!\n\n");
        }
    }
    printf("---------------------------------------------------------------------------\n\n");
}

void Ksys(char handel[], int *z)
{

    if(handel[0]=='a'&&handel[1]=='t'&&handel[2]=='t'&&handel[3]=='a'&&handel[4]=='c'&&handel[5]=='k'&&handel[6]=='\0')
    {
        (*z)=1;
    }
    else if(handel[0]=='s'&&handel[1]=='t'&&handel[2]=='a'&&handel[3]=='t'&&handel[4]=='s'&&handel[5]=='\0')
    {
        (*z)=2;
    }
    else if(handel[0]=='H'&&handel[1]=='m'&&handel[2]=='I'&&handel[3]=='n'&&handel[4]=='v'&&handel[5]=='\0')
    {
        (*z)=3;
    }
    else
    {
        (*z)=0;
    }
}

void Level(int ***lv, int ***pxp, int ***xp, int ***hp, int ***atk, char name[])
{
    int ehp, eatk, xhp=(***hp), xa=(***atk);
    int lvup=0, stopp=0, yatk=0, yhp=0, ueb=0;


    ehp=rand()%4;
    eatk=rand()%3;

    printf("---------------------------------------------------------------------------\n");

    while(stopp==0){

    if((***lv)==2055){
        stopp=1;
        ueb=1;
    }else{

    (***lv)++;
    lvup++;

    if((***lv)<=9)
    {
        (***pxp)-=(***xp);
        (***xp)=20*(***lv);
        (***hp)=4+ehp+(***hp);
        (***atk)=3+eatk+(***atk);

    }
    else if((***lv)>=10&&(***lv)<=19)
    {
        (***pxp)-=(***xp);
        (***xp)=30*(***lv);
        (***hp)=8+ehp+(***hp);
        (***atk)=6+eatk+(***atk);
    }
    else if((***lv)>=20&&(***lv)<=29)
    {
        (***pxp)-=(***xp);
        (***xp)=40*(***lv);
        (***hp)=14+ehp+(***hp);
        (***atk)=10+eatk+(***atk);
    }
    else if((***lv)>=30&&(***lv)<=39)
    {
        (***pxp)-=(***xp);
        (***xp)=50*(***lv);
        (***hp)=19+ehp+(***hp);
        (***atk)=15+eatk+(***atk);
    }
    else if((***lv)>=40&&(***lv)<=49)
    {
        (***pxp)-=(***xp);
        (***xp)=60*(***lv);
        (***hp)=25+ehp+(***hp);
        (***atk)=22+eatk+(***atk);
    }
    else if((***lv)>=50&&(***lv)<=59)
    {
        (***pxp)-=(***xp);
        (***xp)=60*(***lv);
        (***hp)=30+ehp+(***hp);
        (***atk)=28+eatk+(***atk);
    }
    else if((***lv)>=60&&(***lv)<=69)
    {
        (***pxp)-=(***xp);
        (***xp)=70*(***lv);
        (***hp)=40+ehp+(***hp);
        (***atk)=35+eatk+(***atk);
    }
    else if((***lv)>=70&&(***lv)<=79)
    {
        (***pxp)-=(***xp);
        (***xp)=70*(***lv);
        (***hp)=80+ehp+(***hp);
        (***atk)=65+eatk+(***atk);
    }
    else if((***lv)>=80&&(***lv)<=89)
    {
        (***pxp)-=(***xp);
        (***xp)=80*(***lv);
        (***hp)=120+ehp+(***hp);
        (***atk)=95+eatk+(***atk);
    }
    else if((***lv)>=90&&(***lv)<=99)
    {
        (***pxp)-=(***xp);
        (***xp)=80*(***lv);
        (***hp)=180+ehp+(***hp);
        (***atk)=150+eatk+(***atk);
    }
    else if((***lv)>=100)
    {
        (***pxp)-=(***xp);
        (***xp)=135*(***lv);
        (***hp)=500+ehp+(***hp);
        (***atk)=450+eatk+(***atk);
    }

    if((***xp)>(***pxp)){
        stopp=1;
    }

    }
    }

    if(ueb==0){

        if((***atk)>999999){
            (***atk)=999999;
        }

        if((***hp)>999999){
            (***hp)=999999;
        }

        if((***xp)>999999){
            (***xp)=999999;
        }

        yhp=(***hp)-xhp;
        yatk=(***atk)-xa;

        printf("\n%s went up %d Levels\n", name, lvup);
        printf("\nHP: %d -> %d | +%d\n", xhp, (***hp), yhp);
        printf("ATK: %d -> %d | +%d\n", xa, (***atk), yatk);
    }else{
        printf("\n");
    }

}
