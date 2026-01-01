# 🛠 | PCA Includes

## Includes incluidas:
### PCAMath.inc, Funçoes sao:
```
    PCA_MathSum(Float:num1, Float:num2); Retorna a soma do num1 e num2
    PCA_MathSubtract(Float:num1, Float:num2); Retorna a subtraçao do num1 e num2
    PCA_MathMultiply(Float:num1, Float:num2); Retorna a mutiplicaçao do num1 e num2
    PCA_MathDivide(Float:num1, Float:num2); Retorna a divisao do num1 e num2
    PCA_MathAddPercent(Float:value, Float:percent); // Retorna o total de value * percent / 100 + value
    PCA_MathRemPercent(Float:value, Float:percent); // Retorna o total de value * percent / 100 - value 
    PCA_MathRandom(minnum, maxnum); Retorna um numero aproximado entre o minmum e maxnum

    Exemplos
    PCA_MathSum(2.5, 2.5) Retorna 5.0
    PCA_MathSubtract(3.0, 1.0) Retorna 2.0
    PCA_MathMultiply(2.0, 2.0) Retorna 4.0
    PCA_MathDivide(52, 100) Retorna 5.2 Se o numero 2 for igual a zero ele nao funcionara.
    PCA_MathAddPercent(20, 25) Retorna 25%
    PCA_MathRemPercent(20, 30) Retorna 14%
    PCA_MathRandom(10, 20) Retorna um numero aleatorio entre 10 e 20
```

### PCAString.inc, Funçoes sao:
```
    PCA_IsStringEmpty(const string[]); Retorna verdadeiro se a string for nula ou vazia
    PCA_IsStringNumeric(const string[]); Retorna verdadeiro se a string for numerica
    PCA_IsStringAlpha(const string[]); Retorna verdadeiro se a string for alfabetica
    PCA_IsStringHasNumber(const string[]); Retorna verdadeiro se a string tiver numeros
    PCA_IsStringAlphaNumeric(const string[]); Retorna verdadeiro se a string for alphanumerica
    PCA_StringToUpper(string[]); Converte os caracteres da string em Maiusculo(no-local)
    PCA_StringToLower(string[]); Converte os caracteres da string em Minusculo(no-local)
    PCA_StringCapitalize(string[]); Deixa o primeiro caractere da string em Maiusculo, se o resto for Maiusculo transforma em Minusculo(no local)
    
```

## Ultima atualizaçao 01/01/2026
### Criado por mim, todos os direitos reservados ao criador.
