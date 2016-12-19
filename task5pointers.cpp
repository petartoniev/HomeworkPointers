#include <iostream>
using namespace std;

void removingLetters(char* array)
{
    for(int i=0; array[i]!='\0'; i++)
    {

        if(array[i]==97||array[i]==101||array[i]==105||array[i]==111||array[i]==117||array[i]==121)
        {
            int c=i;
            do
            {
                int save=array[c];
                array[c]=array[c+1];
                array[c+1]=save;
                c++;

            }
            while(array[c+1]!='\0');

            if(array[c+1]=='\0')
            {
                array[c]='\0';
                i--;
            }

        }
    }

}

void printString(char* array)
{
    for(int i=0; array[i]!='\0'; i++)
    {
        cout<<array[i];
    }
    cout<<endl;
}

int main()
{
    char string[6]= {'H','e','l','l','o','\0'};
    removingLetters(string);
    printString(string);

    return 0;
}
