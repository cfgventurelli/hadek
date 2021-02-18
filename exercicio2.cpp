#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

string concatERemove(string s, string t, int k)
{
    
    // Caso as string sejam iguais, deverá apenas verificar se a quantidade de passos
    // está correta.
    if (s == t)
        return (k == 1) ? "sim" : "não";
    
    // Carrega o tamanho da string "s".
    int l = s.length();
    
    // Faz a iteração em cima da quantidade informada pelo usuário.
    for (int i = 0; i < k; ++i)
    {
    	// Verifica se as strings estão iguais
        if (s.substr(0, l - i) == t.substr(0, l - i))
        {
        	// Se sim, carrega o tamanho restante da variável "t"
            int remaining = t.substr(l - i).length();
            
            // Se o tamanho restante for 0, ou se ele somado à quantidade iterada
            // for igual ao "k", então retorna que a quantidade de passos está correta.
            // Senão apenas sai do loop e segue para o return final do processo.
            if (remaining == 0 || remaining + i == k)
                return "sim";

            break;
        }
    }
    
    return "não";
    
}

int main()
{
    string s, t;
    int k;
    
    getline(cin, s);
    getline(cin, t);
    cin >> k;
    
    cout << concatERemove(s, t, k);
}

