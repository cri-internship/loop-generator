#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(800, 910, "zeros");
	int *B = create_one_dim_int(380, "zeros");

	for (int b = 4; b < 908; b++)
	  for (int a = 3; a < 379; a++)
	  {
	    
	     A[a][b]=A[a-3][b-4]+30;
	    
	     A[a][b]=B[a];
	    
	     B[a]=47;
	     B[a+1]=A[a][b];
	    
	     A[a][b]=A[a][b]-B[a];
	     B[a]=A[a-1][b]-B[a];
	    
	     B[a]=A[a][b]/B[a];
	     A[a][b]=A[a+3][b+2]-B[a];
	  }

    return 0;
}