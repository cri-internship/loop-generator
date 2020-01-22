#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(470, 830, "zeros");
	double **A = create_two_dim_double(370, 590, "zeros");
	double **B = create_two_dim_double(400, 530, "zeros");

	for (int c = 2; c < 530; c++)
	  for (int b = 0; b < 365; b++)
	    for (int a = 0; a < 365; a++)
	    {
	      
	      A[a][b]=0.479;
	      A[a+5][b]=C[a][b];
	      
	      double var_a=B[a][b]/0.952;
	      double var_b=B[a][b-2]*0.4;
	    }

    return 0;
}