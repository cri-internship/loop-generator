#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(750, 750, 1000, "ones");
	double ***D = create_three_dim_double(970, 360, 810, "ones");
	double ***A = create_three_dim_double(630, 990, 300, "ones");
	double **C = create_two_dim_double(100, 890, "ones");

	for (int c = 1; c < 300; c++)
	  for (int b = 1; b < 889; b++)
	    for (int a = 3; a < 95; a++)
	    {
	      
	      double var_a=C[a][b]*0.128;
	      double var_b=C[a+5][b+1]+0.697;
	      
	      double var_c=A[a][b][c]/0.567;
	      double var_d=A[a-3][b-1][c-1]-0.26;
	    }

    return 0;
}