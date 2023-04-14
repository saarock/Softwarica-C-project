#include <stdio.h>
#include <string.h>
#include <time.h>
// Our local variables for handeling the data in any scope an we can get and put the data in thease local variable
int a = 0;
char savingAccount[] = "";
char salaryAccount[] = "";
char whatuserTells[] = "";

// Allthe user or Costumer;
struct alltheCustumers
{
    int id;
    char name[10000];
    int age;
    char homeAddress[12244];
    int mobileNumber;
    char email[10000];
    char monthlySalary[2323];
    int depositeAmount;

};

char currentCustumers[] = "";
int currentAge;
char currentAdress[] = "";
int currentMobileNumber ;
char currentEmialAddress[];
int currentMonthlySalary[];




// For welcome
char forWelcome[];


// yES no
char yesNo[];




// For choosing THe Acount;
char chooseAccount;

// options
char *optionForCustumer[] = {"type a for ==>>  Creating a new Account", "type b for ==>> you want Deposite money", "type c for ==>> withdraw money",
                             "type d for =>> Check balance.", "type e for . Search customers using the Account number"};
// char cosu









// User response while creating the new Account;
char okNot[] = "";






// Function to get the unique number;
  int getUnique_number() {
    static int counter =0;
    counter++;
    return counter;
  }









// CUstomer services
void customerServices()
{
    printf(whatuserTells);
    if (strncmp(whatuserTells, "", 1) == 0)
    {
        printf("Sure sir ");
    }
    else
    {
        printf(whatuserTells);
        printf("Sorry sir i donot understand");
    }
}






// Saving Account Open;


void  savingAccountOpen() {
    char ready[] = "";
printf("Ok You Choose Saving Account Some 2 or 3 Answer you have to Provide Us. Are You ready if yes then type yes if no type no\n");
scanf("%s", &ready);
if(strcmp(ready, "yes")==0) {
    printf("Ok let's start.\n");
        struct alltheCustumers ps;

    printf("Your provide your monthly salary\n>>");
    scanf("%d", &currentMonthlySalary);
        strcpy(ps.monthlySalary, &currentMonthlySalary);
    printf("%d ok Your Montly salary is ", ps.monthlySalary);
    printf("\n");
    printf("Your account Created Sucessfull Sir/Mam and you id is\n");
  
  int uniqueUserAcountNumber = getUnique_number();
    printf("%d",uniqueUserAcountNumber);




printf("Do you like to deposite Some Money if yes type yes if no type no\n");
char yN[] = "";
scanf("%s", &yN);
if(strcmp(yN, "yes")==0) {
printf("How much enter the amount\n");
int amount;
scanf("%d", &amount);
ps.depositeAmount = amount;
printf("%d", ps.depositeAmount);

printf("Thank you For Choosing us..");
}





} else if (strcmp(ready, "yes")==0)
{
    printf("What happen ok take a time 15 sec then We Will Start Again");
}  else 
{
                        printf("Sorry sir/mam we donot have this type of Account for the Technical Security in this type of phase if you give the Wromg Information or if you Choose Wrongtyppe Then we have to exist our programm.");
    return;
}


}










// Creating the new account
void creatingTheNewAccount()
{
    printf("Sure Sir/Mam\n");
    printf("We asked Some information about you hvae to provide us . IF OK THEN TYPE (ok) IF NOT THEN TYPE (no)\n >>");
    scanf("%s", &okNot);
    if (strcmp(okNot, "ok") == 0)
    {
        printf("Thanks for postive information Sir/Mam\n");
        printf("What is you name?\n>>");
        scanf("%s", &currentCustumers);
        // Taking the reference;
        struct alltheCustumers ps;
        char a[] = "Ok  ";

        // char askedAge[] = "What is your age?";
        strcpy(ps.name, &currentCustumers);
        strcat(a, ps.name);
        strcat(a, "    What is Your age?\n>>");
        printf(a);
        scanf("%d", &currentAge);
        // strcpy(ps.age, &currentAge);
        ps.age = currentAge;
        if (ps.age <= 18)
        {
            printf("Sorry sir/mam we cannot create your account You age in not valid");
            return;
        }
        else
        {
                char a[] = "Pleased Enter your home Address   ";
        strcat(a, ps.name);
        printf(a);
        printf("\n>>");
        scanf("%s", &currentAdress);
        strcpy(ps.homeAddress, &currentAdress);
        printf(ps.homeAddress);
        printf("\n");

          char b[] = "Pleased Enter your MobileNumber   ";
        strcat(b, ps.name);
printf(b);
printf("\n");
        // strcat(a, ps.name);
        printf("\n>>");
        scanf("%d", &currentMobileNumber);
        size_t size = sizeof(currentMobileNumber);
        // printf("%d",sizeof(currentMobileNumber));
        printf("%d", size);
        if(sizeof(currentMobileNumber) == 4) {
       ps.mobileNumber = currentMobileNumber;
              }




// For email address;

                char c[] = "Pleased Enter your Email Id ";
                 strcat(c, ps.name);
                 printf(c);
                 printf("\n");
                 scanf("%S", &currentEmialAddress);
                 strcpy(ps.email, &currentEmialAddress);
                 printf("Let's check you creadentials that you have provided till now.\n");
                 printf("Your name =>");
                 printf(ps.name);
                 printf("\n");


                    printf("Your age =>");
                 printf("%d",ps.age);
                 printf("\n");


                    printf("Your address =>");
                 printf(ps.homeAddress);
                 printf("\n");



                    printf("Your Phone Number =>");
                 printf("%d",ps.mobileNumber);
                 printf("\n");


              printf("Your email Id =>");
                  printf(ps.email);
                 printf("\n");


            printf("Is there all right if yes type yes if no type no\n");
            scanf("%s", &yesNo);
            if(strcmp(yesNo, "no") == 0) {
            printf("Let's start with new Form\n");
            // Using the recursion;
            creatingTheNewAccount();
            } else{



                 printf("Thank you for answering Kindly, Pleased press welcome\n");
                 scanf("%s", &forWelcome);

                 if(strcmp(forWelcome, "welcome") == 0) {
                    printf("Ok we have Two type oF account What type of account youn want to Choose/Create?\n");
                    printf("a => Saving account\n");
                    printf("b => Salary account\n>>");
                    char u[] = " ";
                    scanf("%s", &u);
                    printf(u);

                    // scanf("%c", &chooseAccount);
                    
                    if(strcmp(u, "a")==0)
                    {
                        savingAccountOpen();

                    } else if (strcmp(u, "b")==0)
                    {
                        // salaryAccount();
                    } else {
                        printf("Sorry sir/mam we donot have this type of Account for the Technical Security in this type of phase if you give the Wromg Information or if you Choose Wrongtyppe Then we have to exist our programm.");
                    
                    return;
                    
                    }
                    

                 }



                
        // printf(ps.mobileNumber);

        // printf();
        
        // char askedAge[] = "What is your age?";
    

            }
        }

        // printf(a)
    }
    else
    {
        printf("Sorry sir then What you like to get pleased choose the services sir what you like to get.");
        for (int i = 0; i < sizeof(optionForCustumer) / sizeof(optionForCustumer[0]); i++)
        {
            printf("%s\n", optionForCustumer[i]);
        }
        scanf("%s", &whatuserTells);
        checkWhatuserTells();
    }
}

// Adding the new Costumer
void addCostumer()
{
}

// View Costumer
void veiwCostumer()
{
}

// Function for depositing amount
void depositeAmount()
{
}

// For windDrawAmount
void widDrawAmount()
{
}

// function for checking the balance
void checkBalance()
{
}

// Search the coustumer
void searchCostemer()
{
}

void existProgram()
{
}

void checkWhatuserTells()
{
    // If a;
    if (strcmp(whatuserTells, "a") == 0)
    {
        printf("Sure Sir/Mam");
        creatingTheNewAccount();
    }

    // if b
    else if (strcmp(whatuserTells, "b" == 0))
    {
        depositeAmount();
    }
    else if (strcmp(whatuserTells, "c") == 0)
    {
        widDrawAmount();
    }
    else if (strcmp(whatuserTells, "d") == 0)
    {
        checkBalance();
    }
    else if (strcmp(whatuserTells, "e") == 0)
    {
        searchCostemer();
    }
}


//Our main function which i called Queen;
int main()
{

    printf("Welcome to the Velocity bank\n ");
    printf("What we can do for you sir/mam\n");
    for (int i = 0; i < sizeof(optionForCustumer) / sizeof(optionForCustumer[0]); i++)
    {
        printf("%s\n", optionForCustumer[i]);
    }
    printf(">>");

    scanf("%s", &whatuserTells);
    checkWhatuserTells();

    return 0;
}