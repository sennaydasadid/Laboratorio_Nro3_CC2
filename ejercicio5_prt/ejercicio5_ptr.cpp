//Implemente una funci�n que reciba dos cadenas a y b;
 //dicha funci�n debe concatenar la cadena a a la cadena b.
//(asuma que la cadena b tiene el tama�o suficiente 
//para contener los elementos de a).
#include <iostream>

using namespace std;

int tamR(char *arr){
    if(*arr++=='\0')
        return 0;
    else
        return 1+tamR(arr);
}
void copiar(char *arrB,char *arrA){
	int tamB=tamR(arrB);
	int tamA=tamR(arrA);
	char *arr_fB=arrB+tamB;
    char *arr_fN=arrB+tamB+tamA;
    for(int i=0;i<tamA;i++)
        *arr_fB++=*arrA++;
    *arr_fN='\0';
}
int main()
{
    char arrA[50];
    cout<<"Elementos de la cadena A: "<<endl;
    cin >>arrA;
    char arrB[50];
    cout<<"Elementos de la cadena B: "<<endl;
    cin >>arrB;
    char* ptr1,*ptr2;
    ptr1=arrA;
    ptr2=arrB;
	copiar(ptr2,ptr1);
   // cout<<arrB;
    cout<<ptr2;
    return 0;
}
