#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(540, "random");
	double *B = create_one_dim_double(900, "random");
	double ***C = create_three_dim_double(690, 550, 30, "random");

	for (int b = 4; b < 535; b++)
	  for (int a = 4; a < 535; a++)
	  {
	    
	     A[a]=A[a-4]+0.495;
	    
	     A[a]=0.949;
	    
	     A[a]=A[a]-B[a]*C[a][b][a];
	     B[a]=A[a+2]/C[a][b][a]*B[a];
	  }

    return 0;
}