#include "Evaluador.h"



void evaluar()
{
    double nota = 0;

    cout<<"sonMayusculas:\t\t";
    if(sonMinusculas("hola")
        && sonMinusculas("camion")
        && sonMinusculas("chabelo")
        && sonMinusculas("inmortal")
        && sonMinusculas("caballo")
        && sonMinusculas("cabra")
        && sonMinusculas("o")
        && !sonMinusculas("GagA")
        && !sonMinusculas("holA")
        && !sonMinusculas("Test")
        && !sonMinusculas("O")
        && !sonMinusculas("CHUY")
        )
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    int a=2;
    int b=4;
    int c=10;
    int d=15;

    double arreglo[]={1,2,3};
    double arreglo2[]={10,20,30};
    double arreglo3[]={20,15,16,19};

    cout<<"getPromedio:\t\t";
    if(getPromedio(arreglo,3)==2
        && getPromedio(arreglo,2)==1.5
        && getPromedio(arreglo2,3)==20
        && getPromedio(arreglo2,2)==15
        && getPromedio(arreglo3,4)==17.5
        //&& getMayor(&a,&b,&a)==b
        )
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    cout<<"esPrimo:\t\t";
    if(esPrimo(1)
        && esPrimo(2)
        && esPrimo(3)
        && esPrimo(5)
        && esPrimo(7)
        && esPrimo(41)
        && esPrimo(43)
        && esPrimo(89)
        && esPrimo(97)
        && esPrimo(997)
        && esPrimo(113837)
        && esPrimo(856637)
        && !esPrimo(113838)
        && !esPrimo(856639)
        && !esPrimo(4)
        && !esPrimo(6)
        && !esPrimo(8)
        && !esPrimo(9)
        && !esPrimo(10)
        && !esPrimo(45)
        && !esPrimo(88)
        //&& getMayor(&a,&b,&a)==b
        )
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/6"<<endl<<endl;
}
