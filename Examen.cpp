#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
void revision_pangrama(char*);
void revision(char*);
void morse(char*);

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
			int opcion2=1;
			int contador=0;
			char** todo=new char*[126];
			for (int i = 0; i < 126; ++i)
			{
				todo[i]=new char[126];
			}
			char* palabras=new char[126];
			while(opcion2!=0){								
				cout<<"ingrese la palabra o frase que desea saber sus propiedades:"<<endl;	
				cin.ignore(126,'\n');	
				cin.getline(palabras,126,'\n');
				revision(palabras);
				strcpy(todo[contador],palabras);				
				contador+=1;
				cout<<"desea continuar\n1-si\n0-no";
				cin>>opcion2;				
			}
			delete[] palabras;

			for (int i = 0; i < 126; ++i)
			{
				if(strlen(todo[i])>0){
					cout<<todo[i]<<endl;
				}
			}	
			for (int i = 0; i <126; ++i)
			{
				delete[] todo[i];
			}
			delete[] todo;
		}
		if (opcion==3)
		{
			char* palabras=new char[126];
			cout<<"ingrese la palabra o frase que desea saber sus propiedades:"<<endl;	
			cin.ignore(126,'\n');	
			cin.getline(palabras,126,'\n');
			morse(palabras);
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
void revision(char* palabras){
	
	int tama=strlen(palabras);
	int letras=0,palabrs=1;
	for (int i = 0; i <tama; ++i)
	{
		if(palabras[i]==' '){
			palabrs+=1;
		}else{
			letras+=1;
		}
	}
	cout<<"Cantidad de palabras: "<<palabrs<<endl;
	cout<<"Cantidad de letras: "<<letras<<endl;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
	for (int i = 0; i < tama; ++i)
	{
		if (palabras[i]=='a')
		{
		 	a+=1;
		}
		if (palabras[i]=='b')
		{
		 	b+=1;
		}
		if (palabras[i]=='c')
		{
			c+=1;
		}
		if (palabras[i]=='d')
		{
			d+=1;
		}
		if (palabras[i]=='e')
		{
			e+=1;
		}
		if (palabras[i]=='f')
		{
			f+=1;
		}
		if (palabras[i]=='g')
		{
			g+=1;
		}
		if (palabras[i]=='h')
		{
			h+=1;
		}
		if (palabras[i]=='i')
		{
			i+=1;
		}
		if (palabras[i]=='j')
		{
			j+=1;
		}
		if (palabras[i]=='k')
		{
			k+=1;
		}
		if (palabras[i]=='l')
		{
			l+=1;
		}
		if (palabras[i]=='m')
		{
			m+=1;
		}
		if (palabras[i]=='n')
		{
			n+=1;
		}
		if (palabras[i]=='o')
		{
			o+=1;
		}
		if (palabras[i]=='p')
		{
			p+=1;
		}
		if (palabras[i]=='q')
		{
			q+=1;
		}
		if (palabras[i]=='r')
		{
			r+=1;
		}
		if (palabras[i]=='s')
		{
			s+=1;
		}
		if (palabras[i]=='t')
		{
			t+=1;
		}
		if (palabras[i]=='u')
		{
			v+=1;
		}
		if (palabras[i]=='v')
		{
			v+=1;
		}
		if (palabras[i]=='w')
		{
			w+=1;
		}
		if (palabras[i]=='x')
		{
			x+=1;
		}
		if (palabras[i]=='y')
		{
			y+=1;
		}
		if (palabras[i]=='z')
		{
			z+=1;
		}
	}
	cout<<"Uso de letras:"<<endl;
	cout<<"a usos:"<<a<<endl;
	cout<<"b usos:"<<b<<endl;
	cout<<"c usos:"<<c<<endl;
	cout<<"d usos:"<<d<<endl;
	cout<<"e usos:"<<e<<endl;
	cout<<"f usos:"<<f<<endl;
	cout<<"g usos:"<<g<<endl;
	cout<<"h usos:"<<h<<endl;
	cout<<"i usos:"<<i<<endl;
	cout<<"j usos:"<<j<<endl;
	cout<<"k usos:"<<k<<endl;
	cout<<"l usos:"<<l<<endl;
	cout<<"m usos:"<<m<<endl;
	cout<<"n usos:"<<n<<endl;
	cout<<"o usos:"<<o<<endl;
	cout<<"p usos:"<<p<<endl;
	cout<<"q usos:"<<q<<endl;
	cout<<"r usos:"<<r<<endl;
	cout<<"s usos:"<<s<<endl;
	cout<<"t usos:"<<t<<endl;
	cout<<"u usos:"<<u<<endl;
	cout<<"v usos:"<<v<<endl;
	cout<<"w usos:"<<w<<endl;
	cout<<"x usos:"<<x<<endl;
	cout<<"y usos:"<<y<<endl;
	cout<<"z usos:"<<z<<endl;
	
}

void morse(char* palabras){
	char a[2]={'.','-'},b[4]={'-','.','.','.'},c[4]={'-','.','-','.'},d[3]={'-','.','.'},e[1]={'.'},f[4]={'.','.','-','.'},g[3]={'-','-','.'},h[4]={'.','.','.','.'},i[2]={'.','.'},j[4]={'.','-','-','-'},k[3]={'-','.','-'},l[4]={'.','-','.','.'},m[2]={'-','-'},n[2]={'-','.'},o[3]={'-','-','-'},p[4]={'.','-','-','.'},q[4]={'-','-','.','-'},r[3]={'.','-','.'},s[3]={'.','.','.'},t[1]={'-'},u[3]={'.','.','-'},v[4]={'.','.','.','v'},w[3]={'.','-','-'},x[4]={'-','.','.','-'},y[4]={'-','.','-','-'},z[4]={'-','-','.','.'};
	int inicio=0,final;
	int tama=strlen(palabras);
	for (int op = 0; op < tama; ++op)
	{
		if(palabras[op]=='&'){
			final=op;
			char letr[final-inicio];
			int contador=0;
			for (int oj = final; oj >inicio; --oj)
			{
				letr[contador]=palabras[oj];
				contador+=1;
			}
			cout<<letr;
		if (letr==a)
		{
		 	cout<<"a";
		}
		if (letr==b)
		{
		 	cout<<"b";
		}
		if (letr==c)
		{
			cout<<"c";
		}
		if (letr==d)
		{
			cout<<"d";
		}
		if (letr==e)
		{
			cout<<"e";
		}
		if (letr==f)
		{
			cout<<"f";
		}
		if (letr==g)
		{
			cout<<"g";
		}
		if (letr==h)
		{
			cout<<"h";
		}
		if (letr==i)
		{
			cout<<"i";
		}
		if (letr==j)
		{
			cout<<"j";
		}
		if (letr==k)
		{
			cout<<"k";
		}
		if (letr==l)
		{
			cout<<"l";
		}
		if (letr==m)
		{
			cout<<"m";
		}
		if (letr==n)
		{
			cout<<"n";
		}
		if (letr==o)
		{
			cout<<"o";
		}
		if (letr==p)
		{
			cout<<"p";
		}
		if (letr==q)
		{
			cout<<"q";
		}
		if (letr==r)
		{
			cout<<"r";
		}
		if (letr==s)
		{
			cout<<"s";
		}
		if (letr==t)
		{
			cout<<"t";
		}
		if (letr==u)
		{
			cout<<"u";
		}
		if (letr==v)
		{
			cout<<"v";
		}
		if (letr==w)
		{
			cout<<"w";
		}
		if (letr==x)
		{
			cout<<"x";
		}
		if (letr==y)
		{
			cout<<"y";
		}
		if (letr==z)
		{
			cout<<"z";
		}
		}
	}
	cout<<endl;
}