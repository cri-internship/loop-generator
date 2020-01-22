#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(20, "random");
	int *A = create_one_dim_int(90, "random");
	int **B = create_two_dim_int(800, 10, "random");
	int ***D = create_three_dim_int(400, 340, 390, "random");

	for (int d = 5; d < 20; d++)
	  for (int c = 5; c < 20; c++)
	    for (int b = 5; b < 20; b++)
	      for (int a = 5; a < 20; a++)
	      {
	        
	       C[a]=C[a-4]+25;
	        
	       A[a]=A[a-5]+50;
	      }

    return 0;
}