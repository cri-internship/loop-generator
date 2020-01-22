#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(860, 790, "zeros");
	int **B = create_two_dim_int(740, 280, "zeros");
	int *C = create_one_dim_int(890, "zeros");

	for (int b = 0; b < 276; b++)
	  for (int a = 0; a < 738; a++)
	  {
	    
	     A[a][b]=33;
	     A[a+2][b]=38;
	    
	     B[a][b]=B[a][b]/C[a];
	     A[a][b]=B[a+2][b+4]-A[a][b]+A[a][b];
	  }

    return 0;
}