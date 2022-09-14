//week2
#include <string>
#include <regex>
#include <iostream>
using namespace std;


void problemOne(int n1, int n2);
string problemTwo(string str);
string problemThree(string str);

int main()
{
    problemOne(2, 3);
    cout << problemTwo("Hello world");
    cout << problemThree("  Hello world");

}


void problemOne(int n1, int n2)

{
    for (int i = 0; i <= 1000; i++)
    {
        if (i % (n1 * n2) == 0)
        {
           cout << i << endl;
        }
    }

}

string problemTwo(string str)
{

    {
        //string str = ("Hello World");

        reverse(str.begin(), str.end());
        //cout << str;

        return str;
    }

}



string problemThree(string str)
{

    regex r("[aeiouAEIOU]");
    return regex_replace(str, r, "");

}


