#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
    int i, j = 0, k = 0, count = 0;
    char str[100], str1[10][20], word[20];
    cout<<"\nEnter any String :: ";
    gets(str);
 
    for (i=0; str[i]!='\0'; i++)
    {
        if (str[i]==' ')
        {
            str1[k][j] = '\0';
            k++;
            j=0;
        }
        else
        {
            str1[k][j]=str[i];
            j++;
        }
    }
    str1[k][j] = '\0';
    cout<<"\nEnter a word to delete :: ";
    cin>>word;
 
 
    for (i=0; i<k+1; i++)
    {
        if (strcmp(str1[i], word) == 0)
        {
            for (j=i; j<k+1; j++)
                        {
                                strcpy(str1[j], str1[j + 1]);
                                k--;
                        }
        }
 
    }
    cout<<"\nThe new String after deleting the word [ "<<word<<" ] :: \n\n";
    for (i=0; i<k+1; i++)
    {
                cout<<str1[i]<<" ";
    }
 
    cout<<"\n";
    return 0;
}