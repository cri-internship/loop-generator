#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(910, 320, 840, "ones");
	double *C = create_one_dim_double(390, "ones");
	double **A = create_two_dim_double(620, 400, "ones");
	double *D = create_one_dim_double(700, "ones");
	double *E = create_one_dim_double(270, "ones");

	for (int b = 0; b < 396; b++)
	  for (int a = 1; a < 385; a++)
	  {
	    
	     A[a][b]=A[a-1][b]/B[a][b][a]+C[a];
	    
	     C[a]=0.023;
	     float  var_a=C[a]-0.361;
	    
	     C[a]=C[a+5]*D[a]/E[a]-A[a][b];
	    
	     A[a][b]=C[a]+0.669*D[a];
	  }

    return 0;
}