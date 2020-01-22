#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(150, 250, 770, "random");
	double **E = create_two_dim_double(840, 140, "random");
	double **C = create_two_dim_double(50, 570, "random");
	double ***D = create_three_dim_double(770, 830, 120, "random");
	double *B = create_one_dim_double(860, "random");

	for (int d = 5; d < 140; d++)
	  for (int c = 4; c < 840; c++)
	    for (int b = 4; b < 840; b++)
	      for (int a = 4; a < 840; a++)
	      {
	        
	       E[a][b]=E[a-1][b]*0.58;
	        
	       E[a][b]=E[a-4][b-5]-A[a][b][c];
	      }

    return 0;
}