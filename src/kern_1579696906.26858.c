#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(570, 40, "ones");
	double ***B = create_three_dim_double(840, 10, 520, "ones");
	double **A = create_two_dim_double(460, 770, "ones");
	double **E = create_two_dim_double(380, 650, "ones");
	double **C = create_two_dim_double(330, 70, "ones");

	for (int d = 0; d < 520; d++)
	  for (int c = 0; c < 9; c++)
	    for (int b = 0; b < 839; b++)
	      for (int a = 0; a < 839; a++)
	      {
	        
	       double var_a=B[a][b][c]-0.345;
	       double var_b=B[a+1][b+1][c]*0.459;
	      }

    return 0;
}