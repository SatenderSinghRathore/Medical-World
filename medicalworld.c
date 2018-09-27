 #include<stdio.h>
#include<conio.h>
#include<string.h>
#include<sys/time.h>
    char name[100],fname[100],mname[100],email[20];
	int age,hchoice,choice,mno[10];
	long double rnum[20];


   main()
   {
    system("cls");
    system("COLOR 1F");
    page1();
	while(1)
    {
    page2();

    }
    getch();
    return 0;
   }


      datetime()
    {
        system("textcolor 1");
    time_t t;
    time(&t);
    system("cls");
    printf("DATE & TIME - %s",ctime(&t));
    }



	  page1()
    {
        datetime();


	printf("\n\n............................................................... ++ WELCOME TO THE MEDICAL WORLD ++..................................................................... ");
	printf("\n\n\n\n\n                                                                                                                  $$ THE GREATEST WEALTH IS HEALTH  $$ \n\n\n");
	printf("      First Name     -  ");
    scanf("%s",&name);

	printf("\n      Birth year     -  ");
	scanf("%d",&age);

	printf("\n      Father's Name  -  ");
	scanf("%s",&fname);

	printf("\n      Mother's Name  -  ");
    scanf("%s",&mname);

    printf("\n      Mobile No.     -  +91 ");
    scanf("%s",&mno);

    printf("\n      Email ID.      -  ");
    scanf("%s",&email);

    printf("\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
	printf(" \n\n                                                     Hello %s , you are in Medical world ",name);
    printf("\n\n                                                                                                                     REGISTRATION NO.-   %u",(1000000786+age+ mname[100]+ fname[100]+mno));
    printf("\n\n                                                                                                                     Name            -   %s",name);
    printf("\n\n                                                                                                                     Age                 %d",2017-age);
	printf("\n\n                                                                                                                     Mobile no.      -   +91 %s",mno);
	printf("\n\n                                                                                                                     Email ID.       -   %s",email);
	printf("\n\n\n\n press any key to CONTINUE");
	getch();


	page2();


    }





     page2()
     {

     system("cls");
     datetime();

    printf("\n\n ................................................................. ## WELCOME TO THE MEDICAL WORLD ##...................................................................\n\n");

    printf("\n\n   Please select your disease\n");
    printf("\n\n     1 - Fever \n\n     2 - Headache \n\n     3 - Stomachache\n\n     4 - Body Pain\n\n     5 - Dengue\n\n     6 - Cough\n\n");
    printf("\n\n\n\n\n   >>>>>>>>>>  Enter 0(zero) for previous page                                                                     >>>>>>>>>>  Please enter 9 for EXIT");
    printf("\n\n   Enter your choice - ");
    scanf("%d",&choice);


    switch(choice)
    {
    case 1:
        system("cls");
        printf("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++TREATMENT OF FEVER++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n\n");
        fever();
        break;
    case 2:
        system("cls");
        printf("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++TREATMENT OF HEADACHE+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n");
        headache();
        break;
    case 3:
        system("cls");
        printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++TREATMENT OF STOMACHACHE+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n");
        stomachache();
        break;
    case 4:
        system("cls");
        printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++TREATMENT OF BODY PAIN+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n");
        bodypain();
        break;
    case 5:
        system("cls");
        printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++TREATMENT OF DENGUE+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n");
        dengue();
        break;
    case 6:
        system("cls");
        printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++TREATMENT OF COUGH+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n");
        cough();
        break;
    case 0:
        system("cls");
        printf(main());
          break;
    case 9: exit(0);
           break;
    default:
        printf("\n            SORRY ! \n Invalid choice, try again ");
    }
    getch();
    }





    fever()
    {
        datetime();
        printf("\n\n\n           ..AGE..                     ..TEMPERATURE..                                             ..WHAT TO DO.. \n\n\n");
        printf("\n\n          0-3 months                   100.4 F or higher                       call the doctor, even if your child doesn't have any other signs or symptoms \n ");
        printf("\n\n          3-6 months                     up to 102 F                           Encourage your child to rest and drink plenty of fluids. Medication isn't needed.\n                                                                               Call the doctor if your child seems unusually irritable, lethargic or uncomfortable.\n");
        printf("\n\n          6-24 months	                 Above 102 F	                       Give your child acetaminophen (Tylenol, others). If your child is age 6 months \n                                                                               or older, ibuprofen (Advil, Motrin, others) is OK, too. Read the label carefully for \n                                                                               proper dosage. Don not give aspirin to an infant or toddler. Call the doctor if the \n                                                                               fever doesn't respond to the medication or lasts longer than one day.\n");
        printf("\n\n          2-17 years	                 Up to 102 F	                       Encourage your child to rest and drink plenty of fluids. Medication isn't needed.\n                                                                               Call the doctor if your child seems unusually irritable or lethargic or complains of \n                                                                               significant discomfort\n");
        printf("\n\n          18 years and up	         Up to 102 F                           Rest and drink plenty of fluids. Medication isn't needed. Call the doctor if the \n                                                                               fever is accompanied by a severe headache, stiff neck, shortness of breath, or other \n                                                                               unusual signs or symptoms");
        printf("\n\n\n\n\n                                                                                 >>>>>>>>>> Enter any key to EXIT this page!");

    }



    headache()
      {
          datetime();
        printf("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++TREATMENT OF HEADACHE+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n");
        printf("\n\n\n\n        There are three major categories of headache based upon the source of the pain \n\n           1.Primary Headaches \n\n           2.Secondary Headaches \n\n           3.Cranial Neuralgias, Facial Pain, and Other Headaches.\n\n\n\n\n\n\n\n\n\n\n\n\n\n >>>>>  Enter 0(zero) for previous page ");
        scanf("%d",&hchoice);
         switch(hchoice)
    {


    case 1:
          system("cls");
          datetime();
        printf("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++TREATMENT OF PRIMARY HEADACHES+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n\n");
        printf("\n\n\n\n What are Primary Headaches ?\n\n\n                         Primary Headaches include ->\n                                               1. Migraine \n                                               2. Tension\n                                               3. Cluster headaches \n\n");
        printf("\n  1---->>    TENSION HEADACHES  are the most common type of primary headache. \n                                Tension headaches occur more commonly among women than men. According to the World Health Organization, 1 in 20 people in");
        printf("the developed                                  world suffer with a daily tension headache.\n");
        printf("\n\n  2---->>    MIGRAINE HEADACHES are the second most common type of primary headache. Migraine headaches affect children as well as adults. Before puberty, boys and \n                                girls are affected equally by");
        printf("migraine headaches, but after puberty, more women than men are affected.\n");
        printf("\n\n  3---->>    CLUSTER HEADACHES  are a rare type of primary headache. It more commonly affects men in their late 20s though women and children can also suffer this type                                 of headache. \n\n ");
        printf("\n\n>>>>>      Primary headaches can affect the quality of life. Some people have occasional headaches that resolve quickly while others are debilitating. \n                  While these headaches are not life-threatening,");
        printf("they may be associated with symptoms that can mimic strokes.\n                            Many patients equate severe headache with migraine, but the amount of pain does not determine the diagnosis of migraine.\n");
        printf("\n\n\n\n  >>>>>> Enter any key to EXIT ");

        break;
    case 2:
         system("cls");
         datetime();
        printf("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++TREATMENT OF SECONDARY HEADACHE+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n");

        break;
    case 3:
         system("cls");
         datetime();
        printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++TREATMENT OF OTHER HEADACHES+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n");

        break;
    case 0:
        system("cls");
        printf(page2());
          break;
    case 9: exit(0);
           break;


    default:
        printf("\n            SORRY ! \n Invalid choice, try again ");
    }




    }








    stomachache()
    {
        system("cls");
        printf("\n.........................................................................TREATMENT OF STOMACHACHE.......................................................................");
        getch();
    }


    bodypain()
    {
        system("cls");
        printf("\n..........................................................................TREATMENT OF BODY PAIN........................................................................");
        getch();
    }


    dengue()
    {
        system("cls");
        printf("\n..........................................................................TREATMENT OF DENGUE...........................................................................");
        getch();
    }


     cough()
    {
        system("cls");
        printf("\n..........................................................................TREATMENT OF COUGH............................................................................");
        getch();
    }
