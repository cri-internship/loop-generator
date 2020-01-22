#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(890, 550, "random");
	double **B = create_two_dim_double(270, 910, "random");
	double **C = create_two_dim_double(730, 370, "random");
	double *D = create_one_dim_double(450, "random");

	for (int d = 3; d < 907; d++)
	  for (int c = 3; c < 265; c++)
	    for (int b = 3; b < 265; b++)
	      for (int a = 3; a < 265; a++)
	      {
	        
	       B[a][b]=B[a][b-3]-0.534;
	        
	       B[a][b]=B[a-3][b]+C[a][b]/A[a][b]*0.807;
	        
	       D[a]=D[a+1]*B[a][b]-B[a][b]+C[a][b];
	        
	       double var_a=B[a][b]/0.676;
	       double var_b=B[a+2][b+1]/0.133;
	      }

    return 0;
}