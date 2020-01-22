#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(930, 530, "random");
	int **A = create_two_dim_int(910, 640, "random");
	int **D = create_two_dim_int(720, 350, "random");
	int ***B = create_three_dim_int(100, 590, 940, "random");
	int **C = create_two_dim_int(610, 210, "random");

	for (int d = 0; d < 936; d++)
	  for (int c = 5; c < 205; c++)
	    for (int b = 5; b < 100; b++)
	      for (int a = 5; a < 100; a++)
	      {
	        
	       E[a][b]=23;
	       float  var_a=E[a][b]/17;
	        
	       C[a][b]=C[a][b-1]+D[a][b]/E[a][b];
	        
	       B[a][b][c]=A[a][b]*C[a][b]/A[a][b];
	       B[a][b+4][c+4]=D[a][b];
	        
	       D[a][b]=43;
	       D[a-5][b-1]=3;
	        
	       int var_b=C[a][b]/22;
	       int var_c=C[a+3][b+5]*33;
	        
	       E[a][b]=E[a][b]*B[a][b][c]/B[a][b][c];
	       C[a][b]=E[a-3][b-5]+D[a][b]/35-B[a][b][c];
	      }

    return 0;
}