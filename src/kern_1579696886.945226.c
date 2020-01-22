#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(580, 590, 710, "random");
	double *A = create_one_dim_double(560, "random");
	double ***B = create_three_dim_double(830, 580, 610, "random");

	for (int b = 1; b < 577; b++)
	  for (int a = 4; a < 575; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-1][a-4]-0.878;
	    
	     C[a][b][a]=C[a+5][b+3][a+1]/B[a][b][a];
	    
	     B[a][b][a]=0.636;
	  }

    return 0;
}