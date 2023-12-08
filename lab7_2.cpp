#include <iostream>
using namespace std;
int main(){
    string name,movie,day,massage;
    long long ID;
    
cout<<"Fahsai: Sawadee ka...Can you tell me your name?"<<"\n?????: ";
getline(cin,name);
cout<<"Fahsai: Wow!!! "<<name<<" is a really cool name.\n";
cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
cout<<name<<": ";cin >> ID;cin.ignore();
long long ID1 = ID,ID2 = ID;
while (ID){
        ID2 = ID1;
        ID1 = ID;
        ID /= 10;
    } 
cout<<"Fahsai: I think you may be GEAR "<<ID2-12<<"." <<" I have a free movie ticket for you.\n";
cout<<"Fahsai: Let's go to the cinema together!!!\n";
cout<<"Fahsai: What movie do you want to watch?\n";
cout<<name<<": ";getline(cin,movie);
cout<<"Fahsai: So....which day are you free to go with me?\n";
cout<<name<<": ";getline(cin,day);
cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching "<< movie<<" with you.\n";
cout<<name<<": "; getline(cin,massage); 
cout<<"Fahsai: 555+ see you " <<day<<". Bye Bye "<<"\\(^ ^)/";

return 0;
}
