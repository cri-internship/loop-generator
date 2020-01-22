#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(210, 190, 940, "random");
	double *B = create_one_dim_double(620, "random");
	double ***C = create_three_dim_double(70, 130, 10, "random");

	for (int b = 3; b < 130; b++)
	  for (int a = 5; a < 70; a++)
	  {
	    
	     B[a]=A[a][b][a]+C[a][b][a];
	     B[a-2]=0.176;
	    
	     double var_a=C[a][b][a]-0.489;
	     double var_b=C[a-5][b-3][a]-0.194;
	  }

    return 0;
}