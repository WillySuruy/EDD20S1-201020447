/*
		*** USAC  ***
		EDD 'A'  TAREA 1
		CARNET: 201020447
*/

#include <iostream>
using namespace std;

int cx,cy;

int main(int argc, char const *argv[])
{
	int dim;

	cout<<"Ingrese la dimensión de una matriz cuadrada:  ";
	cin>>dim;
	cx=cy=dim;
	cout<<"\n dimension:"<<cx<<" X "<<cy<<endl;
	
	int matriz[cx][cy];
//llenar matriz
	
		for (int i = 0; i < cx; ++i)
		{
		for (int j = 0; j < cy; ++j)
		{
			if (i==0 || i==dim-1 || j==0 || j==dim-1)
			{
				matriz[i][j]=1;
			}else  matriz[i][j]=0;
		}//for j
		
		}//for i 
	

	//imprimir matriz
for (int i = 0; i < cx; ++i)
	{
		for (int j = 0; j < cy; ++j)
		{

			cout<<" "<<	matriz[i][j];
		}
		cout<<" "<<endl;
			}


	return 0;
}
