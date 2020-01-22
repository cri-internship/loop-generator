#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(10, 920, 910, "zeros");
	double *B = create_one_dim_double(740, "zeros");

	for (int b = 0; b < 920; b++)
	  for (int a = 2; a < 10; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b][a-2]+B[a];
	    
	     B[a]=A[a][b][a];
	     B[a-1]=A[a][b][a];
	  }

    return 0;
}