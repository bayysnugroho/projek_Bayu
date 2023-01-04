#include "graph.h"

void createList_1301213270(Graph &G){
    first(G) = NULL;
}
adrNode newNode_1301213270(char x){
    adrNode p = new Node;
    p->info = x;
    p->child = NULL;
    p->next = NULL;
    return p;
}
void addNode_1301213270(Graph &G, adrNode p){
    if(first(G) == NULL){
        first(G) = p;
    }else{
        adrNode a;
        a = first(G);
        while (a->next != NULL){
            a = a->next;
        }
        a->next = p;
    }
}
adrNode findNode_1301213270(Graph G, char x){
   if(first(G) == NULL){
        return NULL;
   } else{
        adrNode a;
        a = first(G);
        while (a != NULL){
            if(a->info == x){
                return a;
            }
            a = a->next;
        }
        return NULL;
   }
}
void addEdge_1301213270(Graph &G, char x,char y){
    if(findNode_1301213270(G,x) == NULL){
        cout << "Data Parents Tidak Ditemukan"<<endl;
    }else{
        if(findNode_1301213270(G,x)->child == NULL){
            findNode_1301213270(G,x)->child = newNode_1301213270(y);
        }else{
            adrNode a;
            a = findNode_1301213270(G,x)->child;
            while(a->next != NULL){
                a = a->next;
            }
            a->next = newNode_1301213270(y);
        }
    }
}
bool isConnected_1301213270(Graph G, char x, char y){
    if(findNode_1301213270(G,x) == NULL){
        cout << "Data Perents Tidak Ditemukan"<< endl;
        return false;
    }else{
        adrNode cek;
        cek = findNode_1301213270(G,x)->child;
        while(cek != NULL){
            if(cek->info == y){
                return true;
            }
            cek = cek->next;
        }
        return false;
    }
}
void printGraph_1301213270(Graph G){
    if(first(G) == NULL){
        cout<<"Tidak ada data"<<endl;
    }else{
        adrNode a;
        a = first(G);
        while(a!= NULL){
            cout <<"NODE : "<< a->info <<":";
            adrNode b = a->child;
            while(b != NULL){
                cout << " - " << b->info;
                b = b->next;
            }
            cout<<endl;
            a = a->next;
        }
    }
}
