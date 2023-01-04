#include <iostream>
#include "graph.h"

using namespace std;

int main()
{
    cout <<"========= TP MOD 13 ========" << endl;
    cout << "NAMA   : BAYU SENO NUGROHO" << endl;
    cout << "NIM    : 1301213270" << endl;
    cout << "KELAS  : IF-45-02" << endl;
    cout <<"============================"<< endl;
    Graph G;
    createList_1301213270(G);
    addNode_1301213270(G, newNode_1301213270('A'));
    addNode_1301213270(G, newNode_1301213270('B'));
    addNode_1301213270(G, newNode_1301213270('C'));
    addNode_1301213270(G, newNode_1301213270('D'));
    //A
    addEdge_1301213270(G,'A','C');
    addEdge_1301213270(G,'A','D');
    addEdge_1301213270(G,'A','B');
    //B
    addEdge_1301213270(G,'B','C');
    addEdge_1301213270(G,'B','D');
    //C
    addEdge_1301213270(G,'C','A');
    //D
    addEdge_1301213270(G,'D','B');
    addEdge_1301213270(G,'D','A');

    printGraph_1301213270(G);
    return 0;
}
