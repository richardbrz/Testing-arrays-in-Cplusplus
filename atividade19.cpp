#include <iostream>
using namespace std;

int main()
{

float array[2][10] = { {165, 173.25, 181.91, 191.01, 200.56, 210.59, 221.12, 232.17, 243.78, 255.97}, {181.50, 190.58, 200.10, 210.11, 220.61, 231.65, 243.23, 255.39, 268.6, 281.57} };
string faixaEtaria[10] = {"0-18", "19-23", "24-28", "29-33", "34-38", "39-43", "44-48", "49-53", "54-60", "> 60"};

int escolha, vidas; string faixa;
cout << "Escolha:\n0 - Enfermaria;\n1 - Apartamento;\n9 - Sair\n"; std::cin >> escolha;
cout << "\nQuantas vidas estarao inclusas no plano?\n"; std::cin >> vidas;

do
{
    if (escolha == 0 || 1)
    {
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 10; j++)
            {
                switch(escolha)
                {
                    case 0:
                        cout << "\nValor: " << array[0][j] << "\nFaixa etaria: " << faixaEtaria[j] << "\nValor final do plano: " << array[0][j] * vidas << "\n";
                         if (i >= 0) i = 2; //Evitar repetição
                       
                    break;

                    case 1:
                         if (i >= 0) i = 1; //Evitar repetição
                        cout << "\nValor: " << array[1][j] << "\nFaixa etaria: " << faixaEtaria[j] << "\nValor final do plano: " << array[1][j] * vidas << "\n";
                    break;
                }

                //cout << "\n\n\n\n\n\n\n\n--------\nDebug!\n----------\n\nArray[" << i << "]" << "[" << j << "]" << " = " << array[i][j] << "\n";
            }
        }
    }

    cout << "\nPara consultar demais valores, utilize respectivamente, 0 ou 1.\nPara sair, digite 9.\n"; std::cin >> escolha;

    if (escolha != 9) // Resetar valores
    {
        cout << "\nDigite quantas tinhas estarao no plano: \n"; std::cin >> vidas;
        int escolha;
    }

}
while(escolha != 9);

return 0;
}