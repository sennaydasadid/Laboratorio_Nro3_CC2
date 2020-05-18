//Implemente una funci�n que reciba una cadena
// y retorne su tama�o. (Iterativa y recursiva)
#include <iostream>

using namespace std;


int tam(char *arr){
    int c=0,i=0;

    while (*arr++!='\0'){
        c++;
        i++;
    }
    return c;
}
int tamR(char *arr){
    if(*arr++=='\0')
        return 0;
    else
        return 1+tamR(arr);
}

int main()
{

    char arr[]="Ciencia de la Computacion";
    char *ptr;
    ptr=arr;
	
	cout<<"\nLongitud del Arreglo"<<endl;
    cout<<"Iterativo: "<<tam(ptr)<<endl;
    cout<<"Recursivo: "<<tamR(ptr);
    return 0;
}
