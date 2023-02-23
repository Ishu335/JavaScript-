// Personnel information system using constructor, destructor, static member
// functions, friend class, this pointer, inline code and dynamic memory allocation.

#include<iostream>
#include <string>
using namespace std;
class Personal
{
    public:
        static string person_name;
        int person_age;
        float person_height;
        string person_blood_group;
        long long int person_contact_no;
    public:
        friend class Friend_Display;
    Personal( int a, float h,string blood, long long int contact)
    {
        person_age=a;
        person_height=h;
        person_blood_group=blood;
        person_contact_no=contact;
    }
    static void name(string n){
        Personal::person_name= n;
    }
    ~Personal(){cout <<"\n Decotructo is Called";}
    void display()
    {
        cout<<"\n Name of Person :- "<< this->person_name;
        cout<<"\n Age of Person :- "<< this->person_age;
        cout<<"\n Height of Person :- "<< this->person_height;
        cout<<"\n Blood Group of Person :- "<< this->person_blood_group;
        cout<<"\n contact Number of Person :- "<< this->person_contact_no;
    }
};
class Friend_Display
{
    public:
    string person_father_name;
    string person_mother_name;
    public:
        friend void friend_display_fun(Friend_Display);
        inline void family_details()
        {
            cout<<"\nEnter the Your Fathe Name:- ";
            getline(cin ,this->person_father_name);
            cout<<"\nEnter the Your Mother Name:- ";
            getline(cin ,this->person_mother_name);
        }
};
 void friend_display_fun(Friend_Display f1)
{
    cout<<"\n Person Father Name:- "<<f1.person_father_name;
    cout<<"\n Person Mother Name:- "<<f1.person_mother_name; 
}
int main ()
{
    Personal P1(21,5.8,"O+",9011173582);
    P1.display();
    Friend_Display F;
    F.family_details();
    friend_display_fun(F);
    return 0;
}