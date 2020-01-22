#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(730, 900, "ones");
	int *B = create_one_dim_int(390, "ones");

	for (int b = 2; b < 897; b++)
	  for (int a = 5; a < 389; a++)
	  {
	    
	     A[a][b]=A[a-1][b-2]+B[a];
	    
	     A[a][b]=8;
	    
	     B[a]=49;
	     B[a-5]=41;
	    
	     A[a][b]=B[a]-A[a][b];
	     B[a]=B[a+1]+A[a][b];
	  }

    return 0;
}