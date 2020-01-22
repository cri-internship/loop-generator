#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(350, "ones");
	double *D = create_one_dim_double(720, "ones");
	double **B = create_two_dim_double(930, 280, "ones");
	double **C = create_two_dim_double(120, 610, "ones");

	for (int d = 5; d < 276; d++)
	  for (int c = 5; c < 120; c++)
	    for (int b = 5; b < 120; b++)
	      for (int a = 5; a < 120; a++)
	      {
	        
	       B[a][b]=B[a][b-4]*0.076;
	        
	       C[a][b]=C[a-5][b-5]+0.707;
	        
	       A[a]=A[a+5]-0.53;
	        
	       B[a][b]=C[a][b]+A[a]*D[a];
	        
	       A[a]=B[a][b];
	        
	       C[a][b]=0.793;
	        
	       double var_a=B[a][b]+0.697;
	       double var_b=B[a+3][b+4]*0.724;
	      }

    return 0;
}