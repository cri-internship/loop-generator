#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(50, 670, 690, "random");
	double ***A = create_three_dim_double(110, 410, 880, "random");
	double **E = create_two_dim_double(70, 800, "random");
	double *B = create_one_dim_double(240, "random");
	double ***D = create_three_dim_double(720, 270, 320, "random");

	for (int d = 5; d < 240; d++)
	  for (int c = 5; c < 240; c++)
	    for (int b = 5; b < 240; b++)
	      for (int a = 5; a < 240; a++)
	      {
	        
	       B[a]=B[a-5]*0.81;
	      }

    return 0;
}