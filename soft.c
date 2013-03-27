#include<stdio.h>
#include<stdlib.h>


void LlenarMatriz0(char Aje[][8], int f, int c)
{
    
	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
             if( i==2 && j ==2 )  
             {
                 Aje[2][2] = 'P';
                 }
              else{   
	         Aje[i][j] = k; } 
	         
	          if( i==2 && j ==5 )  
             {
                 Aje[2][5] = 'P';
                 }    
                 
             if( i==5 && j ==2 )  
             {
                 Aje[5][2] = 'P';
                 }    
          
                 
             if( i==5 && j ==5 )  
             {
                 Aje[5][5] = 'P';
                 }    
              
	            if(i==7 && j==0)
	         {
                Aje[7][0] = 'C';     }
                    
		   }
		   
    }
}

void ImprimirMatriz0(char Aje[][8], int f, int c)
{
	int i,j;
	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
		       printf("[ %c ]",Aje[i][j]);
		   }
		 printf("\n");  
	}
}

void moverC1(char Aje[][8], int f, int c)
{
     
    
	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
             if( i==7 && j ==1 )  
             {
                 Aje[7][1] = 'X';
             }
              else{   
	         Aje[i][j] = k; } 
	         
	          if( i==7 && j ==2 )  
             {
                 Aje[7][2] = 'X';
             }    
                 
             if( i==6 && j ==2 )  
             {
                 Aje[6][2] = 'C';
                 }    
              if(i==7 && j==0)
	         {
                Aje[7][0] = 'C';     }  
             if( i==2 && j ==2 )  
             {
                 Aje[2][2] = 'P';
                 } 
	         
	          if( i==2 && j ==5 )  
             {
                 Aje[2][5] = 'P';
                 }    
                 
             if( i==5 && j ==2 )  
             {
                 Aje[5][2] = 'P';
             }    
          
                 
             if( i==5 && j ==5 )  
             {
                 Aje[5][5] = 'P';
             }
             
             
             
             if( i==5 && j ==2 )  
             {
                 Aje[5][2] = 'P';
             } 
          }
     }
}

void moverC2(char Aje[][8], int f, int c)
{
     
    
	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 //Movimiento 2
             
             if( i==6 && j ==1 )  
             {
                 Aje[6][1] = 'X';
             }       
             
             if( i==6 && j ==0 )  
             {
                 Aje[6][0] = 'X';
             }
          
             if( i==5 && j ==0 )  
             {
                 Aje[5][0] = 'C';
             } 
                  
		   }
		   
    }
}

void moverC3y5(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 3
             
             if( i==4 && j ==0 )  
             {
                 Aje[4][0] = 'X';
             }
             if( i==3 && j ==0 )  
             {
                 Aje[3][0] = 'X';
             }
             if( i==3 && j ==1 )  
             {
                 Aje[3][1] = 'C';
             }  
             
                    
		   }
		   
    }
}

void moverC4(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 4
             
             if( i==4 && j ==1 )  
             {
                 Aje[4][1] = 'X';
             }
             if( i==5 && j ==1 )  
             {
                 Aje[5][1] = 'X';
             }
             if( i==5 && j ==0 )  
             {
                 Aje[5][0] = 'C';
             }      
		   }
		   
    }
}

void moverC6(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 6
             
             if( i==2 && j ==1 )  
             {
                 Aje[2][1] = 'X';
             }
             if( i==1 && j ==1 )  
             {
                 Aje[1][1] = 'X';
             }
             if( i==1 && j ==0 )  
             {
                 Aje[1][0] = 'C';
             }  
                     
		   }
		   
    }
}

void moverC7(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 7
             
             if( i==2 && j ==0 )  
             {
                 Aje[2][0] = 'X';
             }
             if( i==3 && j ==0 )  
             {
                 Aje[3][0] = 'X';
             }
             if( i==3 && j ==1 )  
             {
                 Aje[3][1] = 'C';
             }  
                     
		   }
		   
    }
}

void moverC8(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 8
             
             if( i==3 && j ==2 )  
             {
                 Aje[3][2] = 'X';
             }
             if( i==3 && j ==3 )  
             {
                 Aje[3][3] = 'X';
             }
             if( i==2 && j ==3 )  
             {
                 Aje[2][3] = 'C';
             }  
                     
		   }
		   
    }
}

void moverC9(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 9
             
             if( i==1 && j ==3 )  
             {
                 Aje[1][3] = 'X';
             }
             if( i==0 && j ==3 )  
             {
                 Aje[0][3] = 'X';
             }
             if( i==0 && j ==2 )  
             {
                 Aje[0][2] = 'C';
             }  
                     
		   }	   
    }
}

void moverC10(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 10
             
             if( i==0 && j ==1 )  
             {
                 Aje[0][1] = 'X';
             }
             if( i==0 && j ==0 )  
             {
                 Aje[0][0] = 'X';
             }
             if( i==1 && j ==0 )  
             {
                 Aje[1][0] = 'C';
             }  
                     
		   }
		   
    }
}

void moverC11(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 11
             
             if( i==1 && j ==1 )  
             {
                 Aje[1][1] = 'X';
             }
             if( i==1 && j ==2 )  
             {
                 Aje[1][2] = 'X';
             }
             if( i==0 && j ==2 )  
             {
                 Aje[0][2] = 'C';
             }  
                     
		   }
		   
    }
}

void moverC12(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 12
             
             if( i==0 && j ==3 )  
             {
                 Aje[2][1] = 'X';
             }
             if( i==0 && j ==4 )  
             {
                 Aje[0][4] = 'X';
             }
             if( i==1 && j ==4 )  
             {
                 Aje[1][4] = 'C';
             }  
                     
		   }
    }
}

void moverC13(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 13
             
             if( i==1 && j ==5 )  
             {
                 Aje[1][5] = 'X';
             }
             if( i==1 && j ==6 )  
             {
                 Aje[1][6] = 'X';
             }
             if( i==0 && j ==6 )  
             {
                 Aje[0][6] = 'C';
             }  
                     
		   }
		   
    }
}

void moverC14(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 14
             
             if( i==0 && j ==5 )  
             {
                 Aje[0][5] = 'X';
             }
             if( i==0 && j ==4 )  
             {
                 Aje[0][4] = 'X';
             }
             if( i==1 && j ==4 )  
             {
                 Aje[1][4] = 'C';
             }  
                     
		   }
		   
    }
}

void moverC15(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 15
             
             if( i==2 && j ==4 )  
             {
                 Aje[2][4] = 'X';
             }
             if( i==3 && j ==4 )  
             {
                 Aje[3][4] = 'X';
             }
             if( i==3 && j ==5 )  
             {
                 Aje[3][5] = 'C';
             }  
                     
		   }
		   
    }
}

void moverC16(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 16
             
             if( i==3 && j ==6 )  
             {
                 Aje[3][6] = 'X';
             }
             if( i==3 && j ==7 )  
             {
                 Aje[3][7] = 'X';
             }
             if( i==2 && j ==7 )  
             {
                 Aje[2][7] = 'C';
             }  
                     
		   }
		   
    }
}

void moverC17(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 17
             
             if( i==1 && j ==7 )  
             {
                 Aje[1][7] = 'X';
             }
             if( i==0 && j ==7 )  
             {
                 Aje[0][7] = 'X';
             }
             if( i==0 && j ==6 )  
             {
                 Aje[0][6] = 'C';
             }  
                     
		   }
		   
    }
}

void moverC18(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 18
             
             if( i==1 && j ==6 )  
             {
                 Aje[1][6] = 'X';
             }
             if( i==2 && j ==6 )  
             {
                 Aje[2][6] = 'X';
             }
             if( i==2 && j ==7 )  
             {
                 Aje[2][7] = 'C';
             }  
                     
		   }
		   
    }
}

void moverC19(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 19
             
             if( i==3 && j ==7 )  
             {
                 Aje[3][7] = 'X';
             }
             if( i==4 && j ==7 )  
             {
                 Aje[4][7] = 'X';
             }
             if( i==2 && j ==7 )  
             {
                 Aje[2][7] = 'C';
             }  
                     
		   }
		   
    }
}

void moverC20y38(char Aje[][8], int f, int c)
{
   	int i,j,k=0,r=1;

	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
             //Movimiento 20
             
             if( i==4 && j ==5 )  
             {
                 Aje[4][5] = 'X';
             }
             if( i==4 && j ==4 )  
             {
                 Aje[4][4] = 'X';
             }
             if( i==5 && j ==4 )  
             {
                 Aje[5][4] = 'C';
             }  
                     
		   }
         }
}


void mostrarC(char Aje[][8], int f, int c)
{
	int i,j;
	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		   {
                 
		       printf("[ %c ]",Aje[i][j]);
		   }
		 printf("\n");  
	}
printf("\n");  
}

int main(int argc, char *argv[])
{
   int f=8,c=8,o;
	char Aje[8][8];
	
     
   LlenarMatriz0(Aje,8,8);
    ImprimirMatriz0(Aje,8,8);

    printf("\n");  
    printf("desea comenzar el juego? (0=no o 1=si)");
     printf("\n"); 
    scanf("%d",&o);
    printf("\n");  
    if(o==1)
    {
    printf("Movimiento uno");
    printf("\n"); 
    moverC1(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento dos");
    printf("\n");
    moverC2(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento tres");
    printf("\n");
    moverC3y5(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento cuatro");
    printf("\n");
    moverC4(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento cinco");
    printf("\n");
    moverC3y5(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento seis");
    printf("\n");
    moverC6(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento siete");
    printf("\n");
    moverC7(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento ocho");
    printf("\n");
    moverC8(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento nueve");
    printf("\n");
    moverC9(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento diez");
    printf("\n");
    moverC10(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento once");
    printf("\n");
    moverC11(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento doce");
    printf("\n");
    moverC12(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento trece");
    printf("\n");
    moverC13(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento catorce");
    printf("\n");
    moverC14(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento quince");
    printf("\n");
    moverC15(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento dieciseis");
    printf("\n");
    moverC16(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento diecisiete");
    printf("\n");
    moverC17(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento dieciocho");
    printf("\n");
    moverC18(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento diecinueve");
    printf("\n");
    moverC19(Aje,8,8);
    mostrarC(Aje,8,8);
    printf("Movimiento veinte");
    printf("\n");
    moverC20y38(Aje,8,8);
    mostrarC(Aje,8,8);  
    system("pause");  
    }
  
  if(o==0)
  {
    printf("Hasta pronto");
    printf("\n");
    printf("\n");
   }
  
}

