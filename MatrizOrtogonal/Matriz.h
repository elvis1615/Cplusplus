#include <iostream>
#include <stdlib.h>

using namespace std;

/*----------------nodo Ortogonal------------*/
struct nodoOrtogonal
{
    int dato,x,y;
    nodoOrtogonal* arriba;
    nodoOrtogonal* abajo;
    nodoOrtogonal*izquierda;
    nodoOrtogonal* derecha;

    nodoOrtogonal(int dato, int x, int y)
    {
    this->dato=dato;
    this->x=x;
    this->y=y;
    arriba=NULL;
    abajo=NULL;
    izquierda=NULL;
    derecha=NULL;
    }


};

struct listaVertical{
    nodoOrtogonal* primero;
    nodoOrtogonal* ultimo;

    listaVertical()
    {
        primero=NULL;
        ultimo=NULL;
    }

    void insertar(nodoOrtogonal* inserta)
    {
        if(vacio())
            {
            primero=ultimo=inserta;
            }
        else
            {
            if(inserta->y<primero->y)
                {
                insertarFrente(inserta);
                }
            else if(inserta->y>ultimo->y)
                {
                insertarFinal(inserta);
                }
            else
                {
                insertarMedio(inserta);
                }

            }
        }

    bool vacio()
    {
        if(primero==NULL)
            {
            return true;
            }
        else
            {
            return false;
            }
    }


    void insertarFrente(nodoOrtogonal* inserta)
    {
        primero->arriba=inserta;
        inserta->abajo=primero;
        primero=primero->arriba;
    }

    void insertarFinal(nodoOrtogonal* inserta)
    {
        ultimo->abajo=inserta;
        inserta->arriba=ultimo;
        ultimo=ultimo->abajo;
    }

    void insertarMedio(nodoOrtogonal* inserta)
    {
        nodoOrtogonal* temporal1;
        nodoOrtogonal* temporal2;
        temporal1=primero;
        while(temporal1->y<inserta->y)
        {
            temporal1=temporal1->abajo;
        }
        temporal2=temporal1->arriba;

        temporal2->abajo=inserta;
        temporal1->arriba=inserta;
        inserta->abajo=temporal1;
        inserta->arriba=temporal2;
    }


    void recorrer()
    {
        if(!vacio())
            {
                nodoOrtogonal* temporal=primero;
                while(temporal!=NULL)
                {
                cout<<"y="<<temporal->y<<endl;
                temporal=temporal->abajo;
                }
            }

    }

};

/*lista horizontal*/
struct listaHorizontal
{
        nodoOrtogonal* primero;
    nodoOrtogonal* ultimo;

    listaHorizontal()
    {
        primero=NULL;
        ultimo=NULL;
    }

    void insertar(nodoOrtogonal* inserta)
    {
        if(vacio())
            {
            primero=ultimo=inserta;
            }
        else
            {
            if(inserta->x<primero->x)
                {
                insertarFrente(inserta);
                }
            else if(inserta->x>ultimo->x)
                {
                insertarFinal(inserta);
                }
            else
                {
                insertarMedio(inserta);
                }

            }
        }

    bool vacio()
    {
        if(primero==NULL)
            {
            return true;
            }
        else
            {
            return false;
            }
    }


    void insertarFrente(nodoOrtogonal* inserta)
    {
        primero->izquierda=inserta;
        inserta->derecha=primero;
        primero=primero->izquierda;
    }

    void insertarFinal(nodoOrtogonal* inserta)
    {
        ultimo->derecha=inserta;
        inserta->izquierda=ultimo;
        ultimo=ultimo->derecha;
    }

    void insertarMedio(nodoOrtogonal* inserta)
    {
        nodoOrtogonal* temporal1;
        nodoOrtogonal* temporal2;
        temporal1=primero;
        while(temporal1->x<inserta->x)
        {
            temporal1=temporal1->derecha;
        }
        temporal2=temporal1->izquierda;

        temporal2->derecha=inserta;
        temporal1->izquierda=inserta;
        inserta->derecha=temporal1;
        inserta->izquierda=temporal2;
    }


    void recorrer()
    {
        if(!vacio())
            {
                nodoOrtogonal* temporal=primero;
                while(temporal!=NULL)
                {
                cout<<"x="<<temporal->x<<endl;
                temporal=temporal->derecha;
                }
            }

    }

};
/*--------nodo cabecera---------*/
struct nodoCabecera
{
    int x;
    nodoCabecera* siguiente;
    nodoCabecera* anterior;
    listaVertical* Columna;

    nodoCabecera(int x)
    {
        this->x=x;
        Columna= new listaVertical();
        siguiente=NULL;
        anterior=NULL;

    }

};

struct cabeceras{
    nodoCabecera* primero;
    nodoCabecera* ultimo;


    cabeceras()
    {
        primero=NULL;
        ultimo=NULL;
    }

    void insertar(nodoCabecera* inserta)
    {
        if(vacio())
            {
            primero=ultimo=inserta;
            }
        else
            {
            if(inserta->x<primero->x)
                {
                insertarFrente(inserta);
                }
            else if(inserta->x>ultimo->x)
                {
                insertarFinal(inserta);
                }
            else
                {
                insertarMedio(inserta);
                }

            }
        }

    bool vacio()
    {
        if(primero==NULL)
            {
            return true;
            }
        else
            {
            return false;
            }
    }


    void insertarFrente(nodoCabecera* inserta)
    {
        primero->anterior=inserta;
        inserta->siguiente=primero;
        primero=primero->anterior;
    }

    void insertarFinal(nodoCabecera* inserta)
    {
        ultimo->siguiente=inserta;
        inserta->anterior=ultimo;
        ultimo=ultimo->siguiente;
    }

    void insertarMedio(nodoCabecera* inserta)
    {
        nodoCabecera* temporal1;
        nodoCabecera* temporal2;
        temporal1=primero;
        while(temporal1->x<inserta->x)
        {
            temporal1=temporal1->siguiente;
        }
        temporal2=temporal1->anterior;

        temporal2->siguiente=inserta;
        temporal1->anterior=inserta;
        inserta->siguiente=temporal1;
        inserta->anterior=temporal2;
    }


    void recorrer()
    {
        if(!vacio())
            {
                nodoCabecera* temporal=primero;
                while(temporal!=NULL)
                {
                cout<<"x="<<temporal->x<<endl;
                temporal=temporal->siguiente;
                }
            }

    }

    bool existe(int x)
    {
        if(vacio())
        {
            cout<<"no existe lista vacia"<<endl;
            return false;
        }
        else
        {
            nodoCabecera* temporal;
            temporal= primero;
            while(temporal!=NULL)
                {
                if(temporal->x==x)
                    {
                    cout<<"existe"<<endl;
                    return true;

                    }
                else if(temporal->siguiente==NULL)
                    {
                        cout<<"no se encontro"<<endl;
                    return false;
                    }
                temporal=temporal->siguiente;
                }
        }
    }

    nodoCabecera* busqueda(int x)
    {
        if(existe(x))
            {
            nodoCabecera* temporal;
            temporal=primero;
            while(temporal->x!=x)
                {
                temporal= temporal->siguiente;
                }
                cout<<"retornando"<<endl;
            return temporal;
            }

        else{
            cout<<"no existe"<<endl;
            return(new nodoCabecera(-1));

        }
    }

};

/*------------nodo lateral-----------*/

struct nodoLateral
{
    int y;
    nodoLateral* siguiente;
    nodoLateral* anterior;
    listaHorizontal* Filas;

    nodoLateral(int y)
    {
        this->y=y;
        Filas= new listaHorizontal();
        siguiente=NULL;
        anterior=NULL;

    }

};

/*-----------lista laterales------------*/

struct laterales{

    nodoLateral* primero;
    nodoLateral* ultimo;


    laterales()
    {
        primero=NULL;
        ultimo=NULL;
    }

    void insertar(nodoLateral* inserta)
    {
        if(vacio())
            {
            primero=ultimo=inserta;
            }
        else
            {
            if(inserta->y<primero->y)
                {
                insertarFrente(inserta);
                }
            else if(inserta->y>ultimo->y)
                {
                insertarFinal(inserta);
                }
            else
                {
                insertarMedio(inserta);
                }

            }
        }

    bool vacio()
    {
        if(primero==NULL)
            {
            return true;
            }
        else
            {
            return false;
            }
    }


    void insertarFrente(nodoLateral* inserta)
    {
        primero->anterior=inserta;
        inserta->siguiente=primero;
        primero=primero->anterior;
    }

    void insertarFinal(nodoLateral* inserta)
    {
        ultimo->siguiente=inserta;
        inserta->anterior=ultimo;
        ultimo=ultimo->siguiente;
    }

    void insertarMedio(nodoLateral* inserta)
    {
        nodoLateral* temporal1;
        nodoLateral* temporal2;
        temporal1=primero;
        while(temporal1->y<inserta->y)
        {
            temporal1=temporal1->siguiente;
        }
        temporal2=temporal1->anterior;

        temporal2->siguiente=inserta;
        temporal1->anterior=inserta;
        inserta->siguiente=temporal1;
        inserta->anterior=temporal2;
    }


    void recorrer()
    {
        if(!vacio())
            {
                nodoLateral* temporal=primero;
                while(temporal!=NULL)
                {
                cout<<"y="<<temporal->y<<endl;
                temporal=temporal->siguiente;
                }
            }

    }

    bool existe(int y)
    {
        if(vacio())
        {
            cout<<"no existe lista vacia"<<endl;
            return false;
        }
        else
        {
            nodoLateral* temporal;
            temporal= primero;
            while(temporal!=NULL)
                {
                if(temporal->y==y)
                    {
                    cout<<"existe"<<endl;
                    return true;

                    }
                else if(temporal->siguiente==NULL)
                    {
                        cout<<"no se encontro"<<endl;
                    return false;
                    }
                temporal=temporal->siguiente;
                }
        }
    }

    nodoLateral* busqueda(int y)
    {
        if(existe(y))
            {
            nodoLateral* temporal;
            temporal=primero;
            while(temporal->y!=y)
                {
                temporal= temporal->siguiente;
                }
                cout<<"retornando"<<endl;
            return temporal;
            }

        else{
            cout<<"no existe"<<endl;
            return(new nodoLateral(-1));

        }
    }
};

struct matrizOrtogonal
{
    cabeceras* c;
    laterales* l;

    matrizOrtogonal()
    {
        c= new cabeceras();
        l=new laterales();
    }

    void insertar(int x, int y, int inserta)
    {
        nodoOrtogonal * insercion;
        insercion=new nodoOrtogonal(inserta,x,y);
        if(c->existe(x)==false)
        {
            c->insertar(new nodoCabecera(x));
        }
        if(l->existe(y)==false)
        {
            l->insertar(new nodoLateral(y));
        }
        nodoCabecera* CTemporal;
        nodoLateral* LTemporal;
        CTemporal=c->busqueda(x);
        LTemporal=l->busqueda(y);
        CTemporal->Columna->insertar(insercion);
        LTemporal->Filas->insertar(insercion);
        cout<<"inserto "<<inserta<<"en "<<x<<" "<<y<<endl;

    }

    void llenar(int x, int y)
    {
            int o=0;
        for(int j=0;j<y;j++)
            {
                for(int i=0;i<x;i++)
                    {
                    insertar(i,j,o);
                    o++;
                    }

            }
    }
};

