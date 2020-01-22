#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(260, "random");
	double ***A = create_three_dim_double(680, 710, 510, "random");

	for (int c = 3; c < 509; c++)
	  for (int b = 4; b < 706; b++)
	    for (int a = 4; a < 260; a++)
	    {
	      
	      B[a]=B[a-2]/0.31;
	      
	      B[a]=B[a-4]*0.086;
	      
	      B[a]=B[a-1]+0.498;
	      
	      A[a][b][c]=A[a-1][b-4][c-3]*0.245;
	      
	      A[a][b][c]=A[a+1][b+4][c+1]*0.338;
	      
	      double var_a=A[a][b][c]/0.32;
	      double var_b=A[a][b-3][c-3]*0.205;
	      
	      double var_c=B[a]*0.432;
	      double var_d=B[a]+0.999;
	    }

    return 0;
}