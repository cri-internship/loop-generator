#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(200, 670, "random");
	int **A = create_two_dim_int(270, 750, "random");

	for (int c = 2; c < 745; c++)
	  for (int b = 4; b < 269; b++)
	    for (int a = 4; a < 269; a++)
	    {
	      
	      A[a][b]=11;
	      A[a-4][b-2]=30;
	      
	      A[a][b]=B[a][b];
	      
	      int var_a=A[a][b]*9;
	      int var_b=A[a+1][b+3]*4;
	    }

    return 0;
}