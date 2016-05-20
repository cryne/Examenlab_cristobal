#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
void revision_pangrama(char*);
void revision(char*);
int main(int argc, char const *argv[])
{
	int opcion=0;
	while(opcion!=4){
		cout<<"ingrese el numero de ejercicio al que desea entrar\n1-pangramas\n2-letras y palabras\n3-traductor morse\n4-salir"<<endl;
		cin>>opcion;
		if (opcion==1)
		{
			char* palabras=new char[126];
			cout<<"ingrese la palabra o frase que desea saber si es pangrama:"<<endl;	
			cin.ignore(126,'\n');	
			cin.getline(palabras,126,'\n');			
			revision_pangrama(palabras);
			delete[] palabras;	
		}
		if (opcion==2)
		{
			
		}
		if (opcion==3)
		{
			/* code */
		}
	}

	return 0;
}
void revision_pangrama(char* palabras){
	char abecedario[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
	int tama=strlen(palabras);
	int contador=0;
	for (int i = 0; i < 25; ++i)
	{
		for (int j = 0; j < tama; ++j)
		{
			if(abecedario[i]==palabras[j]){
				contador++;
				j=tama;
			}
		}
	}
	if(contador==25){
		cout<<"-"<<palabras<<"- es pangrama"<<endl;
	}else{
		cout<<"-"<<palabras<<"- no es pangrama"<<endl;
	}
	
}
void revision(char*){

}