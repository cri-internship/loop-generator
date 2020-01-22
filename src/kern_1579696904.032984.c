#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(110, 560, 600, "random");
	double *A = create_one_dim_double(30, "random");

	for (int b = 4; b < 560; b++)
	  for (int a = 5; a < 27; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-3][a-2]*0.635;
	    
	     A[a]=A[a+3]-B[a][b][a];
	    
	     A[a]=B[a][b][a];
	    
	     A[a]=A[a]+B[a][b][a];
	     B[a][b][a]=A[a-5]/B[a][b][a];
	    
	     double var_a=B[a][b][a]-0.731;
	     double var_b=B[a-3][b-4][a-1]*0.832;
	    
	     B[a][b][a]=A[a]*0.966;
	  }

    return 0;
}