//Implementar una funci�n que ordene los elementos de un arreglo: ascendente.
#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    a^=b;
    b^=a;
    a^=b;
}
void ordenar(int *arr, int t){
    int *ptr=arr;
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            ptr=arr+j;
            if(*arr>*ptr){
                swap(*arr,*ptr);
            }
        }
        arr++;
    }

}


void print(int *arr,int tam){
    
	for(int i=0; i<tam;i++){
		cout<<*arr<<" ";
        arr++;
    }
	cout<<endl;
} 
int main()
{
    int tam=7;
    int arr[]={3,5,8,4,6,2,7};
    int *ptr;
    ptr=arr;
	cout<<"\nArreglo original"<<endl;
	print(ptr,tam);	
	cout<<"\nArreglo ordenado"<<endl;

  	ordenar(ptr,tam);
	print(ptr,tam);
    return 0;
}
