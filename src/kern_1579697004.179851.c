#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(100, "ones");
	double ***B = create_three_dim_double(320, 190, 230, "ones");
	double **C = create_two_dim_double(260, 400, "ones");
	double **D = create_two_dim_double(530, 400, "ones");

	for (int b = 0; b < 399; b++)
	  for (int a = 4; a < 100; a++)
	  {
	    
	     D[a][b]=0.342;
	     float  var_a=D[a][b]*0.655;
	    
	     C[a][b]=C[a+5][b+1]*D[a][b]-B[a][b][a];
	    
	     double var_b=A[a]-0.2;
	     double var_c=A[a-2]-0.071;
	    
	     double var_d=A[a]-0.146;
	     double var_e=A[a-4]-0.092;
	  }

    return 0;
}