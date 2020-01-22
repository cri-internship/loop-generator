#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(1000, 650, "zeros");
	double ***B = create_three_dim_double(470, 420, 480, "zeros");
	double **A = create_two_dim_double(580, 270, "zeros");

	for (int c = 0; c < 480; c++)
	  for (int b = 4; b < 270; b++)
	    for (int a = 5; a < 470; a++)
	    {
	      
	      A[a][b]=A[a][b-3]*B[a][b][c]+C[a][b];
	      
	      A[a][b]=A[a-5][b-1]/0.787;
	      
	      C[a][b]=C[a+5][b+4]/0.509;
	      
	      C[a][b]=A[a][b]/B[a][b][c];
	      
	      double var_a=C[a][b]*0.405;
	      double var_b=C[a-5][b-1]+0.199;
	      
	      double var_c=B[a][b][c]/0.634;
	      double var_d=B[a-5][b-4][c]*0.026;
	    }

    return 0;
}