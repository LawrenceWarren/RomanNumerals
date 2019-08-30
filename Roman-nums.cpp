#include <cstring>
#include <iostream>
#include <cmath>


int convert(char *val)  //Takes a cstring, val, and returns an integer of the same value.
{                       //I.E., if the string is a number "123," this function returns int == 123
    int conv, j;
    
    for(int i=0 , j=strlen(val)-1 ; i<strlen(val) ; i++ , j--)
    {
        conv+=(val[i]-48) * pow(10,j);
    }

    std::cout << conv;

    return conv;
}

char *toRom()
{

}

char *fromRom()
{

}

bool sanitize(int argc, char **argv)    //Checks to see if the inputs are valid.
{
    int len = strlen(argv[2]);

    if(argc!=3) //Checks there are valid number of arguments
    {
        std::cout << "Provide more arguments!";
        return false;
    }

    if(argv[1][0]=='F' || argv[1][0]=='f') //Checks the mode is valid
    {
        for(int i=0 ; i<len ; i++) //Checks each character will appear in a ruman numeral.
        {
            if(argv[2][i]!='I' && argv[2][i]!='i' && argv[2][i]!='V' && argv[2][i]!='v' && argv[2][i]!='X' && argv[2][i]!='x' && argv[2][i]!='L' && argv[2][i]!='l' && argv[2][i]!='C' && argv[2][i]!='c' && argv[2][i]!='D' && argv[2][i]!='d' && argv[2][i]!='M' && argv[2][i]!='m')
            {
                std::cout << "Provide a valid number!";
                return false;
            }
        }
    }
    else if(argv[1][0]=='T' || argv[1][0]=='t') //Checks the mode is valid.
    {
        for(int i=0 ; i<len ; i++)
        {
            if(argv[2][i]<'0' && argv[2][i]>'9')  //Checks each character will appear in a decimal number.
            {
                std::cout << "Provide a valid number!";
                return false;
            }
        }
    }
    else    //The modes are invalid
    {
        std::cout << "Provide correct modes, [F] or [T]";
        return false;
    }

    return true;
}

int main (int argc, char **argv)
{
    int conv;

    if(sanitize(argc, argv)!=true)
    {
        return 1;
    }

    if(argv[1][0]='F' || argv[1][0]=='f')
    {

    }

    if(argv[1][0]='T' || argv[1][0]=='t')
    {
        conv = convert(argv[2]);
        fromRom(conv);
    }
}