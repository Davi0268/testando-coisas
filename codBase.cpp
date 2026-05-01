#include<bits/stdc++.h>
using namespace std;

void menu(){
     for(int i = 1; i < 40; i++){
        cout << "#";
    }
    cout << "\n  Escolha um numero entre(1, 2, 3, 4)\n";
    cout << "          <1> Forma atual do vetor\n";
    cout << "          <2> Bubble Sort\n";
    cout << "          <3> Select Sort\n";
    cout << "          <4> Insertion Sort\n";
    cout << "          <5> Sair\n";
    for(int i = 1; i < 40; i++){
        cout << "#";
    }
    cout << "\n";
}

void BubbleSort(vector<int>& v){
        int t = v.size();
        for(int i = 0; i < t - 1; i++){
            for(int j = 0; j < t - i - 1; j++){
                if(v[j] > v[j + 1]){
                    swap(v[j], v[j + 1]);
                }
            }
        }
    }

void SelectSort(vector<int>& v){
    int t = v.size();
    for(int i = 0; i < t - 1; i++){
        int min = i;
        for(int j = i + 1; j < t; j++){
            if(v[j] < v[min]){
                min = j;
            }
        }
        if(min != i){
            swap(v[i],v[min]);
        }
    }
}

void InserctionSort(vector<int>& v){
    int t = v.size();
    for(int i = 1; i < t; i++){
        int element = v[i];
        int j = i - 1;

        while(j >= 0 && v[j] > element){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = element;
    }
}

void aleatorio(vector<int>& v){
    for(int i = 0; i < 49; i++){
        int numPar = (rand() % 50) * 2;
        v.push_back(numPar);
    }
}

int main(){
    srand(time(0));
    vector<int> valores;
    aleatorio(valores);
    int escolha;
    aqui:
    menu();
    cin >> escolha;
    switch (escolha){
    case 1:
    for(int i = 0; i < valores.size(); i++){
        cout << valores[i] << " ";
    }
        cout << "\n";
        system("pause");
        goto aqui;

    case 2:
    BubbleSort(valores);

    for(int i = 0; i < valores.size(); i++){
        cout << valores[i] << " ";
    }
        cout << "\n";
        system("pause");
        break;
    
    case 3:
    SelectSort(valores);

    for(int i = 0; i < valores.size(); i++){
        cout << valores[i] << " ";
    }
        cout << "\n";
        system("pause");
        break;
    
    case 4:
    InserctionSort(valores);

     for(int i = 0; i < valores.size(); i++){
        cout << valores[i] << " ";
    }
        cout << "\n";
        system("pause");
        break;
    
    case 5:
    break;
    }
    return 0;
}