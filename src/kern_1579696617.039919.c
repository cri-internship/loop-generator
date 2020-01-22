#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(770, 830, "random");
	double ***B = create_three_dim_double(180, 700, 720, "random");
	double ***C = create_three_dim_double(340, 650, 520, "random");

	for (int d = 0; d < 520; d++)
	  for (int c = 1; c < 650; c++)
	    for (int b = 2; b < 340; b++)
	      for (int a = 2; a < 340; a++)
	      {
	        
	       double var_a=C[a][b][c]*0.134;
	       double var_b=C[a-2][b-1][c]+0.972;
	      }

    return 0;
}