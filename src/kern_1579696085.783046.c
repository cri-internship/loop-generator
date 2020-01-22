#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(560, "zeros");
	double **B = create_two_dim_double(580, 1000, "zeros");
	double **A = create_two_dim_double(550, 290, "zeros");
	double *C = create_one_dim_double(780, "zeros");

	for (int d = 3; d < 999; d++)
	  for (int c = 3; c < 558; c++)
	    for (int b = 3; b < 558; b++)
	      for (int a = 3; a < 558; a++)
	      {
	        
	       C[a]=C[a-2]-D[a]*B[a][b];
	        
	       double var_a=D[a]/0.394;
	       D[a]=0.611;
	        
	       D[a]=D[a+2]-C[a]+A[a][b]*A[a][b];
	        
	       C[a]=C[a+1]-0.788;
	        
	       B[a][b]=0.068;
	       B[a-2][b-3]=0.887;
	        
	       D[a]=D[a]-C[a]*B[a][b];
	       A[a][b]=D[a-3]-A[a][b]*C[a]/B[a][b];
	        
	       B[a][b]=B[a][b]*C[a]/D[a];
	       C[a]=B[a][b+1]*D[a]-C[a]+A[a][b];
	      }

    return 0;
}