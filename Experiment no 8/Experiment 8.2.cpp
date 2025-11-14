#include <iostream>
#include <cstring>
#include <numeric>
using namespace std;
class ILogin{
protected:
    string name;
    string password;

public:
    virtual void  accept(){
        cout<<"enter the name of the user :"<<endl;
        cin>>name;
        cout<<"enter the password of the user :"<<endl;
        cin>>password;
    }
    virtual void  display(){
        cout<<"the name of the user is :"<<name<<endl;
        cout<<"the password of the user is :"<<password<<endl;
    }
};

class EmailLogin : public ILogin{
protected:
    string email_id;

public:
    void accept()override{
        cout<<"enter the name of the user :"<<endl;
        cin>>name;
        cout<<"enter the password of the user :"<<endl;
        cin>>password;
        cout<<"enter the email_id of the user :"<<endl;
        cin>>email_id;

    }

    void display() override{
        cout<<"the name of the user is :"<<name<<endl;
        cout<<"the password of the user is :"<<password<<endl;
        cout<<"the email_id of the user is :"<<email_id<<endl;

    }

};

class MemebershipLogin : public ILogin{
protected:
    string memebership_id;

public:
    void accept() override{
        cout<<"enter the name of the user :"<<endl;
        cin>>name;
        cout<<"enter the password of the user :"<<endl;
        cin>>password;
        cout<<"enter the memebership_id of the user :"<<endl;
        cin>>memebership_id;

    }

    void display() override{

        cout<<"the name of the user is :"<<name<<endl;
        cout<<"the password of the user is :"<<password<<endl;
        cout<<"the membership_id of the user is :"<<memebership_id<<endl;

    }

};

int main(void){
    ILogin k;
    ILogin *l;
    EmailLogin e;
    MemebershipLogin m;

    l=&e;
    l->accept();
    l->display();

    l = &m;
    l->accept();
    l->display();
}