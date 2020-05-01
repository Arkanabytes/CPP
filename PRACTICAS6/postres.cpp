/*
    Ejercicio: VENTA DE POSTRES
*/
#include<iostream>
#include<cstdlib>
#define maxchar 50
 
using namespace std;
 
struct nodo2{
    char ingrediente[maxchar];
 
};
 
struct nodo{
 
    char nombre[maxchar];
    float precio;
    int codigo;
    int cantIngred;
    nodo2 ingred[maxchar];
    struct nodo *sgte;
 
};
 
typedef struct nodo *TPostre;
 
/*-------------------- FUNCION MENU PRINCIPAL ------------------*/
void menu(void){
 
    cout<<"\n\t\t[       VENTA DE POSTRES       ]\n";
    cout<<"\t\t--------------------------------\n\n";
    cout<<" 1. REGISTRAR POSTRE                          "<<endl;
    cout<<" 2. LISTAR POSTRES                            "<<endl;
    cout<<" 3. VENDER POSTRE                             "<<endl;
    cout<<" 4. SALIR                                     "<<endl;
 
    cout<<"\n Ingrese opcion : ";
}
 
/*------------------- FUNCION REGISTRAR UN POSTRE ------------------*/
void registrar_postre(TPostre &lista){
 
    TPostre t,q = new(struct nodo);
 
    cout<<"\n\n\t\t[  REGISTRO  ]\n";
    cout<<"\t\t------------";
 
    cout<<"\n\tDATOS DEL POSTRE \n";
    cout<<"\n\tCODIGO DE VENTA:"; cin>>q->codigo;
    cin.ignore();cout<<"\n\tNOMBRES:"; cin.getline(q->nombre,maxchar);
    cout<<"\n\tPRECIO:"; cin>>q->precio;
 
    cout<<"\n\tIngrese Cantidad de Ingredientes:";
    cin>>q->cantIngred;
 
    for(int i=0;i<q->cantIngred;i++){
 
        cin.ignore();
        cout<<"\n\tIngrese ingrediente # "<<i+1<<"  : ";
        cin.getline(q->ingred[i].ingrediente,maxchar);
 
    }
 
    cout<<endl;
 
    system("cls");
 
    q->sgte = NULL;
 
    if(lista==NULL){
 
        lista = q;
 
    } else {
 
        t = lista;
 
        while(t->sgte!=NULL){
 
                t = t->sgte;
        }
 
        t->sgte = q;
 
    }
}
 
/*-------------------- MOSTRAR LISTA DE POSTRES ------------------*/
void listar_postres(TPostre q){
 
    int i=1;
 
    while(q!=NULL){
 
        cout<<"\n\n\tDATOS DEL POSTRE ["<<i<<"] ";
        cout<<"\n\t------------------------";
        cout<<"\n\tCODIGO DE VENTA: "<<q->codigo<<endl;
        cout<<"\n\tNOMBRE  : "<<q->nombre<<endl;
        cout<<"\n\tPRECIO : "<<q->precio<<endl;
        cout<<"\n\tINGREDIENTES:"<<endl;
 
        for(int j=0;j<q->cantIngred;j++){
            cout<<endl<<"\t"<<j+1<<".- "<<q->ingred[j].ingrediente;
        }
 
        q=q->sgte;
 
        i++;
    }
 
}
 
/*-------------------- FUNCION VENDER POSTRE  ------------------*/
void vender_postre(TPostre q){
 
    int cant;
    int cod;
 
    cout<<"\n\n\n\t";
    cout<<"\n\n\tINGRESE CODIGO DE VENTA:"; cin>>cod;
 
    while(q!=NULL){
 
            if(q->codigo==cod){
 
                system("cls");
 
                cout<<"\n\tDATOS DEL  POSTRE";
                cout<<"\n\t--------------------";
                cout<<"\n\n\tCODIGO   : "<<q->codigo<<endl;
                cout<<"\n\tNOMBRE  : "<<q->nombre<<endl;
                cout<<"\n\tPRECIO  : "<<q->precio<<endl;
                cout<<"\n\tINGREDIENTES:"<<endl;
 
                for(int j=0;j<q->cantIngred;j++){
 
                    cout<<endl<<"\t"<<j+1<<".- "<<q->ingred[j].ingrediente;
                }
 
                cout<<"\n\n\tINGRESE CANTIDAD DE PORCIONES:";
                cin>>cant;
                cout<<"\n\n\tTOTAL A PAGAR:"<<cant*q->precio;
                cout<<"\n\n\tGRACIAS POR SU COMPRA.....!!!!!!";
 
                return;
 
            }else {
 
 
                q=q->sgte;
 
        }
 
    }
    if(q==NULL)
        cout<<"\n\tCODIGO INCORRECTO...!!\n";
}
 
 
 
/*------------------------FUNCION PRINCIPAL-------------------------*/
int main(void){
 
    system("color 0a");
 
    TPostre lista=NULL;
 
    int op;
 
    do{
            menu();
            cin>>op;
 
            switch(op){
 
                case 1: registrar_postre(lista);
                        break;
 
                case 2: listar_postres(lista);
                        break;
 
                case 3: vender_postre(lista);
                        break;
 
                case 4: return 0;
 
 
                default: cout<<"\nINGRESE UNA OPCION VALIDA...\n"; break;
 
            }
            cout<<endl;
            system("pause");  system("cls");
 
        }while(op!=6);
 
    system("pause");
 
return 0;
}
