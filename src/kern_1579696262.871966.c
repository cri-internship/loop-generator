#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(980, 740, 930, "ones");
	float **B = create_two_dim_float(900, 780, "ones");

	for (int c = 0; c < 929; c++)
	  for (int b = 0; b < 739; b++)
	    for (int a = 0; a < 978; a++)
	    {
	      
	      A[a][b][c]=A[a][b][c]-B[a][b];
	      B[a][b]=A[a+2][b+1][c+1]/B[a][b];
	    }

    return 0;
}