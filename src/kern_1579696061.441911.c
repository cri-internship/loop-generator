#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(810, 310, "ones");
	int *B = create_one_dim_int(130, "ones");

	for (int b = 2; b < 309; b++)
	  for (int a = 2; a < 129; a++)
	  {
	    
	     B[a]=B[a-2]+44;
	    
	     A[a][b]=B[a];
	     A[a-2][b-2]=42;
	    
	     B[a]=A[a][b];
	    
	     B[a]=B[a]+A[a][b];
	     A[a][b]=B[a+1]-A[a][b];
	    
	     B[a]=A[a][b]/B[a];
	     A[a][b]=A[a+3][b+1]*B[a];
	  }

    return 0;
}