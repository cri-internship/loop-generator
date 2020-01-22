#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(350, 180, 70, "ones");
	double **B = create_two_dim_double(560, 170, "ones");
	double ***C = create_three_dim_double(950, 530, 830, "ones");

	for (int c = 1; c < 826; c++)
	  for (int b = 3; b < 170; b++)
	    for (int a = 5; a < 560; a++)
	    {
	      
	      C[a][b][c]=0.706;
	      C[a-1][b-1][c-1]=0.028;
	      
	      C[a][b][c]=0.482;
	      
	      double var_a=B[a][b]/0.556;
	      double var_b=B[a-5][b-3]+0.021;
	    }

    return 0;
}