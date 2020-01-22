#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(660, 150, 80, "random");
	double *B = create_one_dim_double(480, "random");

	for (int b = 4; b < 150; b++)
	  for (int a = 2; a < 477; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-4][a-1]+B[a];
	    
	     B[a]=B[a+3]+A[a][b][a];
	  }

    return 0;
}