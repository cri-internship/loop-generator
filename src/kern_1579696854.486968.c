#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(810, 420, "ones");
	double **B = create_two_dim_double(390, 150, "ones");

	for (int b = 4; b < 150; b++)
	  for (int a = 5; a < 390; a++)
	  {
	    
	     A[a][b]=B[a][b];
	     A[a][b]=B[a][b];
	    
	     B[a][b]=0.119;
	     B[a-5][b-4]=0.677;
	    
	     double var_a=A[a][b]-0.001;
	     double var_b=A[a-3][b-4]*0.401;
	  }

    return 0;
}