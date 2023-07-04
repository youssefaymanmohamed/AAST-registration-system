#include <iostream>
#include <string.h>
#include <conio.h>
#include<stdlib.h>

using namespace std;

typedef struct student student;
typedef struct student* studentptr;


struct student
{
    char firstname[20],middlename[20],lastname[20],nationalty[25],country[20],maillingcountry[20],governorate[20],maillinggovernorate[20],city[20],maillingcity[20],
         area[20],maillingarea[20],street[25],maillingstreet[25],id[15], instructorname[20],house[10],maillinghouse[10],flat[20],maillingflat[20],postalcode[20],maillingpostalcode[20];
    char gender[20],email[30],EnrolmentYear[10],EnrolmentTerm[10],RegNum[10];
    int dayofbirth,monthofbirth,yearofbirth,department;
    int credithours,paymentnum,paymenttype,totalpayment,phonenum,homenum;
    int term =credithours/18;
    double gpa;

    studentptr next;
};
studentptr head = NULL;
int Count=0;
void insert_end(char *RegNum,char *EnrolmentTerm,char *EnrolmentYear,char *maillinghouse,char *maillingflat,char *mailingpostalcode,char *maillingcountry,char *maillinggovernorate,char *maillingcity,char *maillingarea,
                char *maillingstreet,int *phonenum,int *homenum,char *email,int *paymenttype,int *paymentnum,int *totalpayment,int *credithours,char *firstname,char *middlename, char *lastname,int *department,char *nationalty,
                char *country,char *governorate, char *city,char *area, char *street,char *id,int *term, double *gpa, char *gender,char *house,char *flat,char *postalcode,int *dayofbirth,int *monthofbirth,int *yearofbirth,char *instructorname)
{
    studentptr new_node = (studentptr) malloc(sizeof(struct student));
    int add;
    cout<<" first name : "<<endl;
    cin>>firstname;
    cout<<" middle name : "<< endl;
    cin>>middlename;
    cout<<" last name : "<< endl;
    cin>>lastname;
    cout<<" day of your birth : "<< endl;
    cin>>*dayofbirth;
    cout<<" month of birth  : "<< endl;
    cin>>*monthofbirth;
    cout<<" year of birth  : "<< endl;
    cin>>*yearofbirth;
    cout<<" nationality  : "<< endl;
    cin>>nationalty;
    cout<<" country : "<<endl;
    cin>>country;
    cout<<" city : "<<endl;
    cin>>city;
    cout<<" governorate : "<<endl;
    cin>>governorate;
    cout<<" Area : "<<endl;
    cin>>area;
    cout<<" street : "<<endl;
    cin>>street;
    cout<<" postal code  : "<<endl;
    cin>>postalcode;
    cout<<"Enter yous house number :"<<endl;
    cin>>house;
    cout<<" flat number : "<<endl;
    cin>>flat;
    cout<<" gender : "<<endl;
    cin>>gender;
    cout<<" instructor name : "<<endl;
    cin>>instructorname;
    cout<<" Department : "<< endl;
    cout<<"0-GENERAL STUDIES\n"<<"1-ROBOTICS\n"<<"2-INTELLIGENCE SYSTEM\n"<<"3-BUSINESS ANALYTICS\n"<<"4-BIO COMPUTING\n";
    cin>>*(department);
    while(*(department)<0 && *(department)>5)
    {
        cout<<"Incorrect choice,Please choose form the following list";
        cout<<"0-GENERAL STUDIES\n"<<"1-ROBOTICS\n"<<"2-INTELLIGENCE SYSTEM\n"<<"3-BUSINESS ANALYTICS\n"<<"4-BIO COMPUTING\n";
        cin>>*(department);
    }
    cout<<" Enrollment term :  "<<endl;
    cin>>EnrolmentTerm;
    cout<<" Enrollment year :  "<<endl;
    cin>>EnrolmentYear;
    cout<<"Your Registration number : ";
    int Count=0;
    strcpy(RegNum,EnrolmentYear);
    strcat(RegNum,EnrolmentTerm);
    strcat(RegNum,"250");
    char tempdepar[10];
    itoa(*department,tempdepar,10);
    strcat(RegNum,tempdepar);
    long long RegNumGen=atoi(RegNum);
    char RegNumTemp[10],RegNumTemp2[10];
    RegNumGen*=10000;
    RegNumGen+=Count;
    Count++;
    int RegNum1=RegNumGen/100000;
    int RegNum2=RegNumGen%1000000;
    itoa(RegNum1,RegNumTemp,10);
    itoa(RegNum2,RegNumTemp2,10);
    strcpy(RegNum,RegNumTemp);
    strcat(RegNum,RegNumTemp2);
    cout<<RegNum<<endl;
    cout<<"Is your address same as  your Mailing  address : "<<endl;
    cin>>add;
    while(add>1 || add<0)
    {
        cout<<"\t\t\t\tIncorrect choice "<<endl<<"\n\t\t\tIs your address same as  your Mailing  address : \n\t\t\t\t (0):YES (1):NO "<<endl;
        cin>>add;
    }
    if(add==0)
    {
        strcpy(maillingcountry,country);
        strcpy(maillingarea,area);
        strcpy(mailingpostalcode,postalcode);
        strcpy(maillinghouse,house);
        strcpy(maillingcity,city);
        strcpy(maillingflat,flat);
        strcpy(maillinggovernorate,governorate);
        strcpy(maillingstreet,street);
    }
    else if(add==1)
    {
        cout<<" mailing country : "<<endl;
        cin>>maillingcountry;
        cout<<" mailing city : "<<endl;
        cin>>maillingcity;
        cout<<" mailing governorate :  "<<endl;
        cin>>maillinggovernorate;
        cout<<" mailing area : "<<endl;
        cin>>maillingarea;
        cout<<" mailing street : "<<endl;
        cin>>maillingstreet;
        cout<<" mailing house number : "<<endl;
        cin>>maillinghouse;
        cout<<" mailing flat number : "<<endl;
        cin>>maillingflat;
        cout<<" mailing postal code : "<<endl;
        cin>>mailingpostalcode;

    }

    cout<<" GPA : "<<endl;
    cin>>*gpa;
    cout<<" id : "<<endl;
    cin>>id;
    cout<<" credit hours : "<<endl;
    cin>>*credithours;
    cout<<" type of funding : "<<endl<<"1-self funding "<<endl<<"2-grant funding"<<endl;
    cin>>*paymenttype;
    cout<<"number of payments : "<<endl;
    cin>>*paymentnum;
    cout<<" total payment : "<<endl;
    cin>>*totalpayment;
    cout<<" home phone number : "<<endl;
    cin>>*homenum;
    cout<<" phone number : "<<endl;
    cin>>*phonenum;
    cout<<" email :  "<<endl;
    cin>>email;

    strcpy (new_node->firstname,firstname);
    strcpy (new_node->middlename,middlename);
    strcpy (new_node->lastname,lastname);
    new_node-> department = *department;
    strcpy (new_node->nationalty,nationalty);
    strcpy (new_node->country,country);
    strcpy (new_node->governorate,governorate);
    strcpy (new_node->city,city);
    strcpy (new_node->area,area);
    strcpy (new_node->street,street);
    strcpy (new_node->gender,gender);
    strcpy (new_node->instructorname,instructorname);
    strcpy (new_node->id,id);
    strcpy (new_node->house,house);
    strcpy (new_node->flat,flat);
    strcpy (new_node->postalcode,postalcode);
    new_node-> dayofbirth = *dayofbirth;
    new_node-> monthofbirth = *monthofbirth;
    new_node-> yearofbirth= *yearofbirth ;
    new_node-> gpa = *gpa ;
    new_node-> term = *term  ;
    new_node-> phonenum= *phonenum;
    new_node-> homenum= *homenum;
    new_node-> credithours= *credithours;
    new_node-> paymenttype= *paymenttype;
    new_node-> paymentnum= *paymentnum;
    new_node-> totalpayment= *totalpayment;
    new_node->next = NULL;
    if(head == NULL)
    {
        head = new_node;
        return;         //close the function
    }
    studentptr temp = head;
    while(temp->next != NULL)  //look 1 step ahead
    {
        temp = temp -> next;
    }
    temp->next = new_node;
}
int calcage(int *dayofbirth,int *monthofbirth,int *yearofbirth)
{
    int day,month,year,age;

    cout<<"today's day : ";
    cin>>day;
    while(day  > 31 || day < 0)
    {
        cout<<"Incorrect day is entered please reenter the correct day :  ";
        cin>>day;
    }
    cout<<"today's month : ";
    cin>>month;
    while(month > 12 || month < 0)
    {
        cout<<"Incorrect month is entered please reenter the correct month :  ";
        cin>>month;
    }
    cout<<"today's year : ";
    cin>>year;
    while(year > 2022 || year < 1980)
    {
        cout<<"Incorrect year is entered please reenter the correct year :  ";
        cin>>year;
    }
    age=((year-*yearofbirth)+((month-*monthofbirth)/12)+((day-*dayofbirth)/365));
    return age;
}
/*void getgpa(double *gpa)
{
    for(int i=0; i<10; i++)
    {
        gpa[i];
    }
}*/

void display()
{
    studentptr temp = head;
    while( temp != NULL )
    {
        cout<<temp->firstname<<endl;
        cout<<temp->middlename<<endl;
        cout<<temp->lastname<<endl;
        cout<<temp->dayofbirth<<endl;
        cout<<temp->monthofbirth<<endl;
        cout<<temp->yearofbirth<<endl;
        cout<<temp->nationalty<<endl;
        cout<<temp->country<<endl;
        cout<<temp->city<<endl;
        cout<<temp->governorate<<endl;
        cout<<temp->area<<endl;
        cout<<temp->street<<endl;
        cout<<temp->postalcode<<endl;
        cout<<temp->gender<<endl;
        cout<<temp->instructorname<<endl;
        cout<<temp->department<<endl;
        cout<<temp->gpa<<endl;
        cout<<temp->id<<endl;
        cout<<temp->credithours<<endl;
        cout<<temp->paymentnum<<endl;
        cout<<temp->totalpayment<<endl;
        cout<<temp->homenum<<endl;
        cout<<temp->phonenum<<endl;
        cout<<temp->email<<endl;
        cout<<temp->maillingcountry<<endl;
        cout<<temp->maillingcity<<endl;
        cout<<temp->maillinggovernorate<<endl;
        cout<<temp->maillingarea<<endl;
        cout<<temp->maillingstreet<<endl;
        cout<<temp->maillingpostalcode<<endl;
        cout<<temp->maillingflat<<endl;
        cout<<temp->maillinghouse<<endl;
        temp = temp->next;
    }
}
void intro()
{

    cout<<"\n\n\n\t\t\tARAB ACADEMY FOR SCIENCE & TECNOLOGY & MARITIME TRANSPORT";
    cout<<"\n\n\t\t\t\t\tR E G I S T E R A T I O N ";
    cout<<"\n\n\t\t\t\t\t\tS Y S T E M";
    cout<<"\n\n\t\t\t\t   ARTIFITIAL INTELLIGENCE, ALAMEIN Campus"<<endl;
    getch();
    system("cls");
}

int main()
{
    int choice;
    char firstname[20],middlename[20],lastname[20],nationalty[25],country[20],maillingcountry[20],governorate[20],maillinggovernorate[20],city[20],maillingcity[20],
         area[20],maillingarea[20],street[25],maillingstreet[25],id[15], instructorname[20],house[10],maillinghouse[10],flat[20],maillingflat[20],postalcode[20],maillingpostalcode[20];
    char gender[20],email[30],EnrolmentYear[10],EnrolmentTerm[10],RegNum[10];
    int dayofbirth,monthofbirth,yearofbirth,department;
    int credithours,paymentnum,paymenttype,totalpayment,phonenum,homenum;
    int term =credithours/18;
    double gpa;

    intro();
    cout<<endl<<endl<<"\t\t\t\t ARE YOU A NEW STUDENT OR OLD STUDENT"<<endl;
    cout<<endl<<endl<<"\t\t\t\t\t (1) FOR NEW (2) FOR OLD"<<endl;
    cout<<"\n\n\n\n\n";
    cin>>choice;
    if(choice==1)
    {
        insert_end(RegNum,EnrolmentTerm,EnrolmentYear,maillinghouse,maillingflat,maillingpostalcode,maillingcountry,maillinggovernorate,maillingcity,maillingarea,maillingstreet,&phonenum,
                   &homenum,email,&paymenttype,&paymentnum,&totalpayment,&credithours,firstname,middlename,lastname,&department,nationalty,country,governorate,city,area,street,id,&term,&gpa,
                   gender,house,flat,postalcode,&dayofbirth,&monthofbirth,&yearofbirth,instructorname);
        choice=0;
        cout<<"\n\n\t\t\t\t DO YOU WANT TO DISPLAY DATA YOU ENTERED \n\t\t\t\t (1):YES (2):NO :"<<endl<<endl;
        cin>>choice;
        if(choice==1)
        {
            display();
        }
        else
        {
            exit(1);
        }
    }
    else if(choice==2)
    {
         insert_end(RegNum,EnrolmentTerm,EnrolmentYear,maillinghouse,maillingflat,maillingpostalcode,maillingcountry,maillinggovernorate,maillingcity,maillingarea,maillingstreet,&phonenum,
                   &homenum,email,&paymenttype,&paymentnum,&totalpayment,&credithours,firstname,middlename,lastname,&department,nationalty,country,governorate,city,area,street,id,&term,&gpa,
                   gender,house,flat,postalcode,&dayofbirth,&monthofbirth,&yearofbirth,instructorname);
        display();
    }
    return 0;
}
