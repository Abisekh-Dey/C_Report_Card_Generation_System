#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
void result(char code[][100],char ch[][100],int size,char name[],double roll,char reg[],char coll[],char course[],char sem[]);
void stream(char course[]);
void semester(char sem[],char course[]);
void uroll(char Uroll[],char course[],char sem[],int key[]);
void pass(char password[],char new_password[],char salt[],int key[],char Uroll[],char course[],char sem[]);
void sub(int size,char name[],double roll,char reg[],char coll[],char course[],char sem[],int subject,char new_password[],char Uroll[]);
void find_grade(char grade[][3],char code[][100],char ch[][100],float credit[],int size,char sem[],char course[],char name[],double roll,char reg[],char coll[]);
void result1(char sem[],char course[],int size,char name[],double roll,char reg[],char coll[],char subject_code[][100],char x[][100],float credit[],int subject);
void ca(char course[],char sem[],int subject,char subject_code[][100],char x[][100]);
void pca(char course[],char sem[],int subject,char subject_code[][100],char x[][100]);
int main(){
    char password[100];
    char Uroll[100];
    char new_password[100];
    char salt[]="@";
    int subject;
    char sem[10];
    char name[50];
    double roll;
    char reg[100];
    char coll[100];
    char course[100];
    int key[]={2,5,3,4,2,6,7,9,2,4,1,3,5,8,3,1};
    int choice;
    char n[100];
    stream(course);
    semester(sem,course);
    uroll(Uroll,course,sem,key);
    pass(password,new_password,salt,key,Uroll,course,sem);
    if(strcmp(Uroll,"5A<;6?@D495")==0){
        strcpy(n,"Abisekh Dey");}
    else if(strcmp(Uroll,"5:884=@D484")==0){
        strcpy(n,"Pallabi Mondal");
    }
    if(strcmp(n,"Abisekh Dey")==0 || strcmp(n,"Pallabi Mondal")==0){
    system("cls");
    printf("___________________________________________________________________________________________________________\n");
    printf("|STUDENT NAME: %-s                                                               %s|\n",n,"Logout: [Press 0]");
    printf("|_________________________________________________________________________________________________________|\n");
    printf("|           |~~~~~~~~~~~~~~~~~~~~~~~|                                 |~~~~~~~~~~~~~~~~~~~~~~~|           |\n");
    printf("|           |REGULAR ENROLLMENT FORM|                                 |BACKLOG ENROLLMENT FORM|           |\n");
    printf("|           |       [Press 1]       |                                 |       [Press 5]       |           |\n");
    printf("|           |~~~~~~~~~~~~~~~~~~~~~~~|                                 |~~~~~~~~~~~~~~~~~~~~~~~|           |\n");
    printf("|           |~~~~~~~~~~~~~~~~~~~~~~~|                                 |~~~~~~~~~~~~~~~~~~~~~~~|           |\n");
    printf("|           |          CA           |                                 |          PCA          |           |\n");
    printf("|           |       [Press 2]       |                                 |      [Press 4]        |           |\n");
    printf("|           |~~~~~~~~~~~~~~~~~~~~~~~|    |~~~~~~~~~~~~~~~~~~~~~~~|    |~~~~~~~~~~~~~~~~~~~~~~~|           |\n");
    printf("|           |~~~~~~~~~~~~~~~~~~~~~~~|    |~~~~~~~~~~~~~~~~~~~~~~~|    |~~~~~~~~~~~~~~~~~~~~~~~|           |\n");
    printf("|           |        RESULT         |    |      ONLINE EXAM      |    |       EXAM FORM       |           |\n");
    printf("|           |       [Press 3]       |    |       [Press 11]      |    |       [Press 6]       |           |\n");
    printf("|           |~~~~~~~~~~~~~~~~~~~~~~~|    |~~~~~~~~~~~~~~~~~~~~~~~|    |~~~~~~~~~~~~~~~~~~~~~~~|           |\n");
    printf("|           |~~~~~~~~~~~~~~~~~~~~~~~|    |~~~~~~~~~~~~~~~~~~~~~~~|    |~~~~~~~~~~~~~~~~~~~~~~~|           |\n");
    printf("|           |       EXAM FORM       |                                 |     BACKLOG  FORM     |           |\n");
    printf("|           |       [Press 7]       |                                 |       [Press 8]       |           |\n");
    printf("|           |~~~~~~~~~~~~~~~~~~~~~~~|                                 |~~~~~~~~~~~~~~~~~~~~~~~|           |\n");
    printf("|           |~~~~~~~~~~~~~~~~~~~~~~~|                                 |~~~~~~~~~~~~~~~~~~~~~~~|           |\n");
    printf("|           |          MAR          |                                 |   MOOCS FOR HONOURS   |           |\n");
    printf("|           |       [Press 9]       |                                 |       [Press 10]      |           |\n");
    printf("|           |~~~~~~~~~~~~~~~~~~~~~~~|                                 |~~~~~~~~~~~~~~~~~~~~~~~|           |\n");
    printf("|___________|_______________________|_________________________________|_______________________|___________|\n");
    printf("|                                            |Enter The Choice|                                           |\n");
    printf("|____________________________________________|________________|___________________________________________|\n");
    printf("                                                      ");
    scanf("%d",&choice);
    if(choice==1){
        system("cls");
        printf(" Please Go to : https://makautexam.net/\n");
    }
    if(choice==5){
        system("cls");
        printf(" Please Go to : https://makautexam.net/\n");
    }
    if(choice==6){
        system("cls");
        printf(" Please Go to : https://makautexam.net/\n");
    }
    if(choice==7){
        system("cls");
        printf(" Please Go to : https://makautexam.net/\n");
    }
    if(choice==8){
        system("cls");
        printf(" Please Go to : https://makautexam.net/\n");
    }
    if(choice==9){
        system("cls");
        printf(" Please Go to : https://makautexam.net/\n");
    }
    if(choice==10){
        system("cls");
        printf(" Please Go to : https://makautexam.net/\n");
    }
    if(choice==11){
        system("cls");
        printf(" Please Go to : https://meet.google.com/bve-xuwi-hbq");
    }
    if(choice==3){
        system("cls");
    sub(subject,name,roll,reg,coll,course,sem,subject,new_password,Uroll);}
    if(choice==2){
        system("cls");
        if(strcmp(course,"ELECTRONICS AND COMMUNICATION ENGINEERING")==0 && strcmp(sem,"3")==0){
    char subject_code[][100]={"EC301","EC302","EC303","EC304","PCC-CS301","BS-M301"};
    char x[][100]={"Electronic Device","Digital Signal Design","Signals and System","Network Theory","Data Structure & Algorithm(ES)","Mathemetics III"};
    subject=sizeof(x)/sizeof x[0];
    ca(course,sem,subject,subject_code,x);}
    if(strcmp(course,"ELECTRONICS AND COMMUNICATION ENGINEERING")==0 && strcmp(sem,"4")==0){
    char subject_code[][100]={"EC401","EC402","EC403","ES-CS401","BS-M401","BS-B401"};
    char x[][100]={"Analog Communication","Analog Electronic Circuit","Microprocessor and Microcontrollers","Design and Analysis of Algorithm","Numerical Methods","Biology for Engineers"};
    subject=sizeof(x)/sizeof x[0];
    ca(course,sem,subject,subject_code,x);}
    if(strcmp(course,"COMPUTER SCIENCE AND ENGINEERING")==0 && strcmp(sem,"3")==0){
    char subject_code[][100]={"EC301","PCC-CS301","PCC-CS302","BSC301","HSMC301"};
    char x[][100]={"ANALOG AND DIGITAL ELECTRONICS","DATA STRUCTURE & ALGORITHM","COMPUTER ORGANISATION","Mathemetics III(DIFFERENTIAL CALCULUS)","ECONOMICS FOR ENGINEERS(HUMANITIES-II)"};
    subject=sizeof(x)/sizeof x[0];
    ca(course,sem,subject,subject_code,x);}
    if(strcmp(course,"COMPUTER SCIENCE AND ENGINEERING")==0 && strcmp(sem,"4")==0){
    char subject_code[][100]={"PCC-CS401","PCC-CS402","PCC-CS403","PCC-CS404","BSC 401","MC401"};
    char x[][100]={"DISCRETE MATHEMETICS","COMPUTER ARCHITECTURE","FORMAL LANGUAGE & AUTOMATA THEORY","Design and Analysis of Algorithm","BIOLOGY","ENVIRONMENTAL SCIENCES"};
    subject=sizeof(x)/sizeof x[0];
    ca(course,sem,subject,subject_code,x);}
    }
    if(choice==4){
        system("cls");
        if(strcmp(course,"ELECTRONICS AND COMMUNICATION ENGINEERING")==0 && strcmp(sem,"3")==0){
    char subject_code[][100]={"EC391","EC392","PCC-CS391","MC381"};
    char x[][100]={"Electronic Device Lab","Digital Signal Design Lab","Data Structure Lab(ES)","Environmental Science"};
    subject=sizeof(x)/sizeof x[0];
    pca(course,sem,subject,subject_code,x);}
    if(strcmp(course,"ELECTRONICS AND COMMUNICATION ENGINEERING")==0 && strcmp(sem,"4")==0){
    char subject_code[][100]={"EC491","EC492","EC493","BS-M(CS)491","HS-HU481"};
    char x[][100]={"Analog Communication Lab","Analog Electronic Circuit Lab","Microprocessor and Microcontrollers Lab","Numerical Methods Lab","Soft Skill Development Lab"};
    subject=sizeof(x)/sizeof x[0];
    pca(course,sem,subject,subject_code,x);}
    if(strcmp(course,"COMPUTER SCIENCE AND ENGINEERING")==0 && strcmp(sem,"3")==0){
    char subject_code[][100]={"PCC-CS393","ES-CS391","PCC-CS391","PCC-CS392"};
    char x[][100]={"IT WORKSHOP(SCI LAB/MATLAB/PYTHON/R)","ANALOG AND DIGITAL ELECTRONICS","DATA STRUCTURE & ALGORITHM LAB","COMPUTER ORGANISATION LAB"};
    subject=sizeof(x)/sizeof x[0];
    pca(course,sem,subject,subject_code,x);}
    if(strcmp(course,"COMPUTER SCIENCE AND ENGINEERING")==0 && strcmp(sem,"4")==0){
    char subject_code[][100]={"PCC-CS492","PCC-CS494"};
    char x[][100]={"COMPUTER ARCHITECTURE","Design and Analysis of Algorithm"};
    subject=sizeof(x)/sizeof x[0];
    pca(course,sem,subject,subject_code,x);}
    }
    if(choice==0){
        system("cls");
        return 0;
    }}
    return 0;
}
void stream(char course[]){
    printf("Enter Stream: ");
    fgets(course,100,stdin);
    course[strcspn(course,"\n")]='\0';
    for(int i=0;course[i]!='\0';i++){
        if(course[i]>='a' && course[i]<='z'){
            course[i]=course[i]-'a'+'A';
        }
    }
    if(strcmp(course, "ECE") == 0) {
    strcpy(course, "ELECTRONICS AND COMMUNICATION ENGINEERING");
    }
    else if(strcmp(course, "CSE") == 0) {
    strcpy(course, "COMPUTER SCIENCE AND ENGINEERING");
    }
    for(int i=0;course[i]!='\0' || strspn(course, " \t\r\n") == strlen(course);i++){//it will check if the course string is full form of "ECE" or "CSE" or not but if the user gives input an "Enter key" first it will take this as "\n"; then due to strcspn returns only the initial length when first it will found \n then it will return 1 but course string is empty so strlen(course) will return 0 then it will insert the loop
        if((strcmp(course,"ELECTRONICS AND COMMUNICATION ENGINEERING")!=0 && strcmp(course,"COMPUTER SCIENCE AND ENGINEERING")!=0) || isdigit(course[i])){
            for(int i=0;i<3;i++){
                system("cls");
            printf("Re-enter Stream: ");
            fgets(course,100,stdin);
            course[strcspn(course,"\n")]='\0';
            for(int i=0;course[i]!='\0';i++){
            if(course[i]>='a' && course[i]<='z'){
            course[i]=course[i]-'a'+'A';
             }
            }
            if(strcmp(course, "ECE") == 0) {
            strcpy(course, "ELECTRONICS AND COMMUNICATION ENGINEERING");
            break;
            }
            else if(strcmp(course, "CSE") == 0) {
            strcpy(course, "COMPUTER SCIENCE AND ENGINEERING");
            break;}
            if(strcmp(course,"ECE")!=0 && strcmp(course,"CSE")!=0 && i==2){
                printf("Invalid Stream!\n");
                printf("__________________________________XXXXX____________________________________\n");
                return;}
            }
        }
    }
}
void semester(char sem[],char course[]){
    if(strcmp(course,"ELECTRONICS AND COMMUNICATION ENGINEERING")!=0 && strcmp(course,"COMPUTER SCIENCE AND ENGINEERING")!=0){
        return;
    }
    else{
    printf("Enter Semester: ");
    fgets(sem,10,stdin);
    sem[strcspn(sem,"\n")]='\0';
    if(strcmp(sem,"3")!=0 && strcmp(sem,"4")!=0){
        for(int i=0;i<3;i++){
            system("cls");
            printf("Re-enter Semester: ");
            fgets(sem,10,stdin);
            sem[strcspn(sem,"\n")]='\0';
            if(strcmp(sem,"3")==0 || strcmp(sem,"4")==0){
                break;
            }
        }
        if(strcmp(sem,"3")!=0 && strcmp(sem,"4")!=0){
            printf("Invalid Semester!\n");
            printf("__________________________________XXXXX____________________________________\n");
            return;
        }
    }
    }
}
void uroll(char Uroll[],char course[],char sem[],int key[]){
    if((strcmp(course,"ELECTRONICS AND COMMUNICATION ENGINEERING")==0 || strcmp(sem,"3")==0 || strcmp(sem,"4")==0) && (strcmp(course,"COMPUTER SCIENCE AND ENGINEERING")==0 || strcmp(sem,"3")==0 || strcmp(sem,"4")==0)){
    system("cls");
    printf("______________________________________________________\n");
    printf("|Enter University Roll Number: ");
    fgets(Uroll,100,stdin);
    Uroll[strcspn(Uroll,"\n")]='\0';
    for(int i=0;Uroll[i]!='\0';i++){
        Uroll[i]=Uroll[i]+key[i];
    }
    printf("|____________________________________________________|\n");
    for(int i=0;Uroll[i]!='\0' || strspn(Uroll, " \t\r\n") == strlen(Uroll);i++){//checking the first character of Uroll whether whitespace character(\t,\r,\n) or not
        if((strcmp(Uroll,"3<97499;254")!=0 && strcmp(Uroll,"3554279;243")!=0) || (Uroll[i]=='+' && Uroll[i]=='-' && Uroll[i]=='>' && Uroll[i]=='<' && Uroll[i]=='?' && Uroll[i]==',' && isalpha(Uroll[i]) && Uroll[i]=='!' && Uroll[i]=='@' && Uroll[i]=='#' && Uroll[i]=='$' && Uroll[i]=='%' && Uroll[i]=='^' && Uroll[i]=='&' && Uroll[i]=='*' && Uroll[i]=='_' && Uroll[i]=='=' && Uroll[i]==';')){
            system("cls");
            printf("___________________________________________________\n");
            printf("|Re-Enter University Roll Number                  |\n");
            i--;
            printf("|Enter University Roll Number:  ");
            fgets(Uroll,100,stdin);
            printf("|_________________________________________________|\n");
            Uroll[strcspn(Uroll,"\n")]='\0';
            for(int i=0;Uroll[i]!='\0';i++){
            Uroll[i]=Uroll[i]+key[i];
                }
            }
        }
    for(int i=0;Uroll[i]!='\0';i++){
        Uroll[i]=Uroll[i]+key[i];
    } 
}}
void pass(char password[],char new_password[],char salt[],int key[],char Uroll[],char course[],char sem[]){
    if((strcmp(course,"ELECTRONICS AND COMMUNICATION ENGINEERING")==0 || strcmp(sem,"3")==0 || strcmp(sem,"4")==0) && (strcmp(course,"COMPUTER SCIENCE AND ENGINEERING")==0 || strcmp(sem,"3")==0 || strcmp(sem,"4")==0)){
    printf("|Enter Password: ");
    // fgets(password,100,stdin);
    // password[strcspn(password,"\n")]='\0';
    for (int i = 0; password[i] != '\r'; i++) {
        password[i] = getch(); // Use _getch() from conio.h to read a character without displaying it

        if (password[i] == '\r') {
            password[i] = '\0'; // Null-terminate the string
            break;
        } else if (password[i] == 8 && i > 0) { // ASCII value 8 represents backspace
            i =i-2;
            printf("\b \b"); // Move the cursor back, overwrite with a space, and move the cursor back again
        } else {
            printf("*");
        }
    }
    if(password[0]>='a' && password[0]<='z'){
        password[0]=password[0]-'a'+'A';
    }
    for(int i=1;password[i]!='\0';i++){
        if(password[i]>='A' && password[i]<='Z'){
            password[i]=password[i]-'A'+'a';
        }
    }
    for(int i=0;password[i]!='\0';i++){
        password[i]=password[i]+key[i];
    }
    printf("\n|____________________________________________________|\n");
    if((strcmp(password,"Cglwgqo;241$&")!=0) && (strcmp(password,"Rfopchp:47A")!=0)){
        system("cls");
        printf("____________________________________\n");
        printf("|Access Denied                     |\n");
        for(int i=0;i<3;i++){
            system("cls");
        printf("****Access Denied****\n");
        printf("_____________________\n");
        printf("Re-enter Password: ");
        for (int i = 0; password[i] != '\r'; i++) {
        password[i] = getch(); // Use _getch() from conio.h to read a character without displaying it

        if (password[i] == '\r') {
            password[i] = '\0'; // Null-terminate the string
            break;
        } else if (password[i] == 8 && i > 0) { // ASCII value 8 represents backspace
            i =i-2;
            printf("\b \b"); // Move the cursor back, overwrite with a space, and move the cursor back again
        } else {
            printf("*");
        }
    }
    printf("\n");
            if(password[0]>='a' && password[0]<='z'){
        password[0]=password[0]-'a'+'A';
        }
        for(int i=1;password[i]!='\0';i++){
        if(password[i]>='A' && password[i]<='Z'){
            password[i]=password[i]-'A'+'a';
        }
        }
        for(int i=0;password[i]!='\0';i++){
        password[i]=password[i]+key[i];
        }
            if(strcmp(password,"Cglwgqo;241$&")==0){
                break;
            }
            else if(strcmp(password,"Rfopchp:47A")==0){
                break;
            }
            else if((strcmp(password,"Cglwgqo;241$&")!=0 && strcmp(password,"Rfopchp:47A")!=0) && i==2){
                system("cls");
                printf("Verification Failed!\n");
                printf("__________________________________XXXXX____________________________________\n");
                return;
            }
    }}
    strcpy(new_password,salt);
    strcat(new_password,password);
    strcat(new_password,salt);
    // for(int i=0;i<100;i++){
    //     key[i]=i+1;
    // }
    for(int i=0;new_password[i]!='\0';i++){
        new_password[i]=new_password[i]+key[i];
    }
    if((strcmp(new_password,"BHjpymxx=654).C")==0 && strcmp(Uroll,"5:884=@D484")==0) || (strcmp(new_password,"BWisrioy<88DE")==0 && strcmp(Uroll,"5A<;6?@D495")==0)){
        printf("|               ****Access Denied****                |\n");
        printf("|   **Wrong University Roll Number or Password!**    |\n");
        printf("|____________________________________________________|\n");
    }
}}
void sub(int size,char name[],double roll,char reg[],char coll[],char course[],char sem[],int subject,char new_password[],char Uroll[]){
    if((strcmp(new_password,"BHjpymxx=654).C")==0 && strcmp(Uroll,"5A<;6?@D495")==0 && strcmp(course,"ELECTRONICS AND COMMUNICATION ENGINEERING")==0) || (strcmp(new_password,"BWisrioy<88DE")==0 && strcmp(Uroll,"5:884=@D484")==0 && strcmp(course,"COMPUTER SCIENCE AND ENGINEERING")==0)){
    system("cls");
    printf("Enter Personal Details\n");
    getchar();
    printf("Enter Name: ");
    fgets(name,50,stdin);
    name[strcspn(name,"\n")]='\0';
    //getchar();
    printf("Enter Roll Number: ");
    scanf("%lf",&roll);
    printf("Enter Registration Number: ");
    getchar();
    fgets(reg,100,stdin);
    reg[strcspn(reg,"\n")]='\0';
    printf("Enter The Collage Name: ");
    fgets(coll,100,stdin);
    coll[strcspn(coll,"\n")]='\0';
    // printf("Enter The Number of Subjects: ");
    // scanf("%d",&subject);
    //char x[subject][100];
    if(strcmp(course,"ELECTRONICS AND COMMUNICATION ENGINEERING")==0 && strcmp(sem,"4")==0){
    char subject_code[][100]={"EC401","EC402","EC403","ES-CS401","BS-M401","BS-B401","EC491","EC492","EC493","BS-M(CS)491","HS-HU481"};
    char x[][100]={"Analog Communication","Analog Electronic Circuit","Microprocessor and Microcontrollers","Design and Analysis of Algorithm","Numerical Methods","Biology for Engineers","Analog Communication Lab","Analog Electronic Circuit Lab","Microprocessor and Microcontrollers Lab","Numerical Methods Lab","Soft Skill Development Lab"};
    subject=sizeof(x)/sizeof x[0];
    result(subject_code,x,subject,name,roll,reg,coll,course,sem);
    }
    if(strcmp(course,"ELECTRONICS AND COMMUNICATION ENGINEERING")==0 && strcmp(sem,"3")==0){
    char subject_code[][100]={"EC301","EC302","EC303","EC304","PCC-CS301","BS-M301","EC391","EC392","PCC-CS391","MC381"};
    char x[][100]={"Electronic Device","Digital Signal Design","Signals and System","Network Theory","Data Structure & Algorithm(ES)","Mathemetics III","Electronic Device Lab","Digital Signal Design Lab","Data Structure Lab(ES)","Environmental Science"};
    subject=sizeof(x)/sizeof x[0];
    result(subject_code,x,subject,name,roll,reg,coll,course,sem);
    }
    if(strcmp(course,"COMPUTER SCIENCE AND ENGINEERING")==0 && strcmp(sem,"4")==0){
    char subject_code[][100]={"PCC-CS401","PCC-CS402","PCC-CS403","PCC-CS404","BSC 401","MC401","PCC-CS492","PCC-CS494"};
    char x[][100]={"DISCRETE MATHEMETICS","COMPUTER ARCHITECTURE","FORMAL LANGUAGE & AUTOMATA THEORY","Design and Analysis of Algorithm","BIOLOGY","ENVIRONMENTAL SCIENCES","COMPUTER ARCHITECTURE","Design and Analysis of Algorithm"};
    subject=sizeof(x)/sizeof x[0];
    result(subject_code,x,subject,name,roll,reg,coll,course,sem);
    }
    if(strcmp(course,"COMPUTER SCIENCE AND ENGINEERING")==0 && strcmp(sem,"3")==0){
    char subject_code[][100]={"EC301","PCC-CS301","PCC-CS302","BSC301","HSMC301","PCC-CS393","ES-CS391","PCC-CS391","PCC-CS392"};
    char x[][100]={"ANALOG AND DIGITAL ELECTRONICS","DATA STRUCTURE & ALGORITHM","COMPUTER ORGANISATION","Mathemetics III(DIFFERENTIAL CALCULUS)","ECONOMICS FOR ENGINEERS(HUMANITIES-II)","IT WORKSHOP(SCI LAB/MATLAB/PYTHON/R)","ANALOG AND DIGITAL ELECTRONICS","DATA STRUCTURE & ALGORITHM LAB","COMPUTER ORGANISATION LAB"};
    subject=sizeof(x)/sizeof x[0];
    result(subject_code,x,subject,name,roll,reg,coll,course,sem);
    }}
}
void find_grade(char grade[][3],char code[][100],char ch[][100],float credit[],int size,char sem[],char course[],char name[],double roll,char reg[],char coll[]){
    int O=10,E=9,A=8,B=7,C=6,D=5,F=2,I=2;
    float sum=0;
    float SGPA;
    int find =0;
    int total_credit[size];
    float credit_sum=0;
    for (int i = 0; i < size; i++) {
        system("cls");
        printf("Please Be Very Careful When Entering The Marks!\n");
        for(int k=i;k<=i;k++){
        printf("[%d]=> [%s].Enter The Grades of [%s]: ",i+1,code[i],ch[i]);
        for(int j=0;j<1;j++){
        scanf(" %c",&grade[i][j]);
        for(int j=0;j<1;j++){
        if(grade[i][j]>='a' && grade[i][j]<='z'){
            grade[i][j]=grade[i][j]-'a'+'A';}}
        if(grade[i][j]!='O' && grade[i][j]!='E' && grade[i][j]!='A' && grade[i][j]!='B' && grade[i][j]!='C' && grade[i][j]!='D' && grade[i][j]!='F' && grade[i][j]!='I'){
            system("cls");
            printf("Re-Enter The Grades!\n");
                k--;
                continue;
             }
             }}
    // for(int i=0;i<3;i++){
    // if(grade[i][j]!='O' && grade[i][j]!='E' && grade[i][j]!='A' && grade[i][j]!='B' && grade[i][j]!='C' && grade[i][j]!='D' && grade[i][j]!='F' && grade[i][j]!='I'){
    //         printf("[%d]=> [%s].Re-Enter The Grades of [%s]: ",i+1,code[i],ch[i]);
    //         scanf(" %c",&grade[i][j]);
    //         for(int j=0;j<1;j++){
    //         if(grade[i][j]>='a' && grade[i][j]<='z'){
    //         grade[i][j]=grade[i][j]-'a'+'A';}}
    //         if(grade[i][j]=='O' && grade[i][j]=='E' && grade[i][j]=='A' && grade[i][j]=='B' && grade[i][j]=='C' && grade[i][j]=='D' && grade[i][j]=='F' && grade[i][j]=='I'){
    //         break;
    //         }
    //         else if(grade[i][j]!='O' && grade[i][j]!='E' && grade[i][j]!='A' && grade[i][j]!='B' && grade[i][j]!='C' && grade[i][j]!='D' && grade[i][j]!='F' && grade[i][j]!='I'){
    //             i--;
    //         }
    //         else if(i==2){
    //             return;
    //         }
        
    // }}}
    //grade[i][strcspn(grade[i], "\n")] = '\0';
    // if(!(strcmp(grade[i], "O") == 0 || strcmp(grade[i], "E") == 0 || strcmp(grade[i], "A") == 0 || strcmp(grade[i], "B") == 0 || strcmp(grade[i], "C") == 0 || strcmp(grade[i], "D") == 0 || strcmp(grade[i], "F") == 0 || strcmp(grade[i], "I") == 0)){
    //     for(int i=0;i<3;i++){
    //     printf("[%d]=> [%s].Re-Enter The Grades of [%s]: ",i+1,code[i],ch[i]);
    //     getchar();
    // fgets(grade[i], 3, stdin);
    //     for(int j=0;grade[i][j]!='\0';j++){
    //     if(grade[i][j]>='a' && grade[i][j]<='z'){
    //         grade[i][j]=grade[i][j]-'a'+'A';
    //     }
    // }
    // grade[i][strcspn(grade[i], "\n")] = '\0';
    //     if(strcmp(grade[i], "O") == 0 || strcmp(grade[i], "E") == 0 || strcmp(grade[i], "A") == 0 || strcmp(grade[i], "B") == 0 || strcmp(grade[i], "C") == 0 || strcmp(grade[i], "D") == 0 || strcmp(grade[i], "F") == 0 || strcmp(grade[i], "I") == 0){
    //         break;
    //     }
    //     if((strcmp(grade[i], "O") == 0 || strcmp(grade[i], "E") == 0 || strcmp(grade[i], "A") == 0 || strcmp(grade[i], "B") == 0 || strcmp(grade[i], "C") == 0 || strcmp(grade[i], "D") == 0 || strcmp(grade[i], "F") == 0 || strcmp(grade[i], "I") == 0)){
    //         i--;
    //         printf("Wrong Grade Entered!\n");
    //     }
    //     if(i==2){
    //         printf("Exceeded maximum attempts. Ending program.\n");
    //         printf("__________________________________XXXXX____________________________________\n"); 
    //         return;
    //     }
    // }}
    for(int j=i;j<=i;j++){
    printf("[%d]=> [%s].Enter Credit of [%s]: ",i+1,code[i],ch[i]);
    scanf("%f",&credit[i]);
    if(credit[i]>4){
            printf("Re-enter Valid Credit\n");
            j--;
            continue;
        }}
        printf("Please Be Very Careful When Entering The Marks!\n");
}
}
void result(char code[][100],char ch[][100],int size,char name[],double roll,char reg[],char coll[],char course[],char sem[]){
    char grade[size][3];
    int marks[size];
    int CA[size];
    int ATTENDENCE[size];
    float credit[size];
    int choice;
    int O=10,E=9,A=8,B=7,C=6,D=5,F=2,I=2;
    printf("___________________________________________________________________\n");
    printf("Do You Want to Put Only The Grade?                  if Yes Press[1]\n");
    printf("Do You Want Enter Marks Manually for Each Subjects? if Yes Press[2]\n");
    scanf("%d",&choice);
    if(choice==1){
        find_grade(grade,code,ch,credit,size,sem,course,name,roll,coll,reg);
    }
    else if(choice==2){
    system("cls");
    printf("Please Be Very Careful When Entering The Marks!\n");
    for(int i=0;i<size;i++){
        // printf("%d.Enter The Subject Name: ",i+1);
        // getchar();
        // fgets(ch[i],100,stdin);
        // ch[i][strcspn(ch[i],"\n")]='\0';
        for(int j=i;j<=i;j++){
        printf("[%s].Enter the Marks of [%s] in 70: ",code[i],ch[i]);
        scanf("%d",&marks[i]);
        if(marks[i]>70 || marks[i]<0){
        printf("**MARKS SHOULD BE BETWEEN 0 & 70 \n");
        j--;
        continue;}}
        for(int j=i;j<=i;j++){
        printf("[%s].Enter the Marks of [%s] in CA IN 25: ",code[i],ch[i]);
        scanf("%d",& CA[i]);
        if(CA[i]>25 || CA[i]<0){
        printf("**MARKS OF CA SHOULD BE BETWEEN 0 & 25 \n");
        j--;
        continue;}}
        for(int j=i;j<=i;j++){
        printf("[%s].Enter the Marks OF [%s] in ATTENDENCE IN 5: ",code[i],ch[i]);
        scanf("%d",& ATTENDENCE[i]);
        if(ATTENDENCE[i]>5 || ATTENDENCE[i]<0){
        printf("**MARKS OF ATTENDENCE SHOULD BE BETWEEN 0 & 5 \n");
        j--;
        continue;}}
        for(int j=i;j<=i;j++){
        printf("[%s].Enter The Credit of [%s]: ",code[i],ch[i]);
        scanf("%f",&credit[i]);
        if(credit[i]>4){
            printf("Re-enter Valid Credit\n");
            j--;
            continue;
        }}
        system("cls");
        printf("Please Be Very Careful When Entering The Marks!\n");
    }
    }
    float sum=0;
    float SGPA;
    int find =0;
    int total_credit[size];
    float credit_sum=0;
    system("cls");

            printf("______________________________________________________________________________________________________________________\n");
            printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~PROVISIONAL GRADE CARD~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
            if(strcmp(sem,"3")==0){
            printf("|                                SECOND YEAR FIRST SEMESTER EXAMINATION OF 2022-23                                   |\n");
            }
            if(strcmp(sem,"4")==0){
            printf("|                                SECOND YEAR SECOND SEMESTER EXAMINATION OF 2022-23                                  |\n");
            }
            printf("|____________________________________________________________________________________________________________________|\n");
            printf("|%-8s %-47s|%-15s%-44.lf|\n", "NAME:", name, "ROLL NUMBER:", roll);
            printf("|________________________________________________________|___________________________________________________________|\n");
            printf("|%-22s %-93s|\n", "REGISTRATION NUMBER:", reg);
            printf("|____________________________________________________________________________________________________________________|\n");
            if(strcmp(course,"ELECTRONICS AND COMMUNICATION ENGINEERING")==0){
            printf("|PROGRAM: BACHELOR OF TECHNOLOGY IN ELECTRONICS & TELE-COMMUNICATION ENGINEERING                                     |\n");}
            if(strcmp(course,"COMPUTER SCIENCE AND ENGINEERING")==0){
            printf("|PROGRAM: BACHELOR OF TECHNOLOGY IN COMPUTER SCIENCE & ENGINEERING                                                   |\n");}
            printf("|____________________________________________________________________________________________________________________|\n");
            printf("|%-14s %-101s|\n","COLLAGE NAME:",coll);
            printf("|____________________________________________________________________________________________________________________|\n");
            printf("______________________________________________________________________________________________________________________\n");
            printf("|%-15s|%-40s|%-14s|%-14s|%-14s|%-14s|\n","Subject Code","Subject Offered","Letter Grade","Points","Credit","Credit Point");
            printf("|_______________|________________________________________|______________|______________|______________|______________|\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<1;j++){
        if(marks[i]+CA[i]+ATTENDENCE[i]>=90 && marks[i]+CA[i]+ATTENDENCE[i]<=100 || grade[i][j]=='O'){
            printf("|%-15s|%-40s|%-14s|%-14d|%-14.1f|%-14.f|\n",code[i],ch[i],"O",O,credit[i],credit[i]*O);
            total_credit[i]= credit[i]*O;       }
        else if(marks[i]+CA[i]+ATTENDENCE[i]>=80 && marks[i]+CA[i]+ATTENDENCE[i]<=89 || grade[i][j]=='E'){
            printf("|%-15s|%-40s|%-14s|%-14d|%-14.1f|%-14.f|\n",code[i],ch[i],"E",E,credit[i],credit[i]*E);
            total_credit[i]= credit[i]*E;        }
        else if(marks[i]+CA[i]+ATTENDENCE[i]>=70 && marks[i]+CA[i]+ATTENDENCE[i]<=79 || grade[i][j]=='A'){
            printf("|%-15s|%-40s|%-14s|%-14d|%-14.1f|%-14.f|\n",code[i],ch[i],"A",A,credit[i],credit[i]*A);
            total_credit[i]= credit[i]*A;        }
        else if(marks[i]+CA[i]+ATTENDENCE[i]>=60 && marks[i]+CA[i]+ATTENDENCE[i]<=69 || grade[i][j]=='B'){
            printf("|%-15s|%-40s|%-14s|%-14d|%-14.1f|%-14.f|\n",code[i],ch[i],"B",B,credit[i],credit[i]*B);
            total_credit[i]= credit[i]*B;        }
        else if(marks[i]+CA[i]+ATTENDENCE[i]>=50 && marks[i]+CA[i]+ATTENDENCE[i]<=59 || grade[i][j]=='C'){
            printf("|%-15s|%-40s|%-14s|%-14d|%-14.1f|%-14.f|\n",code[i],ch[i],"C",C,credit[i],credit[i]*C);
            total_credit[i]= credit[i]*C;        }
        else if(marks[i]+CA[i]+ATTENDENCE[i]>=40 && marks[i]+CA[i]+ATTENDENCE[i]<=49 || grade[i][j]=='D'){
            printf("|%-15s|%-40s|%-14s|%-14d|%-14.1f|%-14.f|\n",code[i],ch[i],"D",D,credit[i],credit[i]*D);
            total_credit[i]= credit[i]*D;        }
        else if(marks[i]+CA[i]+ATTENDENCE[i]>0 && marks[i]+CA[i]+ATTENDENCE[i]<=39 || grade[i][j]=='F'){
            printf("|%-15s|%-40s|%-14s|%-14d|%-14.1f|%-14.f|\n",code[i],ch[i],"F",F,credit[i],credit[i]*F);
            total_credit[i]= credit[i]*F;        }
        else if(marks[i]+CA[i]+ATTENDENCE[i]==0 || grade[i][j]=='I'){
            printf("|%-15s|%-40s|%-14s|%-14d|%-14.1f|%-14.f|\n",code[i],ch[i],"I",I,credit[i],credit[i]*I);
            total_credit[i]= credit[i]*I;        }
        else if((marks[i]+CA[i]+ATTENDENCE[i]>100)||(grade[i][j]!='O' && grade[i][j]!='E' && grade[i][j]!='A' && grade[i][j]!='B' && grade[i][j]!='C' && grade[i][j]!='D' && grade[i][j]!='F' && grade[i][j]!='I')){
            printf("|%-15s|%-40s|%-14s|%-14s|%-14s|%-14s|\n",code[i],ch[i],"Invalid","Invalid","Invalid","Invalid");
            printf("|_______________|________________________________________|______________|______________|______________|______________|\n");
            printf("|%-116s|\n","**PLEASE DO CHECK THE NUMBERS YOU HAVE ENTERED");
            printf("|____________________________________________________________________________________________________________________|\n");
            return;}
        else{
            printf("|YOU HAVE ENTERED WRONG INFORMATION                                                                                  |\n");}
    sum = sum+total_credit[i];
    if((total_credit[i]>=1 && total_credit[i]<=6)&&(grade[i][j]!='O' && grade[i][j]!='E' && grade[i][j]!='A' && grade[i][j]!='B' && grade[i][j]!='C' && grade[i][j]!='D' && grade[i][j]!='F' && grade[i][j]!='I')){
        find=1;
    }
    credit_sum=credit_sum+credit[i];
    SGPA=(sum/credit_sum);
    printf("|_______________|________________________________________|______________|______________|______________|______________|\n");
    }}
    printf("|%-15s|%-40s|%-14s|%-14s|%-14.f|%-14.f|\n","","","","Total",credit_sum,sum);
    printf("|_______________|________________________________________|______________|______________|______________|______________|\n");
    if(find){
        printf("|%-40s %-15s|%-59s|\n","SGPA:","","");
        printf("|%-40s %-15s|%-59s|\n","RESULT SEMESTER: XP","","");
    }
    else{
    printf("|%-6s%-50.2f|%-15s%-44s|\n","SGPA:",SGPA,"","");
    printf("|%-56s|%-15s%-44s|\n","RESULT SEMESTER: P","","");
    }
    printf("|________________________________________________________|___________________________________________________________|\n");
    printf("***For the students who are failed to appear in the examination Grade obtained : I***\n");
    printf("***Grade obtained for incomplete result : I\n***");
    printf("If you have more quaries goto : https://makautexam.net/\n");
    printf("Do You Want To Check Another? If Yes [Press 1]: ");
    scanf("%d",&choice);
    int subject;
    if(choice==1){
    semester(sem,course);
    result1(sem,course,size,name,roll,reg,coll,code,ch,credit,subject);
    }
}
void result1(char sem[],char course[],int size,char name[],double roll,char reg[],char coll[],char subject_code[][100],char x[][100],float credit[],int subject){
    if(strcmp(course,"ELECTRONICS AND COMMUNICATION ENGINEERING")==0 && strcmp(sem,"4")==0){
    char subject_code[][100]={"EC401","EC402","EC403","ES-CS401","BS-M401","BS-B401","EC491","EC492","EC493","BS-M(CS)491","HS-HU481"};
    char x[][100]={"Analog Communication","Analog Electronic Circuit","Microprocessor and Microcontrollers","Design and Analysis of Algorithm","Numerical Methods","Biology for Engineers","Analog Communication Lab","Analog Electronic Circuit Lab","Microprocessor and Microcontrollers Lab","Numerical Methods Lab","Soft Skill Development Lab"};
    subject=sizeof(x)/sizeof x[0];
    result(subject_code,x,subject,name,roll,reg,coll,course,sem);
    }
    if(strcmp(course,"ELECTRONICS AND COMMUNICATION ENGINEERING")==0 && strcmp(sem,"3")==0){
    char subject_code[][100]={"EC301","EC302","EC303","EC304","PCC-CS301","BS-M301","EC391","EC392","PCC-CS391","MC381"};
    char x[][100]={"Electronic Device","Digital Signal Design","Signals and System","Network Theory","Data Structure & Algorithm(ES)","Mathemetics III","Electronic Device Lab","Digital Signal Design Lab","Data Structure Lab(ES)","Environmental Science"};
    subject=sizeof(x)/sizeof x[0];
    result(subject_code,x,subject,name,roll,reg,coll,course,sem);
    }
    if(strcmp(course,"COMPUTER SCIENCE AND ENGINEERING")==0 && strcmp(sem,"4")==0){
    char subject_code[][100]={"PCC-CS401","PCC-CS402","PCC-CS403","PCC-CS404","BSC 401","MC401","PCC-CS492","PCC-CS494"};
    char x[][100]={"DISCRETE MATHEMETICS","COMPUTER ARCHITECTURE","FORMAL LANGUAGE & AUTOMATA THEORY","Design and Analysis of Algorithm","BIOLOGY","ENVIRONMENTAL SCIENCES","COMPUTER ARCHITECTURE","Design and Analysis of Algorithm"};
    subject=sizeof(x)/sizeof x[0];
    result(subject_code,x,subject,name,roll,reg,coll,course,sem);
    }
    if(strcmp(course,"COMPUTER SCIENCE AND ENGINEERING")==0 && strcmp(sem,"3")==0){
    char subject_code[][100]={"EC301","PCC-CS301","PCC-CS302","BSC301","HSMC301","PCC-CS393","ES-CS391","PCC-CS391","PCC-CS392"};
    char x[][100]={"ANALOG AND DIGITAL ELECTRONICS","DATA STRUCTURE & ALGORITHM","COMPUTER ORGANISATION","Mathemetics III(DIFFERENTIAL CALCULUS)","ECONOMICS FOR ENGINEERS(HUMANITIES-II)","IT WORKSHOP(SCI LAB/MATLAB/PYTHON/R)","ANALOG AND DIGITAL ELECTRONICS","DATA STRUCTURE & ALGORITHM LAB","COMPUTER ORGANISATION LAB"};
    subject=sizeof(x)/sizeof x[0];
    result(subject_code,x,subject,name,roll,reg,coll,course,sem);
    }
}
void ca(char course[],char sem[],int subject,char subject_code[][100],char x[][100]){
    int caa[subject][4];
    char tname[subject][100];
    for(int i=0;i<subject;i++){
        system("cls");
        for(int j=0;j<4;j++){
        printf("[%s]. Enter The Marks of [%s] in CA %d IN 25: ",subject_code[i],x[i],j+1);
        scanf("%d",&caa[i][j]);
        if(caa[i][j]>25 || caa[i][j]<0){
        printf("**MARKS OF CA SHOULD BE BETWEEN 0 & 25 \n");
        j--;}}
        printf("Enter The Responsible Teacher for [%s]: ",x[i]);
        getchar();
        fgets(tname[i],100,stdin);
        tname[i][strcspn(tname[i],"\n")]='\0';
    }
    system("cls");
            if(strcmp(sem,"3")==0){
            printf("|                                                     THIRD SEMESTER                                                              |\n");
            }
            if(strcmp(sem,"4")==0){
            printf("|                                                     FORTH SEMESTER                                                              |\n");
            }
            printf("___________________________________________________________________________________________________________________________________\n");
            printf("|%-15s|%-40s|%-12s|%-12s|%-12s|%-12s|%-20s|\n","Subject Code","Paper Name","CA 1","CA 2","CA 3","CA 4","Responsible Teacher");
            printf("|_______________|________________________________________|____________|____________|____________|____________|____________________|\n");
        for(int i=0;i<subject;i++){
            printf("|%-15s|%-40s|%-12d|%-12d|%-12d|%-12d|%-20s|\n",subject_code[i],x[i],caa[i][0],caa[i][1],caa[i][2],caa[i][3],tname[i]);
            printf("|_______________|________________________________________|____________|____________|____________|____________|____________________|\n");
        }
}
void pca(char course[],char sem[],int subject,char subject_code[][100],char x[][100]){
    int pcaa[subject][2];
    char tname[subject][100];
    for(int i=0;i<subject;i++){
        system("cls");
        for(int j=0;j<2;j++){
        printf("[%s]. Enter The Marks of [%s] in PCA %d IN 40: ",subject_code[i],x[i],j+1);
        scanf("%d",&pcaa[i][j]);
        if(pcaa[i][j]>40 || pcaa[i][j]<0){  
        printf("**MARKS OF PCA SHOULD BE BETWEEN 0 & 40 \n");
        j--;}}
        printf("Enter The Responsible Teacher for [%s]: ",x[i]);
        getchar();
        fgets(tname[i],100,stdin);
        tname[i][strcspn(tname[i],"\n")]='\0';
    }
    system("cls");
            if(strcmp(sem,"3")==0){
            printf("|                                             THIRD SEMESTER                                            |\n");
            }
            if(strcmp(sem,"4")==0){
            printf("|                                             FORTH SEMESTER                                            |\n");
            }
            printf("_________________________________________________________________________________________________________\n");
            printf("|%-15s|%-40s|%-12s|%-12s|%-20s|\n","Subject Code","Paper Name","PCA 1","PCA 2","Responsible Teacher");
            printf("|_______________|________________________________________|____________|____________|____________________|\n");
        for(int i=0;i<subject;i++){
            printf("|%-15s|%-40s|%-12d|%-12d|%-20s|\n",subject_code[i],x[i],pcaa[i][0],pcaa[i][1],tname[i]);
            printf("|_______________|________________________________________|____________|____________|____________________|\n");
        }
}