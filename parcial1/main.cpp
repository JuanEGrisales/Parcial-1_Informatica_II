#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>
using namespace std;




int main(){

    int cadena[500];
    int num, contador=0, con,clave =21,aumento=0;
    char mensaje[20],letra;
    cout<<"Crearemos cadena de caracteres"<<endl;
for (int i=0;i!='\0' || i<=500;i++){  // for para ingresar y visualizar la cadena de enteros
        cout<<"Por favor ingrese un numero del 1 al 255: "<<endl;
        cin>>num;
        cadena[i]=num;
        cout<<endl<<endl;
        for(int j=0;j<=i;j++){
            if(j==i) cout<<cadena[j]<<endl;
            else cout<<cadena[j]<<", ";
        }
        contador++;
        cout<<endl;
        cout<<"___________________________________________________________"<<endl<<endl;

        if(contador==40){

            cout<<"Oprima 1 si no desea agregar otro numero"<<endl<<endl;
            cin>>con;
            if(con==1) break;
            else contador=0;
}
}

for(int i=0;i<=500;i++){ // for para rrecorrer la cadena y comparar
    int contadorchar=0;
    if(cadena[i]==clave){ // esta parte se remplaza por el circuito de comparacion

        for(int j=i+1,contador2=1;contador2<=clave;contador2++,j++){

            if(contador2==clave){
                if(cadena[j-1]%2==0){
                    letra=cadena[j];
                    mensaje[contadorchar+aumento]=letra;
                    aumento++;
                }
            }

        }

    }

}
cout<<mensaje<<endl<<endl;


}

