#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(30, 840, "ones");
	double ***B = create_three_dim_double(80, 380, 80, "ones");
	double *A = create_one_dim_double(700, "ones");
	double **D = create_two_dim_double(630, 860, "ones");

	for (int b = 3; b < 835; b++)
	  for (int a = 3; a < 25; a++)
	  {
	    
	     A[a]=0.768;
	     float  var_a=A[a]-0.517;
	    
	     C[a][b]=C[a-3][b-3]*A[a]-D[a][b]+B[a][b][a];
	    
	     C[a][b]=C[a+5][b+4]-D[a][b];
	    
	     double var_b=D[a][b]/0.994;
	     D[a][b]=0.128;
	    
	     double var_c=D[a][b]*0.363;
	     double var_d=D[a+4][b+3]-0.973;
	  }

    return 0;
}