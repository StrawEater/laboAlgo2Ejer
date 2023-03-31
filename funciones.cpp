#include <vector>
#include "algobot.h"

using namespace std;


bool pertene(vector<int> s, int search){

    for (int item : s) {
        if (item == search){
            return true;
        }
    }
    return false;
}

// Ejercicio 1
vector<int> quitar_repetidos(vector<int> s) {
    set<int> sSinRepetidos;
    for (int item : s) {
        sSinRepetidos.insert(item);
    }
    vector<int> res;
    for (int item : sSinRepetidos) {
            res.push_back(item);
    }
    return res;
}

// Ejercicio 2
vector<int> quitar_repetidos_v2(vector<int> s) {
    vector<int> res;
    for (int item : s) {
        if(!pertene(res, item)){
            res.push_back(item);
        }
    }

    return res;
}

// Ejercicio 3
bool mismos_elementos(vector<int> a, vector<int> b) {

    for(int itemB : b){
        if (!pertene(a,itemB)) return false;
    }

    for(int itemA : a){
        if (!pertene(b,itemA)) return false;
    }

    return true;

}

// Ejercicio 4
bool mismos_elementos_v2(vector<int> a, vector<int> b) {

    vector<int> vectorMayor, vectorMenor;

    if(a.size() > b.size()){
        vectorMayor = a;
        vectorMenor = b;
    }else{
        vectorMayor = b;
        vectorMenor = a;
    }

    set<int> menorSet;
    for(int item : vectorMenor){
        menorSet.insert(item);
    }
    int sizeOriginal = menorSet.size();

    for(int item : vectorMayor){
        menorSet.insert(item);
    }
    return sizeOriginal == menorSet.size();
}

// Ejercicio 5
map<int, int> contar_apariciones(vector<int> s) {
    map<int,int> res;
    for(int item : s){
        if(res.count(item) == 0){
            res[item] = 1;
        }
        else{
            res[item]++;
        }
    }
    return res;
}

// Ejercicio 6
vector<int> filtrar_repetidos(vector<int> s) {
    vector<int> res;
    map<int,int> cantElementos = contar_apariciones(s);
    for(pair<int, int> itemCant : cantElementos){
        if (itemCant.second == 1) res.push_back(itemCant.first);
    }
    return res;
}

// Ejercicio 7
set<int> interseccion(set<int> a, set<int> b) {

    set<int> res;
    for(int itemA : a){
        if( b.count(itemA) )  res.insert(itemA);
    }

    return res;
}

// Ejercicio 8
map<int, set<int>> agrupar_por_unidades(vector<int> s) {
    return map<int, set<int>>();
}

// Ejercicio 9
vector<char> traducir(vector<pair<char, char>> tr, vector<char> str) {
    return vector<char>();
}

// Ejercicio 10
bool integrantes_repetidos(vector<Mail> s) {
    return true;
}

// Ejercicio 11
map<set<LU>, Mail> entregas_finales(vector<Mail> s) {
  return map<set<LU>, Mail>();
}
