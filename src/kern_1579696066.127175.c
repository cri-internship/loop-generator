#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(760, "ones");
	double **C = create_two_dim_double(20, 20, "ones");
	double **B = create_two_dim_double(160, 210, "ones");
	double **A = create_two_dim_double(570, 290, "ones");

	for (int c = 4; c < 210; c++)
	  for (int b = 5; b < 160; b++)
	    for (int a = 5; a < 160; a++)
	    {
	      
	      B[a][b]=B[a-2][b-3]-0.548;
	      
	      B[a][b]=B[a-4][b-4]*C[a][b];
	      
	      A[a][b]=A[a+3][b+5]/0.376;
	      
	      A[a][b]=D[a]*0.656;
	      C[a][b]=D[a-5]-A[a][b]+C[a][b]*B[a][b];
	      
	      double var_a=A[a][b]-0.094;
	      double var_b=A[a-2][b-4]*0.967;
	    }

    return 0;
}