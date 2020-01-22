#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(630, 880, "zeros");
	int **A = create_two_dim_int(190, 540, "zeros");

	for (int c = 3; c < 538; c++)
	  for (int b = 2; b < 186; b++)
	    for (int a = 2; a < 186; a++)
	    {
	      
	      B[a][b]=B[a][b]-A[a][b];
	      A[a][b]=B[a-2][b-3]+A[a][b];
	      
	      int var_a=A[a][b]*14;
	      int var_b=A[a+4][b+2]/31;
	    }

    return 0;
}