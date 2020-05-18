//Implementar una funci�n reciba un arreglo de enteros y su tama�o y 
//retorne la suma de los elementos de un arreglo.(Iterativa y recursiva).
#include <iostream>

using namespace std;
int suma_arr(int *arr,int t){
    int suma=0;
    for(int i=0;i<t;i++)
        suma+=*arr++;
    return suma;
}
int suma_arrR(int *arr,int t){
    if(t==1)
        return *arr;
    else
        return *arr + suma_arrR(++arr,--t);
}
int main()
{
    int tam=6;
    int arr[]={5,19,45,21,12,8};
    int* ptr;
    ptr=arr;
    cout<<"\nSuma Iteratva: "<<suma_arr(ptr,tam)<<endl;
    cout<<"Suma Recursiva: "<<suma_arrR(ptr,tam);

    return 0;
}
