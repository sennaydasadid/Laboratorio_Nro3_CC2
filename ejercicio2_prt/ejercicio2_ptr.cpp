//Implementar una funci�n que invierta los elementos
// de un arreglo de enteros (Iterativa y recursiva).
#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    a^=b;
    b^=a;
    a^=b;
}
void invertir(int *arr,int tam){
    int *arr_f=arr+tam-1;
    //while(*arr<=*arr_f){
    for(int i=0;i<tam/2;i++){
        swap(*arr++,*arr_f--);
    }
}

int invertirR(int *arr, int tam,int i){	
    
    if(i<tam+1){
        int *arr_f=arr+tam-1;
        swap(*arr,*arr_f); 	
	    invertirR(++arr,tam-2,++i);
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
	int tam=8;
    int arr[]={5,7,3,6,9,8,2,1};
   // int* ptr;
    //ptr=arr;
	cout<<"\nArreglo original"<<endl;
	print(arr,tam);	
	
	cout<<"\nInvertido"<<endl;
	cout<<"Iterativo: "; 
	invertir(arr,tam);
	print(arr,tam);
	cout<<"Recursivo: "; 
    invertirR(arr,tam,0);
    print(arr,tam);
	return 0;
}