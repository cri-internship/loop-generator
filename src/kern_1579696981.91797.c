#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(850, 660, "random");
	double **A = create_two_dim_double(620, 860, "random");
	double ***B = create_three_dim_double(1000, 580, 920, "random");

	for (int b = 3; b < 578; b++)
	  for (int a = 4; a < 616; a++)
	  {
	    
	     B[a][b][a]=B[a][b-1][a-2]+C[a][b]/A[a][b];
	    
	     C[a][b]=C[a][b-2]*0.266;
	    
	     A[a][b]=A[a][b-2]-B[a][b][a]/0.668;
	    
	     A[a][b]=A[a+2][b+3]-0.713;
	    
	     B[a][b][a]=B[a+2][b+2][a+1]/C[a][b]+A[a][b];
	    
	     A[a][b]=A[a+4][b+2]/C[a][b];
	    
	     double var_a=B[a][b][a]/0.474;
	     double var_b=B[a-4][b-3][a-1]*0.519;
	  }

    return 0;
}