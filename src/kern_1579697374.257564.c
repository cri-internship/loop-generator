#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(840, 70, 590, "random");
	double *B = create_one_dim_double(540, "random");

	for (int b = 3; b < 70; b++)
	  for (int a = 2; a < 538; a++)
	  {
	    
	     A[a][b][a]=A[a][b][a-2]+B[a];
	    
	     B[a]=B[a+2]/A[a][b][a];
	    
	     A[a][b][a]=A[a][b][a]*B[a];
	     B[a]=A[a-1][b-3][a]*B[a];
	  }

    return 0;
}