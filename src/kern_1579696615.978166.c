#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(980, "ones");
	double ***B = create_three_dim_double(90, 860, 730, "ones");

	for (int c = 0; c < 727; c++)
	  for (int b = 4; b < 856; b++)
	    for (int a = 5; a < 89; a++)
	    {
	      
	      A[a]=A[a+3]*0.593;
	      
	      B[a][b][c]=B[a][b+4][c+3]*A[a];
	      
	      A[a]=0.257;
	      
	      A[a]=B[a][b][c]*A[a];
	      B[a][b][c]=B[a+1][b+4][c+3]*0.41;
	      
	      double var_a=B[a][b][c]-0.702;
	      double var_b=B[a-1][b-4][c]+0.557;
	      
	      double var_c=A[a]/0.308;
	      double var_d=A[a-5]+0.2;
	    }

    return 0;
}