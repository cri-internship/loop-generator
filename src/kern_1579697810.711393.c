#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(90, "zeros");
	double ***C = create_three_dim_double(60, 520, 410, "zeros");
	double *B = create_one_dim_double(130, "zeros");
	double *A = create_one_dim_double(420, "zeros");

	for (int b = 4; b < 520; b++)
	  for (int a = 4; a < 60; a++)
	  {
	    
	     A[a]=0.432;
	     float  var_a=A[a]-0.981;
	    
	     double var_b=B[a]+0.378;
	     B[a]=0.288;
	    
	     C[a][b][a]=A[a]+0.086*D[a];
	     C[a-3][b-4][a-4]=A[a]/D[a];
	    
	     double var_c=B[a]-0.488;
	     double var_d=B[a+2]-0.918;
	  }

    return 0;
}