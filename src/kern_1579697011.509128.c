#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(510, "zeros");
	double *C = create_one_dim_double(300, "zeros");
	double **A = create_two_dim_double(810, 930, "zeros");

	for (int b = 3; b < 930; b++)
	  for (int a = 5; a < 295; a++)
	  {
	    
	     A[a][b]=A[a-2][b-3]-0.498;
	    
	     B[a]=B[a-1]-0.944;
	    
	     B[a]=0.817;
	    
	     C[a]=C[a]-B[a];
	     A[a][b]=C[a+5]*0.683;
	    
	     double var_a=A[a][b]-0.865;
	     double var_b=A[a-5][b-3]+0.504;
	  }

    return 0;
}