//Implemente una funci�n que reciba dos cadenas a y b;
//y copie los elementos de la cadena a para la cadena b.
#include <iostream>

using namespace std;
int tamR(char *arr){
    if(*arr++=='\0')
        return 0;
    else
        return 1+tamR(arr);
}
void copiar(char *arrA, char *arrB){
    while(*arrA!='\0'){
        *arrB=*arrA;
        arrB++;
        arrA++;
    }
    char *arr_f=arrB+tamR(arrA);
    *arr_f='\0';

}
int main()
{	
    char arrA[50];
    cout<<"Elementos de la cadena A: ";
    cin >>arrA;
    char arrB[50];
    cout<<"Elementos de la cadena B: ";
    cin >>arrB;
    char* ptr1,*ptr2;
    ptr1=arrA;
    ptr2=arrB;
    copiar(ptr1,ptr2);
    cout<<arrB;
    return 0;
    
}


