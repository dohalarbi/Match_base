
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    
    string str;
    unsigned long lengthstring=0;
    
    cout<< "enter the string :"<<endl;
    getline (cin, str);
    lengthstring = str.length();
    
    char Hex[lengthstring];
    
    str.copy (Hex, lengthstring);
    
    int hex_nmb [lengthstring];
    
    for(int i=0; i<lengthstring; i++)
    {
        hex_nmb [i] = (int)(Hex[i]);
    }
    
    for(int j=0; j<lengthstring; j++)
    {
        if((hex_nmb[j] == 41) || (hex_nmb[j] == 97))
            hex_nmb[j] = 10;
        else if((hex_nmb[j] == 42) || (hex_nmb[j] == 98))
            hex_nmb[j] = 11;
        else if((hex_nmb[j] == 43) || (hex_nmb[j] == 99))
            hex_nmb[j] = 12;
        else if((hex_nmb[j] == 44) || (hex_nmb[j] == 100))
            hex_nmb[j] = 13;
        else if((hex_nmb[j] == 45) || (hex_nmb[j] == 101))
            hex_nmb[j] = 14;
        else if((hex_nmb[j] == 46) || (hex_nmb[j] == 102))
            hex_nmb[j] = 15;
        
        else if(hex_nmb[j] == 30)
            hex_nmb[j] = 0;
        else if(hex_nmb[j] == 31)
            hex_nmb[j] = 1;
        else if(hex_nmb[j] == 32)
            hex_nmb[j] = 2;
        else if(hex_nmb[j] == 33)
            hex_nmb[j] = 3;
        else if(hex_nmb[j] == 34)
            hex_nmb[j] = 4;
        else if(hex_nmb[j] == 35)
            hex_nmb[j] = 5;
        else if(hex_nmb[j] == 36)
            hex_nmb[j] = 6;
        else if(hex_nmb[j] == 37)
            hex_nmb[j] = 7;
        else if(hex_nmb[j] == 38)
            hex_nmb[j] = 8;
        else (hex_nmb[j] == 39);
            hex_nmb[j] = 9;
    }
    
    
    
    
    for(int i=0; i<lengthstring; i++)
    
    cout<<hex_nmb[i]<<endl;
    
    return 0;
    

}
