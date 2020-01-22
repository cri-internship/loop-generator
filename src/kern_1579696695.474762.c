#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(900, "ones");
	int **A = create_two_dim_int(950, 430, "ones");

	for (int b = 1; b < 428; b++)
	  for (int a = 5; a < 896; a++)
	  {
	    
	     B[a]=B[a-1]*A[a][b];
	    
	     A[a][b]=A[a+4][b+1]+14;
	    
	     A[a][b]=27;
	    
	     B[a]=29;
	    
	     A[a][b]=A[a][b]-B[a];
	     B[a]=A[a-5][b]+B[a];
	  }

    return 0;
}