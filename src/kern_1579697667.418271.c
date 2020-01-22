#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(250, "random");
	double *E = create_one_dim_double(340, "random");
	double **C = create_two_dim_double(160, 930, "random");
	double *D = create_one_dim_double(570, "random");
	double *B = create_one_dim_double(360, "random");

	for (int c = 5; c < 930; c++)
	  for (int b = 5; b < 160; b++)
	    for (int a = 5; a < 160; a++)
	    {
	      
	      B[a]=B[a+3]/0.35;
	      
	      E[a]=E[a+1]+0.843;
	      
	      B[a]=0.876+D[a];
	      
	      B[a]=C[a][b]-0.08;
	      A[a]=C[a-5][b-5]-0.368/B[a];
	      
	      double var_a=D[a]/0.115;
	      double var_b=D[a+4]+0.518;
	    }

    return 0;
}