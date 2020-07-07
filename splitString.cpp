#include <iostream>
using namespace std;

void strcpy(char* dest, char* src)
{
    while(*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
}

void printString(char* str)
{
    while(*str)
    {
        std::cout << *str; 
        str++;
    }
    std::cout << "\n";

}

//Method1 - with any built-in functions
void splitString(char * strIn, char**strOut)
{
    
    int idx = 0;
    char tempArray[10];
    while(*strIn)
    {
        if(*strIn == ' ')
        {
            tempArray[idx] = 0;
            printString(tempArray);
            idx = 0; 
        }
        else
        {
            //read string till the space 
            tempArray[idx] = *strIn;
            idx++;
        }
        strIn++;
    }

}

int getLength(const char* strIn)
{
    int count = 0;
    while(*strIn)
    {
       strIn++;
       count++; 
    }

    return count;
}

int getSubStringCount(const char* strIn)
{
    int count = 1;
    while (*strIn)
    {
        // get space count
        if (*strIn == ' ')
        {
            count++; 
        }
        strIn++; 
    }

    return count;

}

int main()
{

    // null char would automatically added
    char* strIn = "This is a string";
    const int& length = getLength(strIn);
    const int wordCount = getSubStringCount(strIn);
    char* strOut[wordCount];

    //split the string by space 
    //into array of the strings
    splitString(strIn, strOut);


    return 0;
}

