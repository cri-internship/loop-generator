#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(430, "random");
	double ***D = create_three_dim_double(750, 950, 440, "random");
	double **B = create_two_dim_double(530, 700, "random");
	double ***A = create_three_dim_double(610, 520, 950, "random");

	for (int d = 3; d < 700; d++)
	  for (int c = 4; c < 530; c++)
	    for (int b = 4; b < 530; b++)
	      for (int a = 4; a < 530; a++)
	      {
	        
	       B[a][b]=0.034;
	       B[a-4][b-3]=0.608;
	      }

    return 0;
}