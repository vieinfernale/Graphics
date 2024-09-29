#include <iostream>
#include <math.h>
#include <vector>

/* String to Binary */

int main(){
    std::string s = "abcdefghijklmnopqrstuvwxyz";
    char c;
    int ascii;
    int bin[8]; // 1 byte = 8 bits = 1 Binary = 1 ASCII number = 1 char     for more bits?
    std::string cbin;
    std::vector<std::string> sbin;

    for(int i = 0; i < s.size(); ++i)
    {
        c = s[i];
        ascii = c;

        std::cout << ascii << " ";

        while(ascii > 0) /*115/2 = 57 (1) bin[0]=1; 57/2=28 (1) bin[1]=1; 28/2=14 (0) bin[2]=0 ... (1*2^0) + (1*2^1) + (0*2^2) ... 0/2=0 (0) bin[7]=0 +(0*2^7)*/
		{
             for(int j = 0; j < 8; j++)
            {
                if((ascii%2) == 0)
                {
                      ascii = ascii/2;
                      bin[j] = 0;
                }
                else
                {
                      ascii = ascii/2;
                      bin[j] = 1;
                }
            }
        }

        for(int i = 0; i < 8; ++i)      /* Last Character in Binary */
        {
            if(bin[i]==1) cbin += "1";
            if(bin[i]==0) cbin += "0";
        }

        sbin.push_back(cbin);
        cbin = "";
    }

    std::cout << std::endl;

    for(int i = 0; i < sbin.size(); ++i)
    {
        std::cout << sbin[i] << " ";
    }

    /* + (1*2^i)
    int nascii = 0;
    for(int i = 0; i < 8; ++i)
    {
        if(bin[i] == 1) nascii += pow(2,i);
    }
    std::cout << n << std::endl;
    */
}