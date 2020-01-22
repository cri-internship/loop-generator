#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(360, 580, 600, "zeros");
	double *A = create_one_dim_double(140, "zeros");

	for (int b = 0; b < 578; b++)
	  for (int a = 5; a < 135; a++)
	  {
	    
	     A[a]=A[a-5]+B[a][b][a];
	    
	     A[a]=A[a-3]+0.888;
	    
	     A[a]=B[a][b][a];
	    
	     A[a]=A[a+4]/0.397;
	    
	     B[a][b][a]=A[a];
	     B[a+4][b+2][a+4]=0.259;
	  }

    return 0;
}