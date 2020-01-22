#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(110, 940, 180, "random");
	double ***B = create_three_dim_double(20, 500, 400, "random");
	double **C = create_two_dim_double(820, 890, "random");

	for (int b = 5; b < 500; b++)
	  for (int a = 5; a < 20; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-4][a-1]-A[a][b][a]+C[a][b];
	    
	     B[a][b][a]=B[a-2][b-3][a-1]+0.31;
	    
	     double var_a=A[a][b][a]/0.3;
	     double var_b=A[a-5][b-4][a-4]-0.258;
	  }

    return 0;
}