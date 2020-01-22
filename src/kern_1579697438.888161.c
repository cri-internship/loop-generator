#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(690, 840, "ones");
	double **A = create_two_dim_double(660, 310, "ones");
	double *B = create_one_dim_double(310, "ones");
	double *D = create_one_dim_double(210, "ones");
	double *C = create_one_dim_double(180, "ones");

	for (int d = 5; d < 210; d++)
	  for (int c = 5; c < 210; c++)
	    for (int b = 5; b < 210; b++)
	      for (int a = 5; a < 210; a++)
	      {
	        
	       double var_a=B[a]-0.411;
	       B[a]=0.6;
	        
	       B[a]=B[a+4]*A[a][b]+C[a]/D[a]-E[a][b];
	        
	       D[a]=0.052;
	       D[a-4]=0.671;
	        
	       double var_b=B[a]-0.77;
	       double var_c=B[a-4]-0.356;
	        
	       A[a][b]=D[a]-B[a]/C[a];
	       B[a]=D[a-5]/E[a][b];
	      }

    return 0;
}