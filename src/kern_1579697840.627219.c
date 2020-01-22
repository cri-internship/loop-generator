#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(840, 890, "zeros");
	double *B = create_one_dim_double(520, "zeros");

	for (int c = 4; c < 889; c++)
	  for (int b = 4; b < 520; b++)
	    for (int a = 4; a < 520; a++)
	    {
	      
	      B[a]=B[a-4]*0.325;
	      
	      A[a][b]=A[a][b-2]*0.392;
	      
	      A[a][b]=A[a+2][b+1]-0.867;
	      
	      A[a][b]=A[a][b]-B[a];
	      B[a]=A[a-4][b]-B[a];
	      
	      double var_a=A[a][b]+0.863;
	    }

    return 0;
}