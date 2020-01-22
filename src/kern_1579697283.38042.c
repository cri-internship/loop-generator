#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(550, 220, 850, "random");
	int *C = create_one_dim_int(240, "random");
	int *A = create_one_dim_int(110, "random");
	int *B = create_one_dim_int(100, "random");

	for (int d = 2; d < 100; d++)
	  for (int c = 2; c < 100; c++)
	    for (int b = 2; b < 100; b++)
	      for (int a = 2; a < 100; a++)
	      {
	        
	       B[a]=B[a-2]/27;
	        
	       D[a][b][c]=A[a]/B[a];
	       B[a]=A[a+1]*23;
	      }

    return 0;
}