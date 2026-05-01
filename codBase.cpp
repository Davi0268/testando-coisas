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

void ordBubble(vector<int>& v){
        int t = v.size();
        for(int i = 0; i < t - 1; i++){
            for(int j = 0; j < t - i - 1; j++){
                if(v[j] > v[j + 1]){
                    swap(v[j], v[j + 1]);
                }
            }
        }
    }

void ordSelect(vector<int>& v){
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

void ordInsertion(vector<int>& v){
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

int main(){
    vector<int> valores = {
    92, 14, 46, 8, 62, 2, 88, 20, 54, 10, 
    76, 32, 98, 40, 68, 24, 82, 4, 58, 36, 
    100, 12, 50, 84, 18, 72, 30, 94, 44, 6, 
    64, 22, 80, 38, 90, 52, 16, 74, 28, 86, 
    42, 60, 26, 78, 34, 96, 48, 66, 56, 70
};// Fiz isso com IA pq JESUS imagina escrever 50 números destintos par
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
    ordBubble(valores);

    for(int i = 0; i < valores.size(); i++){
        cout << valores[i] << " ";
    }
        cout << "\n";
        system("pause");
        break;
    
    case 3:
    ordSelect(valores);

    for(int i = 0; i < valores.size(); i++){
        cout << valores[i] << " ";
    }
        cout << "\n";
        system("pause");
        break;
    
    case 4:
    ordInsertion(valores);

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