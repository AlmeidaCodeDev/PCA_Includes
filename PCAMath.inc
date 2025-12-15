/*
 *  Made by Pedroxx https://github.com/AlmeidaCodeDev
 * All credits reserved for Pedroxx https://github.com/AlmeidaCodeDev
 * do not withdraw the credits
 * License: MIT
 * Version: 1.0.0
 * Date Created: 13/12/2025
 * Last Update Date: 13/12/2025
*/

#if defined _PCAMath_included
  #endinput
#endif
#define _PCAMath_included

/*
    PCA_MathSum(Float:num1, Float:num2); Returns the sum of num1 and num2
    PCA_MathSubtract(Float:num1, Float:num2); Returns the subtract of num1 and num2
    PCA_MathMultiply(Float:num1, Float:num2); Returns the mutiply of num1 and num2
    PCA_MathDivide(Float:num1, Float:num2); Returns the Divide of num1 and num2
    PCA_MathAddPercent(Float:value, Float:percent); // Returns the total of value * percent / 100 + value
    PCA_MathRemPercent(Float:value, Float:percent); // Returns the total of value * percent / 100 - value 
    PCA_MathRandom(minnum, maxnum); Returns random number between minnum maxnum
*/

stock Float:PCA_MathSum(Float:num1, Float:num2)
{
    return num1 + num2;
}
stock Float:PCA_MathSubtract(Float:num1, Float:num2)
{
    return num1 - num2;
}
stock Float:PCA_MathMultiply(Float:num1, Float:num2)
{
    return num1 * num2;
}
stock Float:PCA_MathDivide(Float:num1, Float:num2)
{
    if(num2 == 0.0) return 0;

    return num1 / num2;
}
stock Float:PCA_MathAddPercent(Float:value, Float:percent)
{
    return value + ((value * percent) / 100.0);
}
stock Float:PCA_MathRemPercent(Float:value, Float:percent)
{
    return value - ((value * percent) / 100.0);
}
stock PCA_MathRandom(minnum, maxnum)
{
    if(maxnum <= minnum) return minnum;
    return random(maxnum - minnum) + minnum;
}
