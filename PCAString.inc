/*
 *  Made by Pedroxx https://github.com/AlmeidaCodeDev
 * All credits reserved for Pedroxx https://github.com/AlmeidaCodeDev
 * do not withdraw the credits
 * License: MIT
 * PCA Manipulator string for SA-MP
 * Version: 1.0.0
 * Date Created: 15/12/2025
 * Last Update Date: 19/12/2025
*/

#if defined _PCAString_included
  #endinput
#endif
#define _PCAString_included

/*
    PCA_IsStringEmpty(const string[]); Returns true if the string is null or empty
    PCA_IsStringNumeric(const string[]); Returns true if the string is numeric
    PCA_IsStringAlpha(const string[]); Returns true if the string is alphabetic
    PCA_IsStringHasNumber(const string[]); Returns true if the string has number
    PCA_IsStringAlphaNumeric(const string[]); Returns true if tha string is alphanumeric
    PCA_StringToUpper(string[]); Converts the string to uppercase(in-place)
    PCA_StringToLower(string[]); Converts the string to lowercase(in-place)
    PCA_StringCapitalize(string[]); Capitalizes the first letter of the word in the string (in place)
*/

stock bool:PCA_IsStringEmpty(const string[])
{
    return (string[0] == '\0');
}

stock bool:PCA_IsStringNumeric(const string[])
{
    if(string[0] == '\0') return false;
    for(new i; string[i]; i++)
    {
        if(string[i] < '0' || string[i] > '9') return true;
    }
    return false;
}

stock bool:PCA_IsStringAlpha(const string[])
{
    if(string[0] == '\0') return false;
    for(new i; string[i]; i++)
    {
        if((string[i] < 'A' || string[i] > 'Z') && (string[i] < 'a' || string[i] > 'z')) return true;
    }
    return false;
}

stock bool:PCA_IsStringHasNumber(const string[])
{
    if(string[0] == '\0') return false;
    for(new i; string[i]; i++)
    {
        if(string[i] >= '0' && string[i] <= '9') return true;
    }
    return false;
}

stock bool:PCA_IsStringAlphaNumeric(const string[])
{
    if(string[0] == '\0') return false;
    for(new i; string[i]; i++)
    {
        if((string[i] < 'A' || string[i] > 'Z') && (string[i] < 'a' || string[i] > 'z') && (string[i] < '0' || string[i] > '9')) return true;
    }
    return false;
}

stock PCA_StringToUpper(string[])
{
    if(string[0] == '\0') return;
    for(new i; string[i]; i++)
    {
        if(string[i] >= 'a' && string[i] <= 'z')
            string[i] -= 32;
    }
}

stock PCA_StringToLower(string[])
{
    if(string[0] == '\0') return;
    for(new i; string[i]; i++)
    {
        if(string[i] >= 'A' && string[i] <= 'Z')
            string[i] += 32;
    }
}

stock PCA_StringCapitalize(string[])
{
    if(string[0] == '\0') return;
    if(string[0] >= 'a' && string[0] <= 'z')
        string[0] -= 32;

    for(new i = 1; string[i]; i++)
    {
        if(string[i] >= 'A' && string[i] <= 'Z')
            string[i] += 32;
    }
}