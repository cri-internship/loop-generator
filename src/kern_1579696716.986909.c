#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(190, 780, 860, "random");
	double **D = create_two_dim_double(1000, 340, "random");
	double **C = create_two_dim_double(870, 120, "random");
	double ***B = create_three_dim_double(950, 280, 240, "random");

	for (int b = 5; b < 120; b++)
	  for (int a = 0; a < 870; a++)
	  {
	    
	     C[a][b]=C[a][b-5]-0.608;
	    
	     double var_a=B[a][b][a]*0.357;
	     double var_b=B[a][b-5][a]*0.442;
	  }

    return 0;
}