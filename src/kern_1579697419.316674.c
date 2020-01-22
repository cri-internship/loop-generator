#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(80, "random");
	double **C = create_two_dim_double(440, 710, "random");
	double *A = create_one_dim_double(620, "random");

	for (int d = 5; d < 708; d++)
	  for (int c = 2; c < 78; c++)
	    for (int b = 2; b < 78; b++)
	      for (int a = 2; a < 78; a++)
	      {
	        
	       C[a][b]=C[a-2][b-1]/0.415;
	        
	       C[a][b]=C[a-2][b-5]-0.428;
	        
	       A[a]=A[a-1]/C[a][b];
	        
	       B[a]=B[a+2]*0.201;
	        
	       A[a]=A[a+5]+B[a]*B[a];
	        
	       B[a]=A[a]*C[a][b];
	      }

    return 0;
}