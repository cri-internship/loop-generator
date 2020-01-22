#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(230, "zeros");
	double ***A = create_three_dim_double(80, 520, 190, "zeros");

	for (int b = 0; b < 518; b++)
	  for (int a = 0; a < 75; a++)
	  {
	    
	     B[a]=A[a][b][a]+B[a];
	     A[a][b][a]=A[a+3][b+2][a+5]+B[a];
	  }

    return 0;
}