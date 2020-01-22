#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(760, 90, "ones");
	double ***A = create_three_dim_double(670, 590, 780, "ones");
	double *B = create_one_dim_double(120, "ones");

	for (int b = 5; b < 88; b++)
	  for (int a = 5; a < 120; a++)
	  {
	    
	     B[a]=B[a-1]+0.106;
	    
	     C[a][b]=0.484;
	     C[a-5][b-4]=0.495;
	    
	     double var_a=C[a][b]*0.646;
	     double var_b=C[a+3][b+2]+0.303;
	    
	     double var_c=C[a][b]*0.95;
	     double var_d=C[a-4][b-5]*0.317;
	  }

    return 0;
}