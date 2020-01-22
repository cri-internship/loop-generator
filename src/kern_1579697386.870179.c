#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(80, "zeros");
	double **C = create_two_dim_double(940, 120, "zeros");
	double *A = create_one_dim_double(830, "zeros");
	double *D = create_one_dim_double(490, "zeros");

	for (int d = 5; d < 119; d++)
	  for (int c = 5; c < 490; c++)
	    for (int b = 5; b < 490; b++)
	      for (int a = 5; a < 490; a++)
	      {
	        
	       D[a]=D[a-4]-A[a]+B[a];
	        
	       C[a][b]=C[a-2][b-5]*D[a];
	        
	       C[a][b]=C[a+2][b+1]+0.472;
	        
	       D[a]=0.089;
	      }

    return 0;
}