#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(790, 300, 990, "random");
	double *A = create_one_dim_double(240, "random");

	for (int b = 1; b < 298; b++)
	  for (int a = 4; a < 235; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-1][a-2]-0.516;
	    
	     B[a][b][a]=B[a+4][b][a+1]/0.574;
	    
	     A[a]=B[a][b][a];
	     A[a+5]=B[a][b][a];
	    
	     A[a]=0.255;
	    
	     double var_a=A[a]+0.539;
	     double var_b=A[a]*0.752;
	    
	     double var_c=B[a][b][a]-0.95;
	     double var_d=B[a+1][b+2][a]/0.921;
	  }

    return 0;
}