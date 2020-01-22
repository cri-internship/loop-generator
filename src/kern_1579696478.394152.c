#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(950, 570, "ones");
	double *D = create_one_dim_double(290, "ones");
	double ***A = create_three_dim_double(340, 320, 630, "ones");
	double *B = create_one_dim_double(890, "ones");

	for (int c = 5; c < 630; c++)
	  for (int b = 5; b < 320; b++)
	    for (int a = 3; a < 340; a++)
	    {
	      
	      C[a][b]=C[a-3][b-5]-0.862;
	      
	      A[a][b][c]=A[a-3][b-2][c-5]-B[a];
	      
	      B[a]=B[a+4]*0.873;
	    }

    return 0;
}