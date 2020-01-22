#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(170, "zeros");
	int *A = create_one_dim_int(470, "zeros");
	int ***B = create_three_dim_int(930, 340, 40, "zeros");
	int **C = create_two_dim_int(890, 50, "zeros");

	for (int d = 1; d < 40; d++)
	  for (int c = 2; c < 337; c++)
	    for (int b = 5; b < 170; b++)
	      for (int a = 5; a < 170; a++)
	      {
	        
	       B[a][b][c]=B[a+5][b+3][c]+22;
	        
	       A[a]=43;
	       A[a-4]=3;
	        
	       B[a][b][c]=42;
	        
	       A[a]=D[a]*B[a][b][c]/C[a][b];
	        
	       int var_a=D[a]*44;
	       int var_b=D[a-4]-2;
	      }

    return 0;
}