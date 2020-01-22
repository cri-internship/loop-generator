#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(960, 150, 250, "ones");
	double *B = create_one_dim_double(200, "ones");

	for (int b = 5; b < 150; b++)
	  for (int a = 5; a < 200; a++)
	  {
	    
	     A[a][b][a]=A[a][b-5][a-4]-0.21;
	    
	     A[a][b][a]=A[a-1][b-5][a-5]/0.917;
	    
	     double var_a=B[a]-0.867;
	     B[a]=0.318;
	    
	     A[a][b][a]=A[a][b][a]*B[a];
	     B[a]=A[a][b][a+2]-0.114;
	  }

    return 0;
}