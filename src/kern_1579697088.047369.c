#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(180, "random");
	double ***B = create_three_dim_double(600, 500, 790, "random");

	for (int b = 3; b < 500; b++)
	  for (int a = 4; a < 177; a++)
	  {
	    
	     A[a]=A[a-2]*B[a][b][a];
	    
	     B[a][b][a]=B[a-4][b-3][a-1]*A[a];
	    
	     A[a]=A[a+3]+0.62;
	    
	     A[a]=0.884;
	    
	     A[a]=A[a+1]-B[a][b][a];
	  }

    return 0;
}