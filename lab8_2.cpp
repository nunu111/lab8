//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
#include <iostream>
#include <string>
using namespace std;

string username,moviename,daytowatch,forwhat;
int studenid;
int main()
{
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" <<endl;
    cout << "?????: ";
    getline(cin,username);
    cout <<"Fahsai: Wow!!! " << username <<" is a really cool name.\n";
    cout <<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << username <<": ";
    cin >> studenid;
    cin.ignore();
    while(studenid%10000000 != 0)
    {
        studenid--;
    }
    studenid /= 10000000;
    cout <<"Fahsai: I think you may be GEAR "<< studenid-12 <<". I have a free movie ticket for you.\n";
    cout <<"Fahsai: Let's go to the cinema together!!!\n";
    cout <<"Fahsai: What movie do you want to watch?\n";
    cout << username <<": ";
    getline(cin,moviename);
    cout <<"Fahsai: So....which day are you free to go with me?\n";
    cout << username <<": ";
    getline(cin,daytowatch);
    cout <<"Fahsai: " << daytowatch <<"....that is OK!!! I'm looking forward to watching "<< moviename <<" with you.\n";
    cout << username <<": ";
    getline(cin,forwhat);
    cout <<"Fahsai: 555+ see you "<< daytowatch <<". Bye Bye \\(^ ^)/";
}
