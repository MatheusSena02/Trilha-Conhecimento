#include <iostream>

using namespace std;

int main()
{
    int vetor[10], valor;
    cin >> valor;
    for(int a = 0; a < 10; a++)
    {
        vetor[a] = a;    
    }
    for(int i = 0; i < 10; i++)
    {
        if(valor == vetor[i])
        {
            cout << "O valor está nessa posição no vetor : " << i << endl;
            break;
        }else if(i == 9 && vetor[i] != valor)
        {
            cout << "O valor não pertence a esse vetor" << endl;
        } 
    }
}