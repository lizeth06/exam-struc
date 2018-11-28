#include <iostream> 
#include <conio.h> 
#include <time.h> 
#include <stdlib.h> 
using namespace std; 
struct nodo{
	 int nro;
     struct nodo *izq, *der;
};
typedef struct nodo *ABB;
ABB crearNodo(int x)
{
     ABB nuevoNodo = new(struct nodo);
     nuevoNodo->nro = x;
     nuevoNodo->izq = NULL;
     nuevoNodo->der = NULL;

     return nuevoNodo;
}

int main (){ 
int cantidad, nAguila=0;	
srand(time(NULL)); 
cout<<"Cuantos lanzamientos?: "; 
cin>>cantidad;	
for(int i=1; i<=cantidad; i++){	
cout<<i<<" Tiro: ";	
if (rand()%2 == 0){ 
cout<<"Aguila\n"; 
nAguila++; 
}else{ 
cout<<"Sol\n"; 
} 
}	
cout<<"\nEl numero de aguilas es :" <<nAguila; 
cout<<"\nEl numero de soles es :"; 
cout<<cantidad-nAguila<<endl;	
getch(); 
return 0; 
}
