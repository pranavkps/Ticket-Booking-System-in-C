//pranav entertainments 

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<time.h>

static int day11, month, year, d1, m1, y11;

void movie();
void drama();
void circus();
void other();
void quit();
void login();
void sign();
void registe();
void logg();
void intro();
void confirm();
void payment();
void snacks();
void introduction();
void date();
void day();
void da();
void d();

void main()
{
	//system("COLOR 21");
	printf("\n\t\t\t\t\t\t            ***** WELCOME TO ENTERTAINMENT ZONE ***** ");
	sign();
	//system("COLOR 57");
}
void intro()
{
	fflush(stdin);		
	int num;
	label:
	fflush(stdin);
    printf("\nENTER THE NUMBER CORRESPONDING TO THE PROGRAM :");
    scanf(" %d",&num);
    
	if(num<1 || num>6)
	{
		printf("ENTER VALID NUMBER");
    goto label;
	}
    
    while(num)
    {
	printf("\n");
    switch(num)
    {
    	case 1 :movie();
    			break;
    	case 2 :drama();
    			break;
    	case 3 :circus();
    			break;
    	case 4 :other();
    			break;
    	case 5 :{
    			printf("\n\n__________________________________________________________________________________________________________\n\n");
    			printf("\n\n\t\tYOUR ACCOUNT DETAILS ARE HERE \n\n");
				FILE *fp;
				char ch;
				fp=fopen("account.txt","r");
					while ((ch = getc(fp)) != EOF)
					printf("%c",ch);
				fclose(fp);
				printf("\n\n__________________________________________________________________________________________________________\n\n");
				ip:
				printf("\n\nENTET 1 TO CHECK YOUR PREVIOUS BOOKINGS | ENTER 2 TO GO BACK  ->\n");
				int q;
				scanf("%d",&q);
				if(q != 1 && q != 2)
					goto ip;
				if(q==1)
				{
					FILE *fpp;
					char ch;
					fpp=fopen("userall.txt","r");
					while ((ch = getc(fp)) != EOF)
					printf("%c",ch);
					fclose(fpp);
				}
				if(q==2)
				{
					system("cls");
					introduction();
				}
				printf("\nENTER ANY KEY TO GO BACK....");
				getch();
				system("cls");
				introduction();
    			break;
				}
    	
    	case 6 :exit(0);
    			break;
    	case 7 :system("cls");
    			main();
    			introduction();
    			break;
    }
	}
}
void movie()
{
	system("COLOR F0");
	fflush(stdin);
	char ch;
	FILE *m;
	m = fopen("movie.txt","r");
	while ((ch = getc(m)) != EOF)
	printf("%c",ch);
	fclose(m);
	
	//char uname[25],pwd[25],un[25],pd[25];
	FILE *fp;
	fp=fopen("user.txt","a");
	fprintf(fp,"\n\t\t******THIS IS YOUR MOVIE BOOKING DETAILS******\n");
	
	FILE *fpp;
	fpp=fopen("userall.txt","a");
	fprintf(fpp,"\n\t\t******THIS IS YOUR MOVIE BOOKING DETAILS******\n");
	
	int m1;
	label:
	fflush(stdin);
	printf("\nSELECT MOVIE :");
	scanf("%d",&m1);
	if(m1<1 || m1>9)
	{
		printf("SELECT VALID MOVIE NUMBER ");
		goto label;
	}
	if(m1==8){
		system("cls");
		//main();
		introduction();
		//movie();
	}
	
	 switch(m1)
    {
    	case 1 :printf("\n**YOU HAVE CHOOSED BAHUBALI AT ASIAN MALL**\n");
    			fprintf(fp,"\n\t\t**YOU HAVE CHOOSED BAHUBALI AT ASIAN MALL**\n");
    			fprintf(fpp,"\n\t\t**YOU HAVE CHOOSED BAHUBALI AT ASIAN MALL**\n");
    			break;
    	case 2 :printf("\n**YOU HAVE CHOOSED TITANIC AT S2 MULIPLEX**\n");
    			fprintf(fp,"\n\t\t**YOU HAVE CHOOSED TITANIC AT S2 MULIPLEX**\n");
    				fprintf(fpp,"\n\t\t**YOU HAVE CHOOSED TITANIC AT S2 MULIPLEX**\n");
    			break;
    	case 3 :printf("\n**YOU HAVE CHOOSED KGF(CHAPTER-2) AT URVASHI THEATER**\n");
    			fprintf(fp,"\n\t\t**YOU HAVE CHOOSED KGF(CHAPTER-2) AT URVASHI THEATER**\n");
    			fprintf(fpp,"\n\t\t**YOU HAVE CHOOSED KGF(CHAPTER-2) AT URVASHI THEATER**\n");
    			break;
    	case 4 :printf("\n**YOU HAVE CHOOSED SAAHO AT KRISHNA THEATER**\n");
    			fprintf(fp,"\n\t\t**YOU HAVE CHOOSED SAAHO AT KRISHNA THEATER**\n");
    			fprintf(fpp,"\n\t\t**YOU HAVE CHOOSED SAAHO AT KRISHNA THEATER**\n");
    			break;
    	case 5 :printf("\n**YOU HAVE CHOOSED VAKIL SAB AT ASHOKA THEATER**\n");
    			fprintf(fp,"\n\t\t**YOU HAVE CHOOSED VAKIL SAB AT ASHOKA THEATER**\n");
    			fprintf(fpp,"\n\t\t**YOU HAVE CHOOSED VAKIL SAB AT ASHOKA THEATER**\n");
    			break;
    	case 6 :printf("\n**YOU HAVE CHOOSED AVATAR  AT RAJESH THEATER**\n");
    			fprintf(fp,"\n\t\t**YOU HAVE CHOOSED AVATAR  AT RAJESH THEATER**\n");
    			fprintf(fpp,"\n\t\t**YOU HAVE CHOOSED AVATAR  AT RAJESH THEATER**\n");
    			break;
    	case 7 :printf("\n**YOU HAVE CHOOSED UPPENA  AT JAGADAMBA THEATER**\n");
    			fprintf(fp,"\n\t\t**YOU HAVE CHOOSED UPPENA  AT JAGADAMBA THEATER**\n");
    			fprintf(fpp,"\n\t\t**YOU HAVE CHOOSED UPPENA  AT JAGADAMBA THEATER**\n");
    			break;
    	case 9 :printf("\n\n\t\t\t\t                      *****THANK YOU FOR USING OUR SERVICES*****");
    			exit(0);
    			break;
    }
		
	printf("\n\nENTER ANY KEY TO CHECK AVAILABILITY BY DATE & SHOW TIMINGS \n");
	getch();
	
	da();
	char ch1;
	FILE *mt;
	mt = fopen("movie timings.txt","r");
	while ((ch1 = getc(mt)) != EOF)
	printf("%c",ch1);
	fclose(mt);
	
	int o;
	labell:
	fflush(stdin);
	printf("\nSELECT THE SHOW YOU WANT TO CHOOSE :");
	scanf("%d",&o);
	if(o<1 || o>6)
	{
		printf("\nSELECT CORRECT SHOW TIME");
		goto labell;
	}
	if(o==5)
	{
		system("cls");
		//main();
		introduction();
		movie();
	}
	switch(o)
    {
    	case 1 :printf("\n**YOU HAVE CHOOSED MORNING SHOW**\n");
    			fprintf(fp,"\n\t\t**YOU HAVE CHOOSED MORNING SHOW**\n");
    			fprintf(fpp,"\n\t\t**YOU HAVE CHOOSED MORNING SHOW**\n");
    			break;
    	case 2 :printf("\n**YOU HAVE CHOOSED MATNEE SHOW**\n");
    			fprintf(fp,"\n\t\t**YOU HAVE CHOOSED MATNEE SHOW**\n");
    			fprintf(fpp,"\n\t\t**YOU HAVE CHOOSED MATNEE SHOW**\n");
    			break;
    	case 3 :printf("\n**YOU HAVE CHOOSED FIRST SHOW**\n");
    			fprintf(fp,"\n\t\t**YOU HAVE CHOOSED FIRST SHOW**\n");
    			fprintf(fpp,"\n\t\t**YOU HAVE CHOOSED FIRST SHOW**\n");
    			break;
    	case 4 :printf("\n**YOU HAVE CHOOSED SECOND SHOW**\n");
    			fprintf(fp,"\n\t\t**YOU HAVE CHOOSED SECOND SHOW**\n");
    			fprintf(fpp,"\n\t\t**YOU HAVE CHOOSED SECOND SHOW**\n");
    			break;
    			
    	case 6 :printf("\n\n\t\t\t\t                      *****THANK YOU FOR USING OUR SERVICES*****");
				quit();
    			break;
    
    }
	printf("\n\nENTER ANY KEY TO CONFORM YOUR BOOKING\n\n");
	getch();
	
	char ch2;
	FILE *mb;
	mb = fopen("booking.txt","r");
	while ((ch2 = getc(mb)) != EOF)
	printf("%c",ch2);
	fclose(mb);
	
	int i,c;
	laddu:
	fflush(stdin);
	printf("\nSELECT THE CLASS :");
	scanf("%d",&c);
	if(c<1 || c>5)
	{
		printf("SELECT VALID CLASS");
		goto laddu;
	}
	if(c==4)
	{
		system("cls");
		//main();
		introduction();
		//movie();
	}
	if(c==5)
		quit();
	
	sat:
	fflush(stdin);
	printf("\nCHOOSE NUMBER OF SEATS :");
	scanf("%d",&i);
		
		printf("\n");
	if(i<1 || i>8)
		{
		printf("\nNUMBER OF SEATS SLECTION MUST BE LESS THAN 8\n");
		goto sat;
		}
		
		switch(c)
		{
			case 1 :
				printf("\n\t\t----------------------------------------\n");
				printf("\t\t\tYOU HAVE CHOOSED LOWER CLASS\n");
				printf("\t\t\tPAY RS.:%d ONLY/-\n",(i*40));
				printf("\t\t\t%d NUMBER OF SEATS ARE BOOKED",i);
				printf("\n\t\t----------------------------------------\n");
				
				
				fprintf(fp,"\n\t\t----------------------------------------\n");
				fprintf(fp,"\t\t\tYOU HAVE CHOOSED LOWER CLASS\n");
				fprintf(fp,"\t\t\tPAY RS.:%d ONLY/-\n",(i*40));
				fprintf(fp,"\t\t\t%d NUMBER OF SEATS ARE BOOKED",i);
				fprintf(fp,"\n\t\t----------------------------------------\n");
				
				fprintf(fpp,"\n\t\t----------------------------------------\n");
				fprintf(fpp,"\t\t\tYOU HAVE CHOOSED LOWER CLASS\n");
				fprintf(fpp,"\t\t\tPAY RS.:%d ONLY/-\n",(i*40));
				fprintf(fpp,"\t\t\t%d NUMBER OF SEATS ARE BOOKED",i);
				fprintf(fp,"\n\t\t----------------------------------------\n");
				
				fclose(fpp);
				fclose(fp);
				confirm();
				
			case 2 :
				printf("\n\t\t----------------------------------------\n");
				printf("\t\t\tYOU HAVE CHOOSED DRESS CIRCLE\n");
				printf("\t\t\tPAY RS.:%d ONLY/-\n",(i*80));
				printf("\t\t\t%d NUMBER OF SEATS ARE BOOKED",i);
				printf("\n\t\t----------------------------------------\n");
				
				
				fprintf(fp,"\n\t\t----------------------------------------\n");
				fprintf(fp,"\t\t\tYOU HAVE CHOOSED DRESS CIRCLE\n");
				fprintf(fp,"\t\t\tPAY RS.:%d ONLY/-\n",(i*80));
				fprintf(fp,"\t\t\t%d NUMBER OF SEATS ARE BOOKED",i);
				fprintf(fp,"\n\t\t----------------------------------------\n");
				
				fprintf(fpp,"\n\t\t----------------------------------------\n");
				fprintf(fpp,"\t\t\tYOU HAVE CHOOSED DRESS CIRCLE\n");
				fprintf(fpp,"\t\t\tPAY RS.:%d ONLY/-\n",(i*80));
				fprintf(fpp,"\t\t\t%d NUMBER OF SEATS ARE BOOKED",i);
				fprintf(fpp,"\n\t\t----------------------------------------\n");
				
				fclose(fpp);
				fclose(fp);
				confirm();
			
			case 3 :
				printf("\n\t\t----------------------------------------\n");
				printf("\t\t\tYOU HAVE CHOOSED BALCONY\n");
				printf("\t\t\tPAY RS.:%d ONLY/-\n",(i*120));
				printf("\t\t\t%d NUMBER OF SEATS ARE BOOKED",i);
				printf("\n\t\t----------------------------------------\n");
				
				fprintf(fp,"\n\t\t----------------------------------------\n");
				fprintf(fp,"\t\t\tYOU HAVE CHOOSED BALCONY\n");
				fprintf(fp,"\t\t\tPAY RS.:%d ONLY/-\n",(i*120));
				fprintf(fp,"\t\t\t%d NUMBER OF SEATS ARE BOOKED",i);
				fprintf(fp,"\n\t\t----------------------------------------\n");
				
				fprintf(fpp,"\n\t\t----------------------------------------\n");
				fprintf(fpp,"\t\t\tYOU HAVE CHOOSED BALCONY\n");
				fprintf(fpp,"\t\t\tPAY RS.:%d ONLY/-\n",(i*120));
				fprintf(fpp,"\t\t\t%d NUMBER OF SEATS ARE BOOKED",i);
				fprintf(fpp,"\n\t\t----------------------------------------\n");
				
				fclose(fpp);
				fclose(fp);
				confirm();
		}
		fclose(fp);
}
void drama()
{
	system("COLOR 87");
	fflush(stdin);
	char ch;
	FILE *m;
	m = fopen("drama.txt","r");
	while ((ch = getc(m)) != EOF)
	printf("%c",ch);
	fclose(m);
	
	FILE *fp;
	fp=fopen("user.txt","a");
	fprintf(fp,"\n\t\t******THIS IS YOUR DRAMA BOOKING DETAILS******\n");
	
	FILE *fpp;
	fpp=fopen("userall.txt","a");
	fprintf(fpp,"\n\t\t******THIS IS YOUR DRAMA BOOKING DETAILS******\n");

	int m1;
	label:
	fflush(stdin);
	printf("\nSELECT DRAMA :");
	scanf("%d",&m1);
	if(m1<1 || m1>4)
	{
		printf("SELECT VALID DRAMA NUMBER ");
		goto label;
	}
	if(m1==3){
		system("cls");
		introduction();
		//drama();
	}
	
	 switch(m1)
    {
    	case 1 :printf("\n-------------------------\n");
				printf("\nYOU HAVE CHOOSED RAMAYANA");
				printf("\n--------------------------\n");
				
				fprintf(fp,"\n\t\t\tYOU HAVE CHOOSED RAMAYANA");
				fprintf(fpp,"\n\t\t\tYOU HAVE CHOOSED RAMAYANA");
				
    			break;
    	case 2 :printf("\n----------------------------\n");
				printf("\nYOU HAVE CHOOSED MAHABARATH");
				printf("\n----------------------------\n");
				
				fprintf(fp,"\n\t\t\tYOU HAVE CHOOSED MAHABARATH");
				fprintf(fpp,"\n\t\t\tYOU HAVE CHOOSED MAHABARATH");
				
    			break;
    	case 4 :printf("\n\n\t\t\t\t                      *****THANK YOU FOR USING OUR SERVICES*****");
    			quit();
    			break;
    }
		
	printf("\n\nENTER ANY KEY TO CHECK AVAILABILITY BY DATE & DRAMA TIMINGS \n");
	getch();
	
	da();
	char ch1;
	FILE *mt;
	mt = fopen("drama timings.txt","r");
	while ((ch1 = getc(mt)) != EOF)
	printf("%c",ch1);
	fclose(mt);
	
	int o;
	labell:
	fflush(stdin);
	printf("\nSELECT THE SHOW YOU WANT TO CHOOSE :");
	scanf("%d",&o);
	if(o<1 || o>4)
	{
		printf("\nSELECT CORRECT SHOW TIME");
		goto labell;
	}
	if(o==3)
	{
		system("cls");
		introduction();
		//drama();
	}
	switch(o)
    {
    	case 1 :printf("\n------------------------------\n");
				printf("YOU HAVE CHOOSED ASIAN MALL\n");
				printf("\n------------------------------\n");
				
				fprintf(fp,"\n\t\t\tYOU HAVE CHOOSED ASIAN MALL\n");
				fprintf(fpp,"\n\t\t\tYOU HAVE CHOOSED ASIAN MALL\n");
				
    			break;
    	case 2 :printf("\n------------------------------\n");
				printf("YOU HAVE CHOOSED YASHODHA MALL\n");
				printf("\n------------------------------\n");
				
				fprintf(fp,"\n\t\t\tYOU HAVE CHOOSED YASHODHA MALL\n");
				fprintf(fpp,"\n\t\t\tYOU HAVE CHOOSED YASHODHA MALL\n");		
				
    			break;
    	case 4 :printf("\n\n\t\t\t\t                      *****THANK YOU FOR USING OUR SERVICES*****");
				quit();
    			break;
    
    }
	printf("\n\nENTER ANY KEY TO CONFORM YOUR BOOKING\n\n");
	getch();
	
	char ch2;
	FILE *mb;
	mb = fopen("drama booking.txt","r");
	while ((ch2 = getc(mb)) != EOF)
	printf("%c",ch2);
	fclose(mb);
	
	int i,c;
	laddu:
	fflush(stdin);
	printf("\nSELECT THE CLASS :");
	scanf("%d",&c);
	if(c<1 || c>4)
	{
		printf("SELECT VALID CLASS");
		goto laddu;
	}
	if(c==3)
	{
		system("cls");
		introduction();
		//movie();
	}
	if(c==4)
		quit();
	
	sat:
	fflush(stdin);
	printf("\nCHOOSE NUMBER OF SEATS :");
	scanf("%d",&i);
		
		printf("\n");
	if(i<1 || i>8)
		{
		printf("\nNUMBER OF SEATS SLECTION MUST BE LESS THAN 8\n");
		goto sat;
		}
		
		switch(c)
		{
			case 1 :
				printf("\n\t\t----------------------------------------\n");
				printf("\t\t\tYOU HAVE CHOOSED FROUNT CLASS\n");
				printf("\t\t\tPAY RS.:%d ONLY/-\n",(i*150));
				printf("\t\t\t%d NUMBER OF SEATS ARE BOOKED",i);
				printf("\n\t\t----------------------------------------\n");
				
				
				fprintf(fp,"\n\t\t----------------------------------------\n");
				fprintf(fp,"\t\t\tYOU HAVE CHOOSED FROUNT CLASS\n");
				fprintf(fp,"\t\t\tPAY RS.:%d ONLY/-\n",(i*150));
				fprintf(fp,"\t\t\t%d NUMBER OF SEATS ARE BOOKED",i);
				fprintf(fp,"\n\t\t----------------------------------------\n");
				
				
				fprintf(fpp,"\n\t\t----------------------------------------\n");
				fprintf(fpp,"\t\t\tYOU HAVE CHOOSED FROUNT CLASS\n");
				fprintf(fpp,"\t\t\tPAY RS.:%d ONLY/-\n",(i*150));
				fprintf(fpp,"\t\t\t%d NUMBER OF SEATS ARE BOOKED",i);
				fprintf(fpp,"\n\t\t----------------------------------------\n");
				
				fclose(fpp);
				fclose(fp);
				confirm();
				
			case 2 :
				printf("\n\t\t----------------------------------------\n");
				printf("\t\t\tYOU HAVE CHOOSED BACK CLASS\n");
				printf("\t\t\tPAY RS.:%d ONLY/-\n",(i*100));
				printf("\t\t\t%d NUMBER OF SEATS ARE BOOKED",i);
				printf("\n\t\t----------------------------------------\n");
				
				
				fprintf(fp,"\n\t\t----------------------------------------\n");
				fprintf(fp,"\t\t\tYOU HAVE CHOOSED BACK CLASS\n");
				fprintf(fp,"\t\t\tPAY RS.:%d ONLY/-\n",(i*100));
				fprintf(fp,"\t\t\t%d NUMBER OF SEATS ARE BOOKED",i);
				fprintf(fp,"\n\t\t----------------------------------------\n");
				
				fprintf(fpp,"\n\t\t----------------------------------------\n");
				fprintf(fpp,"\t\t\tYOU HAVE CHOOSED BACK CLASS\n");
				fprintf(fpp,"\t\t\tPAY RS.:%d ONLY/-\n",(i*100));
				fprintf(fpp,"\t\t\t%d NUMBER OF SEATS ARE BOOKED",i);
				fprintf(fpp,"\n\t\t----------------------------------------\n");
				
				fclose(fpp);
				fclose(fp);
				confirm();
		}
}
void circus()
{
	system("COLOR 8F");
	fflush(stdin);
	char ch;
	FILE *m;
	m = fopen("exhibition.txt","r");
	while ((ch = getc(m)) != EOF)
	printf("%c",ch);
	fclose(m);
	
	FILE *fp;
	fp=fopen("user.txt","a");
	fprintf(fp,"\n\t\t******THIS IS YOUR MOVIE BOOKING DETAILS******\n");
	
	FILE *fpp;
	fpp=fopen("userall.txt","a");
	fprintf(fpp,"\n\t\t******THIS IS YOUR MOVIE BOOKING DETAILS******\n");
	
		
	int m1,m2;
	fflush(stdin);
	printf("\nBOOKING FOR ENTRY \n\n");
	printf("CHOOSE NO.OF ADULTS :");
	scanf("%d",&m1);
	printf("\nCHOOSE NO.OF CHILDS :");
	scanf("%d",&m2);
	
	printf("\n\n\t\t----------------------------------------------");
	printf("\n\t\t\tYOU HAVE CHOOSED %d ADULTS",m1);
	printf("\n\t\t\tYOU HAVE CHOOSED %d CHILDS",m2);
	printf("\n\t\t\tPAY %d FOR YOUR BOOKING\n",m1*50+m2*30);
	printf("\t\t---------------------------------------------\n\n");

	fprintf(fp,"\n\t\t\tYOU HAVE CHOOSED %d ADULTS",m1);
	fprintf(fp,"\n\t\t\tYOU HAVE CHOOSED %d CHILDS",m2);
	fprintf(fp,"\n\t\t\tPAY %d FOR YOUR BOOKING\n",m1*50+m2*30);
	
	fprintf(fpp,"\n\t\t\tYOU HAVE CHOOSED %d ADULTS",m1);
	fprintf(fpp,"\n\t\t\tYOU HAVE CHOOSED %d CHILDS",m2);
	fprintf(fpp,"\n\t\t\tPAY %d FOR YOUR BOOKING\n",m1*50+m2*30);
	
	int v;
	B:
	printf("ENTER 1 TO ADD EVENT / ENTER 2 TO CONTIUE WITHOUT ADDING EVENT :");
	scanf("%d",&v);
	if(v>0 || v<3){
	if(v==1){
		
	char ch2;
	FILE *mb;
	mb = fopen("exhibition events.txt","r");
	while ((ch2 = getc(mb)) != EOF)
	printf("%c",ch2);
	fclose(mb);
	
	
	int i,c;
	j:
	fflush(stdin);
	printf("\nSELECT THE EVENT :");
	scanf("%d",&c);
	if(c>0 || c<5)
	{
		
			 if(c==1)
			 {
			 	printf("\n---------------------------------------------------\n");
				printf("\tYOU HAVE CHOOSED ROLLER COASTER ADULT\n");
				int r;
				printf("\tCHOOSE NO.OF ADULTS :");scanf("%d",&r);
				printf("\tPAY RS.%d FOR YOUR ROLLER COASTER BOOKING",r*50);
				printf("\n-------------------------------------------------\n");
				
				fprintf(fp,"\n\n\t\tPAY RS.%d FOR YOUR ROLLER COASTER BOOKING\n",r*50);
				fprintf(fpp,"\n\n\t\tPAY RS.%d FOR YOUR ROLLER COASTER BOOKING\n",r*50);
		//		fclose(fp);
			}
					
			if(c==2)
			{
				printf("\n-------------------------------------------------\n");
				printf("\tYOU HAVE CHOOSED ROLLER COASTER CHILD\n");
					int rr;
				printf("\tCHOOSE NO.OF CHILDS :");scanf("%d",&rr);
				printf("\tPAY RS.%d FOR YOUR BOOKING",rr*50);
				printf("\n--------------------------------------------------\n");
				
				fprintf(fp,"\n\n\t\tPAY RS.%d FOR YOUR ROLLER COASTER ADULT BOOKING\n",rr*50);
				fprintf(fpp,"\n\n\t\tPAY RS.%d FOR YOUR ROLLER COASTER ADULT BOOKING\n",rr*50);
	//	fclose(fp);
    		}
    			
    		if(c==3)
			{
				printf("\n--------------------------------------------------\n");
				printf("\tYOU HAVE CHOOSED 3D SHOW\n");
					int er;
				printf("\tCHOOSE NO.OF PERSONS :");scanf("%d",&er);
				printf("\tPAY RS.%d FOR YOUR BOOKING",er*50);
				printf("\n--------------------------------------------------\n");
				
				fprintf(fp,"\n\n\t\tPAY RS.%d FOR YOUR 3D-SHOW BOOKING\n",er*50);
				fprintf(fpp,"\n\n\t\tPAY RS.%d FOR YOUR 3D-SHOW BOOKING\n",er*50);
				//fclose(fp);
			}
    			if(c==4) {

    					system("cls");
    					introduction();
    					}
    			if(c==5)
				{
					printf("\n\n\t\t\t\t                      *****THANK YOU FOR USING OUR SERVICES*****");
					quit();
				}
   	}
    else{
		printf("\nENTER VALID INPUT\n");
		goto j;}
		
	int k;
	ii:
	printf("\n\nENTER 1 TO ADD MORE EVENTS / ENTER ANY NUMBER TO CONTNUE WITHOUT ADDING EXTRA EVENTS :");
	scanf("%d",&k);
	if(k>0 || k<3){
	
			if(k==1){
				goto j;
				}
			if(k != 1)
			{
				fclose(fpp);
				fclose(fp);
				confirm();
			}
	}
	else
		{
			printf("ENTER VALID INPUT");
			goto ii;
		}
	}
	if(v==2){
		
		fclose(fpp);
		fclose(fp);
		confirm();
	}}
	else{
		printf("\nENTER VALID INPUT\n");
		goto B;
	}
}

void other()
	{
		printf("\nCURRENTLY THERE ARE NO OTHER ACTIVITIES GOING ON IN YOUR PLACE\n");
		quit();
	}
	
void introduction()
{
	fflush(stdin);	
	char loc[20],ch;
	i:
	printf("\n\nENTER YOUR LOCATION :");
	fflush(stdin);
	
	gets(loc);
		if(strcmp(loc,"NULL")==0  || strcmp(loc," ")==0 || strcmp(loc,"  ")==0 || strlen(loc)<2 || loc[0]<'A' )
		{
		printf("\t\t\t**LOCATION CANT BE EMPTY INVALID OR SHORT TOO **\n");
		goto i;
		}
		
	date();
	
	printf("\n\n");
	
	printf("\t\t\t___%s ENTERTAINMENTS ARE HERE___   \n\n",loc);
	
	FILE *first;
	first = fopen("firstpage.txt","r");
	while ((ch = getc(first)) != EOF)
	printf("%c",ch);
	fclose(first);
	system("COLOR 57");
	intro();
}

void quit()
{
	system("COLOR 57");
	fflush(stdin);
	
	printf("\n\nENTER ANY KEY TO CHECK YOUR BOOKING STATUS\n\n");
	getch();
	printf("\n\n__________________________________________________________________________________________________________\n\n");
	char ch;
	FILE *fp;
	fp = fopen("user.txt","r");
	while ((ch = getc(fp)) != EOF)
	printf("%c",ch);
	fclose(fp);
	printf("\n\n__________________________________________________________________________________________________________\n\n");
	
	char f[100];
	printf("\n\n-> GIVE YOUR FEEDBACK FOR US :");
	fflush(stdin);
	gets(f);
	printf("\n\nYOUR VALABLE FEEDBACK IS RECORDED :  %s",f);
	
	love:
	fflush(stdin);
	printf("\n\nENTER 100 TO QUIT AND ");
	printf("\n\nENTER 101 TO CONITNUE \n\t\t->");
	int q;
	scanf("%d",&q);
	if(q < 100 || q > 101)
	{
		printf("\nENTER VALID INPUT");
		goto love;
	}
	if(q==100){
		printf("\n\n\t\t\t\t                      *****THANK YOU FOR USING OUR SERVICES*****");
		exit(0);
    	}
	if(q==101)
	{
		system("cls");
		introduction();
	}
}
void login()
{
	//pranav:
	fflush(stdin);
	printf("\n----------SIGN UP BY ENTERING YOUR DETAILS----------");
	
	struct login{
	char name[50];
    int age;
    char c[10];
    char address[100];
	}s1;

   //struct login s1;

	i:
   printf("\nENTER YOUR NAME          : ");
   fflush(stdin);
   gets( s1.name);
   if(strcmp(s1.name,"NULL")==0  || strcmp(s1.name," ")==0 || strcmp(s1.name,"  ")==0 || strlen(s1.name)<2 || s1.name[0]<'A' ){
			printf("\n\t\t\t**NAME CANT BE EMPTY INVALID OR SHORT TOO **\n");
			goto i;
			}
   

   printf("\nENTER YOUR AGE           : ");
   scanf("%d", &s1.age);
   
   h:
   printf("\nENTER YOUR CONTACT NO    : ");
   scanf("%s", s1.c);
   /*int count=0;
   while(s1.c != '\0'){
   	s1.c /=10;
   	++count;
   }*/
   if(strlen(s1.c) != 10)
   //if(count != 9)
   {
   		printf("ENTER VALID CONTACT \n");
   		goto h;
   }
   
   printf("\nENTER YOUR ADDRESS       : ");
   fflush(stdin);
   gets( s1.address);

   FILE *fp;
   fp=fopen("account.txt","w");
    
    fprintf(fp,"\nNAME    : %s",s1.name);
    fprintf(fp,"\nAGE     : %d",s1.age);
    fprintf(fp,"\nADDRESS : %s",s1.address);
    fprintf(fp,"\nCONTACT : %s\n",s1.c);
    
    //fprintf(fp,"\n**************************************\n");
    fclose(fp);
    
    FILE *fpp;
	fp=fopen("userall.txt","w");
	fprintf(fpp,"\nNAME    : %s",s1.name);
    fprintf(fpp,"\nAGE     : %d",s1.age);
    fprintf(fpp,"\nADDRESS : %s",s1.address);
    fprintf(fpp,"\nCONTACT : %s\n",s1.c);
    
    //fprintf(fp,"\n**************************************\n");
    fclose(fpp);
	
	printf("\n\n-----THANK YOU FOR PROVIDING YOUR INFORMATION-----\n");
		registe();

}
void registe()
{
	fflush(stdin);
	char uname[25],pwd[25],un[25],pd[25],up[25];
	FILE *fp;
	fp=fopen("loginP.txt","w");
	printf("\n\nMAKE SURE YOUR USERNAME AND PASSWORD DOSE NOT CONTAIN ANY SPACES\n\n");
	printf("\nCREATE YOUR USER-ID      :");
	gets(un);
	klm:
	printf("\nCREATE YOUR PASSWORD     :");
	gets(pd);
	printf("\nRE-ENTER YOUR PASSWORD   :");
	gets(up);
	if(strcmp(pd,up)==0)
	{
	fprintf(fp,"%s\n",&un);
	fprintf(fp,"%s\n",&pd);
	fclose(fp);
	
	/*FILE *fpp;
    fpp=fopen("user.txt","a");
    fprintf(fpp,"\nYOUR USERNAMR IS ->%s\n",&un);
	fprintf(fpp,"\nYOUR PASSWORD IS->%s\n",&pd);
	fclose(fpp);*/
   
   
	printf("\nENTER ANY KEY TO CONTINUE :");
	getch();
	system("cls");
	logg();
	}
	else
	{
		printf("ENTER THE CORRECT PASSWORD");
		goto klm;
	}
}

void sign()
{
	fflush(stdin);
	char name[50];
	int f,z;
	surya:
	fflush(stdin);
	printf("\nARE YOU A EXSISTING COUSTOMER");
	printf("\n1-> SIGN IN [YES] | 2-> REGISTER [NO] :");
	fflush(stdin);
	scanf("%d",&z);
	if(z==1 || z==2)
	{
		if(z==1)
		logg();
		if(z==2)
		login();
	}
	else
	printf("\nENTER VALID INPUD\n");
	goto surya;
}
void logg()
{
	fflush(stdin);
	printf("\nPRESS ANY KEY TO SIGN IN\n");
	getch();
	
		{

			fflush(stdin);
			FILE *fp;
			fp=fopen("loginP.txt","r");
			char uname[25],pwd[25],un[25],pd[25];
			fscanf(fp,"%s\n%s",uname,pwd);
			lamp:
			fflush(stdin);
			printf("\n\nENTER USERNAME :");
			gets(un);
			printf("\nENTER PASSWORD :");
			gets(pd);
		if((strcmp(uname,un)==0) && (strcmp(pwd,pd)==0))
		{
			system("COLOR 3F");
			printf("\n\n LO_OGGED IN SUCCESSFULLY \n\n");
			system("cls");
			printf("\n\t\t\t\t\t\t            ***** WELCOME TO ENTERTAINMENT ZONE ***** ");
			introduction();
		}
		else
		{
			g:
			printf("\n*****LOGGING IN FAILED ENTER CORRECT USER-ID AND PASSWORD*****\n");
			printf("\nENTER 1 TO REGISTER AGAIN | ENTER 2 TO RE-ENTER USERNAME AND PASSWORD :");
			int d;
			scanf("%d",&d);
			if(d==1)
			{
				login();
			}
			if(d==2)
				goto lamp;
			else
			{
				printf("\nENTER VALID INPUT");
				goto g;
			}
		}
	}
}

void confirm()
{
	fflush(stdin);
	int x;
		printf("\n\nENTER 1 TO ADD SNACKS / ANY NUM TO CONTINUE WITHOUT SNACKS:");
		scanf("%d",&x);
		if(x==1)
		snacks();
	int k;
	kp:
	
	printf("\n\nENTER ANY KEY TO CHECK YOUR BOOKING DETAILS\n\n");
	getch();
	printf("\n\n__________________________________________________________________________________________________________\n\n");
	char ch;
	FILE *fp;
	fp = fopen("user.txt","r");
	while ((ch = getc(fp)) != EOF)
	printf("%c",ch);
	fclose(fp);
	printf("\n\n__________________________________________________________________________________________________________\n\n");
		
		
	fflush(stdin);
	printf("\n\nENTER 1 TO CONFORM YOUR BOOKING\n");
	printf("ENTER 2 TO CANCEL YOUR BOOKING :");
	scanf("%d",&k);
	if(k==1 || k==2)
	{
		if(k==1)
		{
			ap:
			fflush(stdin);
			printf("\n\n\t\t---CHOOSE YOUR PAYMENT OPTIONS---");
			int y;
			printf("\nENTER 1 FOR UP1\nENTER 2 FOR NET BANKING\n--->");
			scanf("%d",&y);
			if(y==1 || y==2)
			{
				switch(y)
				{
					case 1 :
							{
								printf("\nYOU HAVE CHOOSED UPI \n");
							pp: 
							fflush(stdin);
							printf("\nCHOOSE YOUR UPI \n1.PHONE PAY \n2.GOOGLE PAY \n3.AMAZON PAY  \n-->");
							int g;
							scanf("%d",&g);
							if(g>0 && g<4)
							{
								switch(g)
								{
									case 1 :{
											printf("\n\n YOU HAVE CHOOSED PHONE PAY ");
											payment();
											break;
											}
											
									case 2 : {
											printf("\n\n YOU HAVE CHOOSED GOOGLE PAY");
											payment();
											break;
											}
											
									case 3 :{
											printf("\n\n YOU HAVE CHOOSED AMAZON PAY");
											payment();
											break;
											}
								}
							}
							else 
							{
								printf("\nENTER VALID INPUT\n");
								goto pp;
							}
							}
					case 2 :
						{
							printf("\n\nYOU HAVE CHOOSED NET BANKING OPTION ");
							payment();
						}
				}
			}
			else 
			{
				printf("\nENTER VALID INPUT\n");
				goto ap;
			}
		}
		if(k==2)
		{
			payment();
			}	
	}
	else
	{
		printf("\nENTER VALID INPUT\n");
		goto kp;
	}
}
void payment()
{
		fflush(stdin);
		
		FILE *fp;
		fp=fopen("user.txt","a");
		
		FILE *fpp;
		fpp=fopen("userall.txt","a");

			pi:
			//fflush(stdin);
			printf("\n ENTER 1 TO MAKE YOUR PAYMENT / ENTER 2 TO QUIT PAYMENT :");
			int d;
			scanf("%d",&d);
			if(d==1 || d==2)
			{
			if(d==1){
			printf("\n\n\t\t*******************************************");
			//printf("\n\n\t\t\t  THIS BOOKING IS DONE ON :");
			//date();
			printf("\n\n\t\t\tYOUR PAYMENT IS DONE :)");
			printf("\n\n\t\t\tYOUR SEATS ARE CONFIRMEB :)");
			//date();
			printf("\n\n\t\t*******************************************");
			
			fprintf(fp,"\n\n\t\t*******************************************");
			fprintf(fp,"\n\n\t\tYOUR PAYMENT IS DONE :)");
			fprintf(fp,"\n\n\t\tYOUR SEATS ARE CONFIRMEB :)");
			fprintf(fp,"\n\t\t*******************************************");
			
			fprintf(fpp,"\n\n\t\t*******************************************");
			fprintf(fpp,"\n\n\t\tYOUR PAYMENT IS DONE :)");
			fprintf(fpp,"\n\n\t\tYOUR SEATS ARE CONFIRMEB :)");
			fprintf(fpp,"\n\t\t*******************************************");
			
			fclose(fpp);
			fclose(fp);
			
			quit();
			}												
			if(d==2){
				fflush(stdin);
			printf("\n\n\t\t***********************************************");
			printf("\n\n\t\tYOUR BOOKING IS BEEN CANCELLED SUCCESSFULLY :)");
			printf("\n\n\t\t***********************************************");
			
			fprintf(fp,"\n\n\t\t***********************************************");
			fprintf(fp,"\n\n\t\tYOUR BOOKING IS BEEN CANCELLED SUCCESSFULLY :)");
			fprintf(fp,"\n\n\t\t***********************************************");
			
			fprintf(fpp,"\n\n\t\t***********************************************");
			fprintf(fpp,"\n\n\t\tYOUR BOOKING IS BEEN CANCELLED SUCCESSFULLY :)");
			fprintf(fpp,"\n\n\t\t***********************************************");
			
			fclose(fpp);
			fclose(fp);
			
			quit();
			}
			}
			else{
			printf("\nENTER VALID INPUT\n");
			goto pi;}
}
void snacks()
{
	fflush(stdin);
	FILE *surya;
	char cp;
	int y;
	surya=fopen("snacks.txt","r");
	while((cp=getc(surya)) != EOF)
	printf("%c",cp);
	fclose(surya);
	
	FILE *fp;
	fp=fopen("user.txt","a");
	
	FILE *fpp;
	fpp=fopen("userall.txt","a");
	
	int e;
	ip:
	fflush(stdin);
	laddu:
	printf("\n\nENTER THE NUMBER CORRESPONDING TO SNACKS :");
	scanf("%d",&y);
	if(y>0 && y<13)
	{
		if(y==1 || y==2)
		{
			printf("\n\n---------------------------------------------------------------------------------------");
			printf("\nYOU HAVE CHOOSED SOFT DRINKS");
			printf("\nCHOOSE THE NO.OF DRINKS YOU WANT :");
			scanf("%d",&e);
			printf("\n\t\tPAY RS.%d FOR SOFTDRINKS TO YOUR SHOW TIMINGS",40*e);
			printf("\n\n\t***NOTE : SNACKS WILL BE PROVIDED ONLY DURING INTERVAL OF THE SHOW TIMINGS*** \n\n");
			printf("---------------------------------------------------------------------------------------\n\n");
			
			fprintf(fp,"\n\t\tPAY RS.%d FOR SOFTDRINKS TO YOUR SHOW TIMINGS",40*e);
			fprintf(fpp,"\n\t\tPAY RS.%d FOR SOFTDRINKS TO YOUR SHOW TIMINGS",40*e);
		}
		if(y>2 && y<7)
		{
			printf("\n\n---------------------------------------------------------------------------------------");
			printf("\nYOU HAVE CHOOSED CHIPS");
			printf("\nCHOOSE THE NO.OF CHIPS PACKETS YOU WANT :");
			scanf("%d",&e);
			printf("\n\t\tPAY RS.%d FOR CHIPS TO YOUR SHOW TIMINGS",35*e);
			printf("\n\n\t***NOTE : SNACKS WILL BE PROVIDED ONLY DURING INTERVAL OF THE SHOW TIMINGS*** \n\n");
			
			fprintf(fp,"\n\t\tPAY RS.%d FOR CHIPS TO YOUR SHOW TIMINGS",35*e);
			fprintf(fpp,"\n\t\tPAY RS.%d FOR CHIPS TO YOUR SHOW TIMINGS",35*e);
		}
		if(y>6 && y<10)
		{
			printf("\n\n---------------------------------------------------------------------------------------");
			printf("\nYOU HAVE CHOOSED PUFFS");
			printf("\nCHOOSE THE NO.OF PUFFS YOU WANT :");
			scanf("%d",&e);
			printf("\n\t\tPAY RS.%d FOR PUFFS TO YOUR SHOW TIMINGS",45*e);
			printf("\n\n\t***NOTE : SNACKS WILL BE PROVIDED ONLY DURING INTERVAL OF THE SHOW TIMINGS*** \n");
			printf("---------------------------------------------------------------------------------------\n\n");
			
			fprintf(fp,"\n\t\tPAY RS.%d FOR PUFFS TO YOUR SHOW TIMINGS",45*e);
			fprintf(fpp,"\n\t\tPAY RS.%d FOR PUFFS TO YOUR SHOW TIMINGS",45*e);
		}
		if(y==10)
		{
			printf("\n\n---------------------------------------------------------------------------------------");
			printf("\nYOU HAVE CHOOSED SPECIAL COMBO");
			printf("\nCHOOSE THE NO.OF SPECIAL COMBO'S YOU WANT :");
			scanf("%d",&e);
			printf("\n\t\tPAY RS.%d FOR SPECIAL COMBO TO YOUR SHOW TIMINGS",100*e);
			printf("\n\n\t***NOTE : SNACKS WILL BE PROVIDED ONLY DURING INTERVAL OF THE SHOW TIMINGS*** \n");
			printf("---------------------------------------------------------------------------------------\n\n");
			
			fprintf(fp,"\n\t\tPAY RS.%d FOR SPECIAL COMBO TO YOUR SHOW TIMINGS",100*e);
			fprintf(fpp,"\n\t\tPAY RS.%d FOR SPECIAL COMBO TO YOUR SHOW TIMINGS",100*e);
		}
		if(y==12){
		system("cls");
		introduction();}
	}
	else
	{
		printf("\nENTER VALID INPUT ");
		goto ip;
	}
	int k;
	ii:
	printf("\n\nENTER 1 TO ADD MORE EVENTS / ENTER 2 TO CONTNUE WITHOUT ADDING EXTRA EVENTS :");
	scanf("%d",&k);
	if(k<0 || k>3){
	
		printf("ENTER VALID INPUT");
			goto ii;
	}
	else
		{
				if(k==1){
				goto laddu;}
			if(k !=1)
				fclose(fp);
				fclose(fpp);
		}
}
void date()
{
	int hours, minutes, seconds, day, month, year;
	fflush(stdin);

    time_t t;   
    time(&t);
    
    FILE *fpp;
	fpp=fopen("userall.txt","a");
	
	FILE *fp;
	fp=fopen("user.txt","w");
    printf("\n\n\t\tYOU ARE DOING THIS BOOKING AT (DATE AND TIME): %s", ctime(&t));
    fprintf(fp,"\n\n**********************************************************************************************************");
    fprintf(fp,"\n\n\t\tTHIS BOOKING IS FROM (DATE AND TIME): %s", ctime(&t));
    
      fprintf(fpp,"\n\n**********************************************************************************************************");
    fprintf(fpp,"\n\n\t\tTHIS BOOKING IS FROM (DATE AND TIME): %s", ctime(&t));

	fclose(fpp);
    fclose(fp);
}

//int day11, month, year, day1, month1, year1 ;

void d()
{	
	fflush(stdin);
	
	time_t t;   
    time(&t);
    
    struct tm *local = localtime(&t);       
 
    day11 = local->tm_mday;            
    month = local->tm_mon + 1;      
    year = local->tm_year + 1900;
	day();
	
	printf("\nTODAY IS 1 -> %d/%d/%d \n",day11,month,year);
	
	int i,temp1,temp2,temp3;
	for(i=1;i<7;i++)
	{
		printf("\nWEEK DAY %d -> %d/%d/%d \n",i+1,d1,m1,y11);
		day11=d1;
		month=m1;
		year=y11;
		day();
	}
}
void day()
{
	int d,m,y;
	d=day11,m=month,y=year;
	
	//fflush(stdin);
	//printf("TODAY IS :");
	
	fflush(stdin);


 
    //printf(" %02d/%02d/%d\n", d, m, y);
	
	if(m==1 || m==3 || m==5 || m==7 || m==9 || m==11){
		if(d<31){
			d1=d+1;
			m1=m;
			y11=y;}
		if(d==31){
			d1=01;
			m1=m+1;
			y11=y;
		}	
	}
	else if (m==12){
		if(d<31){
			d1=d+1;
			m1=m;
			y11=y;}
		if(d==31){
			d1=01;
			m1=01;
			y11=y+1;
		}
	}
	else if(m==2){
		if(y%4 != 0){
			if(d<28){
				d1=d+1;
				m1=m;
				y11=y;}
			if (d==28){
				d1=01;
				m1=m+1;
				y11=y;
			}
		}
	if(y%4==0){
		if(d<29){
			d1=d+1;
			m1=m;
			y11=y;}
		if (d==29){
			d1=01;
			m1=m+1;
			y11=y;
			}
		}
	}
	if(m==4 || m==6 || m==8 || m==10 ){
		if(d<30){
			d1=d+1;
			m1=m;
			y11=y;}
		if(d==30){
			d1=01;
			m1=m+1;
			y11=y;
		}	
	}
}
void da()
{
	fflush(stdin);
	char x[25];
	int oi;
	d();
	
	FILE *fp;
	fp=fopen("user.txt","a");
	
	uj:
	k:
		nut:
	printf("\nENTER THE DATE CORESPONDING THE NUMBER IN FORMAT OF DD/MM/YYYY :");
	gets(x);
	if((strlen(x)) != 10)
	{
		printf("\nENTER VALID DATE :");
		goto nut;
	}
	printf("\nENTER THE NO. CORRESPONDING TO THE DATE YOU WANT TO CHOOSE TO BOOK YOUR TICKECTS ");
	scanf("%d",&oi);

	if(oi>0 && oi<8)
	{
		switch(oi)
		{
		case 1 : 
		{
			//printf("\n\n---------------------------------------------------");
			printf("\nYOU HAVE CHOOSED TO BOOK TICKETS FOR TODAY\n");
			printf("\n\n SORRY YOU CANT BOOK YOUR TICKECTS FOR TODAY SO PLEASE CHOOSE NEXT DAYS \n");
			goto uj;
			break;
		}
		case 2 :
		{
			printf("\n\n----------------------------------------------------------");
			printf("\nYOU HAVE CHOOSED TO BOOK TICKETS FOR TOMORROW i.e %s\n",x);
			printf("----------------------------------------------------------\n\n");
			
			fprintf(fp,"\n\n\t\t----------------------------------------------------------");
			fprintf(fp,"\n\t\tYOU HAVE CHOOSED TO BOOK TICKETS FOR TOMORROW i.e %s\n",x);
			fprintf(fp,"\t\t----------------------------------------------------------\n\n");
			fclose(fp);
			
			break;
		}
		case 3 :
		{
			printf("\n\n---------------------------------------------------------");
			printf("\nYOU HAVE CHOOSED TO BOOK TICKETS 2 DAYS FROM TODAY i.e %s\n",x);
			printf("----------------------------------------------------------\n\n");
			
			fprintf(fp,"\n\n\t\t----------------------------------------------------------");
			fprintf(fp,"\n\t\tYOU HAVE CHOOSED TO BOOK TICKETS 2 DAYS FROM TODAY i.e %s\n",x);
			fprintf(fp,"\t\t----------------------------------------------------------\n\n");
			fclose(fp);
			
			break;
		}
		case 4 :
		{
			printf("\n\n----------------------------------------------------------");
			printf("\nYOU HAVE CHOOSED TO BOOK TICKETS 3 DAYS FROM TODAY i.e %s\n",x);
			printf("----------------------------------------------------------\n\n");
			
			fprintf(fp,"\n\n\t\t----------------------------------------------------------");
			fprintf(fp,"\n\t\tYOU HAVE CHOOSED TO BOOK TICKETS 3 DAYS FROM TODAY i.e %s\n",x);
			fprintf(fp,"\t\t----------------------------------------------------------\n\n");
			fclose(fp);
			
			break;
		}
		case 5 :
		{
			printf("\n\n----------------------------------------------------------");
			printf("\nYOU HAVE CHOOSED TO BOOK TICKETS 4 DAYS FROM TODAY i.e %s \n",x);
			printf("----------------------------------------------------------\n\n");
			
			
			fprintf(fp,"\n\n\t\t----------------------------------------------------------");
			fprintf(fp,"\n\t\tYOU HAVE CHOOSED TO BOOK TICKETS 4 DAYS FROM TODAY i.e %s\n",x);
			fprintf(fp,"\t\t----------------------------------------------------------\n\n");
			fclose(fp);
			
			break;
		}
		case 6 :
		{
			printf("\n\n----------------------------------------------------------");
			printf("\nYOU HAVE CHOOSED TO BOOK TICKETS 5 DAYS FROM TODAY i.e %s\n",x);
			printf("----------------------------------------------------------\n\n");
			
			
			fprintf(fp,"\n\n\t\t----------------------------------------------------------");
			fprintf(fp,"\n\t\tYOU HAVE CHOOSED TO BOOK TICKETS 5 DAYS FROM TODAY i.e %s\n",x);
			fprintf(fp,"\t\t----------------------------------------------------------\n\n");
			fclose(fp);
			
			break;
		}
		case 7 :
		{
			printf("\n\n----------------------------------------------------------");
			printf("\nYOU HAVE CHOOSED TO BOOK TICKETS 6 DAYS FROM TODAY i.e %s\n",x);
			printf("----------------------------------------------------------\n\n");
			
			fprintf(fp,"\n\n\t\t----------------------------------------------------------");
			fprintf(fp,"\n\t\tYOU HAVE CHOOSED TO BOOK TICKETS 6 DAYS FROM TODAY i.e %s\n",x);
			fprintf(fp,"\t\t----------------------------------------------------------\n\n");
			fclose(fp);
			
			break;
		}
		}
	}
	else
	{
		printf("\nENTER VALID INPUT \n");
		goto k;
	}
}

