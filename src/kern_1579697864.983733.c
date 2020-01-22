#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(870, "ones");
	double **D = create_two_dim_double(900, 510, "ones");
	double ***C = create_three_dim_double(1000, 950, 230, "ones");
	double *A = create_one_dim_double(30, "ones");

	for (int b = 5; b < 510; b++)
	  for (int a = 2; a < 30; a++)
	  {
	    
	     D[a][b]=D[a-1][b-5]*0.029;
	    
	     C[a][b][a]=C[a+3][b+1][a+5]+D[a][b]/B[a];
	    
	     A[a]=C[a][b][a];
	     A[a]=0.748;
	    
	     C[a][b][a]=A[a];
	    
	     double var_a=D[a][b]-0.1;
	     double var_b=D[a-2][b]+0.375;
	  }

    return 0;
}