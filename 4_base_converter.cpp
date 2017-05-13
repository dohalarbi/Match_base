//  main.cpp
//  match_base
//
//  Created by moulay on 5/13/17.
//  Copyright © 2017 moulay. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void dec_bin(int nmbr);
void dec_hex(int nmbr);
void dec_oct(int nmbr);
void hex_bin(int nmbr);
void hex_dec(int nmbr);
void hex_oct(int nmbr);
void bin_dec(int nmbr);
void bin_hex(int nmbr);
void bin_oct(int nmbr);
void oct_bin(int nmbr);
void oct_dec(int nmbr);
void oct_hex(int nmbr);

int main()
{
    while(1){
    char base;
        int nmbr;
    cout<<"Enter the base of the number: ";
    cin>>base;
    
    switch(base){
            
        case 'D':
        case 'd':
          
            cout<<"Enter your number in Decimal : ";
            cin>>nmbr;
 
            cout<<"Decimal number is : "<<nmbr<<endl;
            dec_bin(nmbr);
            dec_hex(nmbr);
            dec_oct(nmbr);
            
            break;
        /*case 'H':
        case 'h':
          
            cout<<"Enter your number in Hexadecimal : ";
            cin>>nmbr;
            binary = hex_bin(nmbr);
            dec = hex_dec(nmbr);
            oct = hex_oct(nmbr);
            
            break;
        case 'O':
        case 'o':
            
            cout<<"Enter your number in Octal : ";
            cin>>nmbr;
            binary = oct_bin(nmbr);
            dec = oct_dec(nmbr);
            hex = oct_hex(nmbr);
     
            break;*/
        case 'b':
        case 'B':
            
            cout<<"Enter your number in Binary : ";
            cin>>nmbr;
            bin_dec(nmbr);
            /*hbin_hex(nmbr);
            bin_oct(nmbr);
            */
            break;
        
        default:
            
            cout<<"Error bad input";
            break;
    }
    
    }
    return 0;
}






void dec_bin(int nmbr)
{
    int temp=0, i, count=0;

    temp = nmbr;

    
    while(temp>0){
        
        temp= temp/2;
        count++;
    }
    
    int *array_bin = new int[count];
    
    for(i=0; i<count; i++){
        
        array_bin[i] = nmbr%2;
        nmbr = nmbr/2;
    }
    
    cout<<"Binary number is : ";
    for(i=0;i<count;i++)
    {
        cout<<array_bin[count-i-1];
    }
    
    cout<<endl;
    
    delete [] array_bin;
}


void dec_hex(int nmbr)
{
    int temp=0, i, count=0, hex=0;
 
    temp = nmbr;

    while(temp>0){
 
        temp= temp/16;
        count++;
 }
 
 int *array_hex = new int[count];
 
    for(i=0; i<count; i++){
 
        array_hex[i] = nmbr%16;
        nmbr = nmbr/16;
 }
 
    cout<<"Hexadecimal number is : ";
    for(i=0;i<count;i++)
 {
     hex = array_hex[count-i-1];
     if (hex == 10)
         cout<<"A";
     else if (hex == 11)
         cout<<"B";
     else if(hex == 12)
         cout<<"C";
     else if (hex == 13)
         cout<<"D";
     else if (hex == 14)
         cout<<"E";
     else if (hex == 15)
         cout<<"F";
     else
         cout<<hex;
 }
 
    cout<<endl;
 
    delete [] array_hex;
}


void dec_oct(int nmbr)
{
 int temp=0, i, count=0;
 
 temp = nmbr;
 
 while(temp>0){
 
 temp= temp/8;
 count++;
 }
 
 int *array = new int[count];
 
 for(i=0; i<count; i++){
 
 array[i] = nmbr%8;
 nmbr = nmbr/8;
 }
 
            cout<<"Octal number is : ";
 for(i=0;i<count;i++)
 {
 cout<<array[count-i-1];
 }
 
 cout<<endl;
 
 delete [] array;
}


void bin_dec(int nmbr)
{
    int count=0, i, n, temp = nmbr;
    double dec=0.0;
    
    while(temp>0)
    {
        temp = temp/10;
        count++;
    }
    
    int *array_dec = new int[count];
    
    for(i=0; i<count; i++){
        
        array_dec[i] = nmbr%10;
        nmbr = nmbr/10;
    }
    
    cout<<"Decimal number is : ";
    n = count;
    for(i=0;i<count;i++)
    {
       dec += array_dec[count-i-1] * pow(2, n-1);
        n--;
    }
    cout<<dec;
    cout<<endl;
    
    delete [] array_dec;
    
    
}
/*
int hex_bin(int &nmbr)
{

}

int hex_dec(int &nmbr)
{

}

int hex_oct(int &nmbr)
{

}



int bin_hex(int &nmbr)
{

}

int bin_oct(int &nmbr)
{

}

int oct_bin(int &nmbr)
{

}

int oct_dec(int &nmbr)
{

}

int oct_hex(int &nmbr)
{

}*/
