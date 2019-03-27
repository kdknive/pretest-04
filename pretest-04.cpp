/*
Nama        :   Kevin Dyandradiva
NPM         :   140810180046
Kelas       :   B
Tanggal     :   27 Maret 2019
*/

#include <iostream>
using namespace std;

struct ElemtList{
    char npm[14];
    char nama[40];
    float ipk;
    ElemtList* next;
};

typedef ElemtList* pointer;
typedef pointer list;

void createList(list& first);
void createElement(pointer& pBaru);
void insertSortNama(list& first, pointer pBaru);
void traversal(list first);

int main(){

}
void createList(List& First) {
    First = NULL;
}
void createElmt(pointer& pBaru) {
    pBaru= new ElemtList;
    cout<<"NPM     : ";cin.ignore();cin.getline(pBaru->nama,14);
    cout<<"Nama    : ";cin.ignore();cin.getline(pBaru->nama,30);
    cout<<"IPK     : ";cin>>pBaru->ipk;
    pBaru->next = NULL;
}
void insertFirst(List& First, pointer pBaru){
    if (First==NULL)
        First=pBaru;
    else {
        pBaru->next=First;
        First=pBaru;
    }
}
void traversal(List First){
    pointer pBantu;
    pBantu=First;
    while(pBantu != NULL) {
        cout << pBantu->info;
    pBantu = pBantu->next;
    }
}
