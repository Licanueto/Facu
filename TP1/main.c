#include <stdio.h>
#include <stdlib.h>

// https://drive.google.com/drive/folders/0B_Chd9UBnws0bll4bzhINUg4bm8
float promedio();

int main()
{
    int arreglo[100],valoresCargados,charsCargados=30;
    char arregloChar[100];

    valoresCargados = carga_solo_para_simplificar_la_cosa(arreglo);
    /////////////////////////////////////////////////
    printf("\n El promedio de los valores es de %.2f",promedio(arreglo,valoresCargados,suma(arreglo)));

    cargaArrChar(arregloChar,charsCargados);
    muestraArrChar(arregloChar,charsCargados);
    puts("\n Arreglo invertido\n");
    invierteArrChar(arregloChar,charsCargados);
    muestraArrChar(arregloChar,charsCargados);


    printf("\n\n Llega al final");
    return 0;
}

int carga_solo_para_simplificar_la_cosa (int arr[])
{
    int i,valoresCargados=10; //modificar a gusto
    for(i=10;i<100;i++)
    {
        arr[i]=-1;
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    for (i=0;i<valoresCargados;i++)
    {
        arr[i]=rand()%100+(i*i*i)-(i*i);
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    return(valoresCargados);
}


int suma (int arr[])
{
    int i,suma=0;
    for (i=0;i<10;i++)
    {
        suma=suma+arr[i];
    }
    return (suma);
}

// ejercicio 1d no es necesrio hacerlo, uso retorno de la carga y listo

float promedio (int arr[],int cargados,int suma)
{
    float avrg;
    avrg = suma / cargados;
    return (avrg);
}


int cargaArrChar (char arr[], int cantidad_a_cargar)
{
    int i;
    for (i=0 ; i<cantidad_a_cargar ; i++)
    {
        arr[i]=97+rand()%26;
    }
    return (cantidad_a_cargar);
}
void muestraArrChar (char arr[], int cantidad_a_mostrar)
{
    int i;
    puts("\n\n  Arreglo Char:\n");
    for (i=0 ; i<cantidad_a_mostrar ; i++)
    {
        if (i<10)
        {printf("   arr[%d] = %c\n",i,arr[i]);}
        if (i>9)
        {printf("  arr[%d] = %c\n",i,arr[i]);}

    }

}
void invierteArrChar (char arr[],int cantidad_de_elementos_cargados)
{
    int i;
    char arrAux[100];
    for (i=0 ; i<cantidad_de_elementos_cargados ; i++)
    {
        arrAux[i] = arr[i];
        printf("   arr[%d] = %c\n",i,arrAux[i]);
    }
    for (i=0 ; i<cantidad_de_elementos_cargados ; i++)
    {
        arr[i] = arrAux[99-i];
    }
}
