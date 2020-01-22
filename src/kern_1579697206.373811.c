#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(310, 830, 210, "random");
	double ***C = create_three_dim_double(730, 810, 890, "random");
	double ***B = create_three_dim_double(380, 860, 140, "random");
	double ***A = create_three_dim_double(250, 890, 430, "random");
	double **D = create_two_dim_double(270, 10, "random");

	for (int d = 3; d < 140; d++)
	  for (int c = 4; c < 860; c++)
	    for (int b = 0; b < 380; b++)
	      for (int a = 0; a < 380; a++)
	      {
	        
	       double var_a=B[a][b][c]+0.868;
	       double var_b=B[a][b-4][c-3]-0.769;
	      }

    return 0;
}