#include <iostream>
using namespace std;

int main (){
    int v[100];
    int c[10] = {};
    int n;
    int i = 0;

    cout<<"Digite o tamanho do vetor: ";
    cin>>n;
    for (int i = 0; i<n; i++){
        cout<<"Digite o elemento do vetor: ";
        cin>> v[i];
    }
    int maior = 0;
    int mostrador = 0;
    for (int i = 0; i<n; i++){
        if (v[i]>maior){
            maior = v[i];
            mostrador = i;
        }
        c[v[i]]++;
    }
    cout<<"Numero de vetores: " <<n<<endl;

    cout<<"Seu vetor e: ";
    for (int i = 0; i<n ; i++){
        cout<<v[i] << " ";
    }
    cout<<" "<<endl;
    cout<<"disposicao quantitativa: ";
    for (int i = 0; i<10; i++){
        cout<<c[i]<<" ";
    }

}
