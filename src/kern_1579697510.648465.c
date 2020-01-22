#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(270, 880, "random");
	double **C = create_two_dim_double(720, 510, "random");
	double *B = create_one_dim_double(30, "random");
	double *D = create_one_dim_double(900, "random");

	for (int d = 4; d < 510; d++)
	  for (int c = 1; c < 30; c++)
	    for (int b = 1; b < 30; b++)
	      for (int a = 1; a < 30; a++)
	      {
	        
	       C[a][b]=D[a];
	       A[a][b]=C[a][b]+0.206-A[a][b]/D[a];
	        
	       D[a]=D[a+1]/C[a][b]*A[a][b];
	        
	       D[a]=C[a][b]*A[a][b]+D[a]-B[a];
	       C[a][b]=C[a-1][b]-0.498;
	        
	       B[a]=B[a]/C[a][b]+D[a]*A[a][b];
	        
	       double var_b=C[a][b]*0.029;
	       double var_c=C[a][b-4]-0.36;
	      }

    return 0;
}