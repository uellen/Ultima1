#include <iostream>
using namespace std;

int main (){
    int v[100];
    int n;

    cout<<"Digite o tamanho do vetor: ";
    cin>>n;
    for (int i; i<n; i++){
        cout<<"Digite o elemento do vetor: ";
        cin>> v[i];
    }
    int maior = 0;
    for (int i; i<n; i++){
        if (v[i]>maior){
            maior = v[i];
        }
    }
    cout<<"Numero de elementos "<<n<<endl;
    cout<<"O maior elemento e: " <<maior<<endl;
    cout<<"Seu vetor: " <<" ";
    for (int i; i<n; i++){
        cout<<v[i]<< " ";
    }

}
