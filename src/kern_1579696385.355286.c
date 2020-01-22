#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(340, 330, 520, "ones");
	double *B = create_one_dim_double(240, "ones");
	double **C = create_two_dim_double(200, 550, "ones");
	double **D = create_two_dim_double(170, 320, "ones");

	for (int d = 0; d < 319; d++)
	  for (int c = 0; c < 166; c++)
	    for (int b = 0; b < 166; b++)
	      for (int a = 0; a < 166; a++)
	      {
	        
	       D[a][b]=D[a+4][b+1]+0.785;
	      }

    return 0;
}