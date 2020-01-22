#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(40, "ones");
	double **C = create_two_dim_double(260, 340, "ones");
	double ***B = create_three_dim_double(350, 960, 880, "ones");
	double ***A = create_three_dim_double(780, 10, 830, "ones");

	for (int b = 0; b < 6; b++)
	  for (int a = 1; a < 35; a++)
	  {
	    
	     D[a]=D[a-1]-0.868;
	    
	     D[a]=D[a+3]*A[a][b][a];
	    
	     B[a][b][a]=B[a+5][b+4][a+5]/0.206-D[a];
	    
	     A[a][b][a]=0.599;
	     A[a+3][b+4][a+4]=0.652;
	    
	     double var_a=D[a]+0.541;
	     double var_b=D[a+5]-0.026;
	  }

    return 0;
}