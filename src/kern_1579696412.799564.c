#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(460, "ones");
	double **C = create_two_dim_double(850, 350, "ones");
	double *D = create_one_dim_double(60, "ones");
	double *B = create_one_dim_double(830, "ones");

	for (int d = 3; d < 60; d++)
	  for (int c = 3; c < 60; c++)
	    for (int b = 3; b < 60; b++)
	      for (int a = 3; a < 60; a++)
	      {
	        
	       A[a]=A[a-2]*B[a]+D[a]-C[a][b];
	        
	       D[a]=A[a]-0.607;
	       C[a][b]=D[a]-C[a][b]/B[a]*A[a];
	        
	       B[a]=B[a+4]/0.946;
	        
	       A[a]=A[a+5]+D[a]*B[a];
	        
	       double var_a=A[a]*0.902;
	       double var_b=A[a-3]-0.626;
	      }

    return 0;
}