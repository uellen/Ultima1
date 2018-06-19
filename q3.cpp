#include <iostream>

using namespace std;

int main()
{
    int v[100];
    int c [10] = {};
    int n;
    int mostrador = 0;

    cout<<"Digite o tamanho necessario para trabalho"<<endl;
    cin>>n;

    for (int i = 0; i<n ; i++){
    cout<<"Digite o elemento do vetor"<<endl;
    cin>>v[i];
    }
        int maior = v[0];
         for (int i = 0; i<n ; i++)
         {
         if (v[i] > maior)
         {
            maior = v[i];
            mostrador = i;
         }
         c[v[i]]++;
        }

    for (int i = 0; i<10 ; i++){
    cout<<c[i]<<" ";
    }

        int maiorc = c[0];
        int indice = 0;
        for (int i = 0; i<10 ; i++){
            if (c[i] > maiorc)
            {
                maiorc = c[i];
                indice = i;
            }
        }


        cout << "O elemento que mais se repete no vetor e " << indice << " e ele se repete " << maiorc << " vezes"<< endl;


        cout << "Os elementos que mais se repetem sao ";
        for(int i=0; i<10; i++){
            if(c[i] == maiorc){
                cout << "" << i << " e "<<v[maiorc];
            }
        }
        cout << " e se repetem " << maiorc << " e "<<c[v[maiorc]]<< " vezes" << endl;

}


