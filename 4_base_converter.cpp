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


//main_function


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
                 oct = hex_oct(nmbr);*/
                 
                 break;
                 case 'O':
                 case 'o':
                
                 cout<<"Enter your number in Octal : ";
                 cin>>nmbr;
                 oct_bin(nmbr);
                 oct_dec(nmbr);
                 oct_hex(nmbr);
                 
                 break;
            case 'b':
            case 'B':
                
                cout<<"Enter your number in Binary : ";
                cin>>nmbr;
                bin_oct(nmbr);
                bin_dec(nmbr);
                bin_hex(nmbr);

                break;
                
            default:
                
                cout<<"Error bad input";
                break;
        }
        
    }
    return 0;
}



//functions:


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


void bin_hex(int nmbr)
{
    int count=0, i, n, temp = nmbr;
    int hex=0, cnt=0;
    int dec=0;
    
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

    n = count;
    for(i=0;i<count;i++)
    {
        dec += array_dec[count-i-1] * pow(2, n-1);
        n--;
    }
    
    int temp1 = dec;
    
    while(temp1>0){
        
        temp1= temp1/16;
        cnt++;
    }
    
    int *array_hex = new int[cnt];
    
    for(i=0; i<cnt; i++){
        
        array_hex[i] = dec%16;
        dec = dec/16;
    }
    
    cout<<"Hexadecimal number is : ";
    for(i=0;i<cnt;i++)
    {
        hex = array_hex[cnt-i-1];
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
    delete [] array_dec;
}


void bin_oct(int nmbr)
{
    int count=0, i, n, temp = nmbr;
    
    int dec=0, cnt=0;
    
    
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

    n = count;
    for(i=0;i<count;i++)
    {
        dec += array_dec[count-i-1] * pow(2, n-1);
        n--;
    }
    
    temp = dec;
    
    while(temp>0){
        
        temp= temp/8;
        cnt++;
    }
    
    int *array_oct = new int[cnt];
    
    for(i=0; i<cnt; i++){
        
        array_oct[i] = dec%8;
        dec = dec/8;
    }
    
    cout<<"Octal number is : ";
    for(i=0;i<cnt;i++)
    {
        cout<<array_oct[cnt-i-1];
    }
    
    cout<<endl;
    
    delete [] array_oct;
    delete [] array_dec;
}


void oct_dec(int nmbr)
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
        dec += array_dec[count-i-1] * pow(8, n-1);
        n--;
    }
    cout<<dec;
    cout<<endl;
    
    delete [] array_dec;
}



void oct_bin(int nmbr)
{
    int count=0, i, n, temp = nmbr, cnt=0, dec=0;
    
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
    n = count;
    for(i=0;i<count;i++)
    {
        dec += array_dec[count-i-1] * pow(8, n-1);
        n--;
    }

temp = dec;

while(temp>0){
    
    temp= temp/2;
    cnt++;
}

int *array_bin = new int[cnt];

for(i=0; i<cnt; i++){
    
    array_bin[i] = dec%2;
    dec = dec/2;
}

cout<<"Binary number is : ";
for(i=0;i<cnt;i++)
{
    cout<<array_bin[cnt-i-1];
}

cout<<endl;

delete [] array_bin;
delete [] array_dec;

}


//oct_hex(nmbr)
void oct_hex(int nmbr)
{
    int count=0, i, n, temp = nmbr, dec=0;
    int cnt=0, hex=0;
    
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
    n = count;
    for(i=0;i<count;i++)
    {
        dec += array_dec[count-i-1] * pow(8, n-1);
        n--;
    }
    
    temp = dec;
    
    while(temp>0){
        
        temp= temp/16;
        cnt++;
    }
    
    int *array_hex = new int[cnt];
    
    for(i=0; i<cnt; i++){
        
        array_hex[i] = dec%16;
        dec = dec/16;
    }
    
    cout<<"Hexadecimal number is : ";
    for(i=0;i<cnt;i++)
    {
        hex = array_hex[cnt-i-1];
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
    delete [] array_dec;
}

