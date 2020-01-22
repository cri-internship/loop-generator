#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(690, 840, 420, "zeros");

	for (int c = 2; c < 420; c++)
	  for (int b = 5; b < 840; b++)
	    for (int a = 3; a < 690; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-5][c-2]/0.931;
	    }

    return 0;
}