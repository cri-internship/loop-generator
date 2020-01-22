#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(520, "ones");
	double *B = create_one_dim_double(740, "ones");
	double *A = create_one_dim_double(940, "ones");
	double ***C = create_three_dim_double(450, 1000, 470, "ones");

	for (int d = 5; d < 470; d++)
	  for (int c = 2; c < 1000; c++)
	    for (int b = 1; b < 450; b++)
	      for (int a = 1; a < 450; a++)
	      {
	        
	       C[a][b][c]=C[a-1][b-2][c-4]-B[a]+A[a];
	        
	       B[a]=B[a+5]-0.909;
	        
	       D[a]=C[a][b][c]-B[a]+A[a]*D[a];
	       A[a]=C[a][b][c-5]/0.745+D[a];
	      }

    return 0;
}