#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void printLogo();
int playIQ();
int playGN();
int main()
{
	char check;	
	do{

		system("cls");

		printLogo();
		char cet='a';
		char name;
		printf("Welcome to Aligarh Institute of Technology");
		for(int i =0;i<=900000000;i++){
		}	
		system("cls");
		printf("\nStarting Quiz");
		for(int i =0;i<=900000000;i++){
		}	
		printf("\n\t\tUser Name:\t");
		scanf("%c",&name);
		system("cls");
		printf("\nPlease selsect category\n 1:General Knowlwdge \n 2:IQ Test \n 3:Islamic Quiz\n");
cet = getch();
printf("%c",cet);
for(int i =0;i<=500000000;i++){
}	
system("cls");
if(cet=='1')	
{
printf("Welcome to General Knowlwdge Test\n");
for(int i =0;i<=900000000;i++){

}
int score = playGN();
//printf("Instructions");
printf("\n\t%c your score is: %d/10",name,score);
}
else if(cet=='2')
{
printf("Welcome to IQ test\n");
for(int i =0;i<=900000000;i++){
}
int score = playIQ();
printf("\n\t%c your Score is %d",name,score);
//printf("%d\n",score);
}
else if (cet=='3')
{
printf("Welcome to Islamic Quiz Test\n");
for(int i =0;i<=900000000;i++){
}
}
else{
	printf("Wrong Input\n");
}
printf("Would you like to play more? (y/n)\n");
check = getch();
printf("you select to play: %c",check);
}while(check=='y');
printf("\n\t\t\tProgram End");
getch();
return 0;
	
}


void printLogo(){
printf("       ***********                  *****                  ******               ******          *******************\n");
for(int i =0;i<=900000;i++){
}	
printf("      ************                 *******                 ***  ***            *** ***          *******************\n");
for(int i =0;i<=9000000;i++){
}	
printf("     ***                         ***     ***               ***   ***          ***  ***          ****\n");
for(int i =0;i<=9000000;i++){
}
printf("    ***                         ***       ***              ***    ***        ***   ***          ****\n");
for(int i =0;i<=9000000;i++){
}
printf("   **                          ***         ***             ***     ***      ***    ***          **** ********\n");
for(int i =0;i<=9000000;i++){
}
printf("    **                        *****************            ***      ***    ***     ***          **** ********\n");
for(int i =0;i<=9000000;i++){
}
printf("     ***     *******         *******************           ***       ***  ***      ***          ****\n");
for(int i =0;i<=9000000;i++){
}
printf("      ***       ****        ***               ***          ***        ******       ***          ****\n");
for(int i =0;i<=9000000;i++){
}
printf("       *************       ***                 ***         ***                     ***          *******************\n");
for(int i =0;i<=9000000;i++){
}
printf("        ************      ***                   ***        ***                     ***          *******************\n");
int i = 0;
while (i!=990000000){
	i=i+1;
}
system("cls");
}
int playIQ(){
	int points=0;
	printf("\n\nNote:Attempt all questions... \n\nInput the code of option... ");
	printf("\n\n\nQ:1 What is the old name of Karachi?  \n");
	printf("\ta) Kalachi\tb) Kolachi \tc)Kachi \td) Karchi ");
	char temp = getch();
	if(temp=='b')
	{
		points++;
	}
	system("cls");
		printf("\n\n\nQ:2 Who is the COAS of Pak Army now? \n");
	printf("\ta)Gen.Raheel Shareef \tb)Gen.Ziaulhaq \tc)Gen.Parveez Musharraf \td)Gen.Bajwa");
	temp = getch();
	if(temp=='d')
	{
		points++;
	}
	system("cls");
		printf("\n\n\nQ:3 Which is the largest university of Karachi? \n");
	printf("\ta)karachi Uni \tb) Iqra Uni \tc)Fast Uni \td)Nust");
	temp = getch();
	if(temp=='a')
	{
		points++;
	}
	system("cls");
		printf("\n\n\nQ:4 Which is the capital of Pakistan \n");
	printf("\ta) Lahore \tb) Queeta \tc) Islamabad \td) Karachi");
	temp = getch();
	if(temp=='c')
	{
		points++;
	}
	system("cls");
		printf("\n\n\nQ:5 Which is the firsh language of programming?  \n");
	printf("\ta) C Sharp \tb) C language \tc) Jawa \td) Python");
	temp = getch();
	if(temp=='b')
	{
		points++;
	}
	system("cls");
		printf("\n\n\nQ:6 Speed of computer depends on? \n");
	printf("\ta) Processor \tb) RAM \tc) ROM \td) User");
	temp = getch();
	if(temp=='a')
	{
		points++;
	}
	system("cls");
		printf("\n\n\nQ:7 Which is the first Islamic nuclear country?  \n");
	printf("\ta)Indonesia \tb)Malysia \tc) Turkey \td) Pakistan");
	temp = getch();
	if(temp=='d')
	{
		points++;
	}
	system("cls");
		printf("\n\n\nQ:8 Who is the current president of Turkey? \n");
	printf("\ta) Muhammad Bin Salman \tb) Sheikh Murtaza Akber \tc) Tayyab Rajab Urdgan \td) Hassan Bin Hayder");
	temp = getch();
	if(temp=='c')
	{
		points++;
	}
	system("cls");
		printf("\n\n\nQ:9 What is the chemical farmula of Water? \n");
	printf("\ta) CO \tb) H2O \tc) CHSO4 \td) ACSO2");
	temp = getch();
	if(temp=='b')
	{
		points++;
	}
	system("cls");
		printf("\n\n\nQ:10 Which is the correct spelling below? \n");
	printf("\ta) Sycology \tb) Phycology \tc) Cycology \td) Scycology ");
	temp = getch();
	if(temp=='b')
	{
		points++;
	}
	system("cls");
	return points;
	
}
int playGN()
{
	printf("\n\nNote:Attempt all questions... \n\nInput the code of option... \n\n\t\t Please Wait. This may take while...");
	for(int i =0;i<=2000000000;i++){
}
//printf("\n\tWelcome to General Knowlwdge Test...");
system("cls");
	printf("\n\n\nQ:1 How many provences in Pakistan?\n");
	printf("\ta) 2\tb) 3\tc) 4\td) 5");
	char temp = getch();
	int points=0;
	if(temp=='c')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ:2 Whick city is the capital Balochistan? \n");
	printf("\ta) Ziarat\tb) Karachi\tc) Islamabad\td) Quatta");
	temp = getch();
	if(temp=='d')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ:3 what is the total population of Pakistan? \n");
	printf("\ta) 1.8 Billion\tb) 2.5 Billion\tc) 2.2 Billion\td) 1.6 Billion");
	temp = getch();
	if(temp=='c'){
		points++;
	}
	system("cls");
	printf("\n\n\nQ:4 Who is the Governer of Sindh now? \n");
	printf("\ta) Murad Ali Shah \tb) Asif Ali Zafdari \tc) Altaf Hussain \td) Nawaz Sharif");
	temp = getch();
	if(temp=='a')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ:5 How many soldiers in Pak Army? \n");
	printf("\ta) 3.3 Lac \tb) 4.2 Lac \tc) 6.9 Lac \td) 7 Lac");
	temp = getch();
	if(temp=='d')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ:6 Where is Shah Faisal Masjid locate? \n");
	printf("\ta) Karachi \tb) Islamabad \tc) Pishawar \td) Ziarat");
	temp = getch();
	if(temp=='b')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ:7 Which country manufacture the most of total Footballs in world? \n");
	printf("\ta) Newzeland \tb) England \tc) Korea \td) Pakistan");
	temp = getch();
	if(temp=='d')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ:8 From which country Mount K2 locate? \n");
	printf("\ta) India \tb) Pakistan \tc) Oman \td) Russia ");
	temp = getch();
	if(temp=='b')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ:9 Who is the last president of America? \n");
	printf("\ta) Barak Obama \tb) Donald Trump \tc) John Ronalda \td) Elie John ");
	temp = getch();
	if(temp=='a')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ:10 Whick mobile company is the top of list now days as per its business? \n");
	printf("\ta) Huawei \tb) Apple \tc) Samsung \td) Realme ");
	temp = getch();
	if(temp=='c')
	{
		points++;
	}
system("cls");	
		return points;	
	
}
	int playIslamic()
{
	printf("\n\nNote:Attempt all questions... \n\nInput the code of option... ");	
	printf("\n\tWelcome to Islamic Quiz Test...");
	system("cls");
	printf("\n\n\nQ: \n");
	printf("\ta) \tb) \tc) \td)");
	char temp = getch();
	int points=0;
	if(temp=='a')
	{
		points++;
	}
	system("cls");
	
	printf("\n\n\nQ: \n");
	printf("\ta) \tb) \tc) \td)");
	temp = getch();
	if(temp=='a')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ: \n");
	printf("\ta) \tb) \tc) \td)");
	temp = getch();
	if(temp=='a')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ: \n");
	printf("\ta) \tb) \tc) \td)");
	temp = getch();
	if(temp=='a')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ: \n");
	printf("\ta) \tb) \tc) \td)");
	temp = getch();
	if(temp=='a')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ: \n");
	printf("\ta) \tb) \tc) \td)");
	temp = getch();
	if(temp=='a')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ: \n");
	printf("\ta) \tb) \tc) \td)");
	temp = getch();
	if(temp=='a')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ: \n");
	printf("\ta) \tb) \tc) \td)");
	temp = getch();
	if(temp=='a')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ: \n");
	printf("\ta) \tb) \tc) \td)");
	temp = getch();
	if(temp=='a')
	{
		points++;
	}
	system("cls");
	printf("\n\n\nQ: \n");
	printf("\ta) \tb) \tc) \td)");
	temp = getch();
	if(temp=='a')
	{
		points++;
	}
	system("cls");
	return points;
}
