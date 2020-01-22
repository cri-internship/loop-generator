#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(670, 870, "ones");
	int **D = create_two_dim_int(740, 310, "ones");
	int *A = create_one_dim_int(860, "ones");
	int *B = create_one_dim_int(280, "ones");

	for (int b = 0; b < 309; b++)
	  for (int a = 5; a < 279; a++)
	  {
	    
	     B[a]=B[a-5]/A[a]*C[a][b]-D[a][b];
	    
	     D[a][b]=D[a+1][b+1]*33;
	    
	     A[a]=A[a+5]+29;
	    
	     B[a]=B[a+1]+A[a];
	    
	     C[a][b]=C[a+5][b+4]+B[a]-B[a]/A[a];
	  }

    return 0;
}