#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(960, 900, 220, "ones");
	double *B = create_one_dim_double(550, "ones");

	for (int c = 4; c < 218; c++)
	  for (int b = 4; b < 895; b++)
	    for (int a = 3; a < 547; a++)
	    {
	      
	      B[a]=B[a+3]*0.119;
	      
	      B[a]=B[a+2]/0.762;
	      
	      A[a][b][c]=0.513;
	      A[a+3][b+5][c+2]=B[a];
	      
	      A[a][b][c]=0.279;
	      
	      double var_a=A[a][b][c]/0.637;
	      double var_b=A[a-3][b-3][c-4]*0.331;
	      
	      double var_c=B[a]*0.605;
	      double var_d=B[a-2]-0.309;
	    }

    return 0;
}