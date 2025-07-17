#include <iostream>
using namespace std;

//to check for vowel or consonant 
bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main()
{
    char data;
    cout << "Enter an alphabet: ";
    cin >> data;
    cout << (isVowel(data) ? "Vowel" : "Consonant") << endl;

    return 0;
}