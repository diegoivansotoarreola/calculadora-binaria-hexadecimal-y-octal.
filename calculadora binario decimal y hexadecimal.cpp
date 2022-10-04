#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

using namespace std;

void proceso();
void octal(int n);
void hexadecimal(int n);
void finalizar();
int main()
{
    proceso();
    finalizar();
	return 0;
}


void proceso(){
	int bin,j=0,k,n_tem,n_temp=0,n_temp1=0,n;
    cout<<"ingrese un numero: "<<endl;cin>>n;
	cout<<"\nEn binario: "<<endl<<endl;
	for(bin=1;bin<=n;bin*=2)
		j=bin;
	for(j=bin;j>=1;j=(bin/=2)){
		for(j=bin;j>=1;j=(bin/=2))
		{
			n_tem=n;
			k=n_temp;
			n_temp=n_tem%j;
			if(n_tem>=j){
			n_temp1=k/j;
			cout<<n_temp1;
			}
 
		}
 
	}
    cout<<endl;
    octal(n);
   
}


void octal(int n){
	
int bin,j=0,k,n_tem,n_temp=0,n_temp1=0;
cout<<"\nEn Octal: "<<endl<<endl;
	for(bin=1;bin<=n;bin*=8)
		j=bin;
	for(j=bin;j>=1;j=(bin/=8)){
		for(j=bin;j>=1;j=(bin/=8))
		{
			n_tem=n;
			k=n_temp;
			n_temp=n_tem%j;
			if(n_tem>=j){
			n_temp1=k/j;
			cout<<n_temp1;
			}
 
		}
	cout<<endl;
	hexadecimal(n);
}
}

void hexadecimal(int n){
	int bin,j=0,k,n_tem,n_temp=0,n_temp1=0;
	cout<<"\nEn Hexadecimal: "<<endl<<endl;
		for(bin=1;bin<=n;bin*=16)
		j=bin;
    for(j=bin;j>=1;j=(bin/=16)){
        for(j=bin;j>=1;j=(bin/=16))
		{
			n_tem=n;
			k=n_temp;
			n_temp=n_tem%j;
 
			if(n_tem>=j){
			n_temp1=k/j;
            
			if(n_temp1==10){
				n_temp1='A';
				printf("%c",n_temp1);
			}
 
			if(n_temp1==11){
				n_temp1='B';
				printf("%c",n_temp1);
			}
 
 
			if(n_temp1==12){
				n_temp1='C';
					printf("%c",n_temp1);
			}
 
 
			if(n_temp1==13){
				n_temp1='D';
				printf("%c",n_temp1);
			}
 
			if(n_temp1==14){
				n_temp1='E';
				printf("%c",n_temp1);
			}
 
 
 
			if(n_temp1==15){
				n_temp1='F';
				printf("%c",n_temp1);
			}
			else if(n_temp1>=0 && n_temp1<=9)
 
					cout<<n_temp1;
					}
				}
			cout<<endl;
        }
}

void finalizar(){
	
	int opc;
	bool opc2=false;
	do{

        cout<<"\nDeseas repetir el programa? SI=1   NO=2"<<endl;cin>>opc;

		if(opc==1){
			
			system("cls");
			main();
			
		}else if(opc==2){
			system("cls");
			cout<<"Hasta luego......."<<endl;
			exit(0);
		}
		else{
			system("cls");
			cout<<"Esta opcion no existe "<<endl;
			opc2=true;
			
		}
	}while(opc2==true);
}