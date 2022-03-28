#include<iostream>
#include <stdlib.h>
#include<string>
#include<iomanip>
#include <system_error>
//use instead of #include<windows.h>
using namespace std;
void ED()
{
    int i,x;
    string str;
    cout<<"Please enter a string:\t";
    getline(cin,str);
    cout<<"\n\tPlease choose following options:\n";
    cout<<"1=Encrypt the string.\n";
    cout<<"2=Decrypt the string.\n";
    cin>>x;
    //using switch case statements
    switch (x) 
    {
        //first case for encrypting a string
    case 1:
        for(i=0;(i<75&&str[i]!='\0');i++)
        str[i]=str[i]+2;//the key for encryption
        cout<<"\n\tEncrypted string:"<<str<<endl;
        break;
    case 2:
        for(i=0;(i<75&&str[i]!='\0');i++)
        cout<<"\n\tDecrypted string:"<<str<<endl;
        str[i]=str[i]-2;
        break;
        default:
        cout<<"\n\tInvalid Input!\n";
    }
}
int main()
{
    system("title Program for ED");
    system("prompt $L$$$SEncrypt and Decrypt$G");
    string ap;//string for user approval
    cout<<"\tWill you like to start the program?(YES|NO):";
    getline(cin,ap);
    if((ap=="YES"||ap=="Yes"||ap=="yes"||ap=="Y"||ap=="y"||ap=="1"||ap=="en"))
    {
        cout<<"Welcome sir/Ma'am"<<endl;
        ED();
        //cout<<"Will you like to start the program again?";string up;cin>>up;
        //if((up=="YES"||up=="Yes"||up=="yes"||up=="Y"||up=="y"||up=="1"))
        {cout<<"\tProgram Encryption & Decryption\nstart again........";ED();}
        //else if ((up=="NO"||up=="No"||up=="no"||up=="n"||up=="N"||up=="dn"))
        //{cout<<"\t\tAs you wish!, Press any key to close the program";system("pause");}
    }
    else if ((ap=="NO"||ap=="No"||ap=="no"||ap=="n"||ap=="N"||ap=="dn"))
    {cout<<"\t\tAs you wish!, Press any key to close the program";system("pause");}

    return 0;
}