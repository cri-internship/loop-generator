#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(530, "zeros");
	int ***E = create_three_dim_int(890, 580, 160, "zeros");
	int *D = create_one_dim_int(210, "zeros");
	int ***B = create_three_dim_int(850, 750, 890, "zeros");
	int **C = create_two_dim_int(70, 10, "zeros");

	for (int d = 2; d < 890; d++)
	  for (int c = 0; c < 750; c++)
	    for (int b = 1; b < 206; b++)
	      for (int a = 1; a < 206; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b][c-2]*D[a];
	        
	       D[a]=D[a+4]+B[a][b][c]*C[a][b]/E[a][b][c];
	        
	       int var_a=A[a]/3;
	       A[a]=35;
	      }

    return 0;
}