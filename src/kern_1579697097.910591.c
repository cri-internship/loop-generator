#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(790, 380, "random");
	int *A = create_one_dim_int(230, "random");

	for (int c = 0; c < 375; c++)
	  for (int b = 4; b < 226; b++)
	    for (int a = 4; a < 226; a++)
	    {
	      
	      A[a]=A[a-1]/2;
	      
	      A[a]=30;
	      
	      int var_a=B[a][b]-29;
	      int var_b=B[a+1][b+5]-1;
	      
	      A[a]=A[a]+B[a][b];
	      B[a][b]=A[a-4]*B[a][b];
	    }

    return 0;
}