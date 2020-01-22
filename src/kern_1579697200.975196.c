#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(140, 710, 470, "random");
	int *B = create_one_dim_int(820, "random");

	for (int b = 5; b < 709; b++)
	  for (int a = 5; a < 137; a++)
	  {
	    
	     B[a]=B[a-4]-22;
	    
	     A[a][b][a]=A[a+3][b+1][a+3]-B[a];
	    
	     B[a]=40;
	    
	     B[a]=B[a]+A[a][b][a];
	     A[a][b][a]=B[a-2]/A[a][b][a];
	    
	     B[a]=A[a][b][a]+B[a];
	     B[a]=A[a-3][b-5][a-5]+B[a];
	  }

    return 0;
}