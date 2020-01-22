#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(630, "zeros");
	double ***C = create_three_dim_double(620, 730, 540, "zeros");
	double *B = create_one_dim_double(470, "zeros");
	double *D = create_one_dim_double(200, "zeros");

	for (int b = 3; b < 730; b++)
	  for (int a = 3; a < 466; a++)
	  {
	    
	     C[a][b][a]=C[a-3][b-3][a]+0.689;
	    
	     A[a]=B[a]/C[a][b][a]-A[a]+D[a];
	     C[a][b][a]=B[a-1]-0.217;
	    
	     double var_a=B[a]*0.994;
	     double var_b=B[a+4]-0.613;
	  }

    return 0;
}