#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(420, 280, 500, "random");
	int **A = create_two_dim_int(600, 20, "random");

	for (int d = 0; d < 496; d++)
	  for (int c = 3; c < 15; c++)
	    for (int b = 5; b < 418; b++)
	      for (int a = 5; a < 418; a++)
	      {
	        
	       A[a][b]=A[a-5][b-2]-B[a][b][c];
	        
	       B[a][b][c]=B[a+2][b][c+4]+A[a][b];
	        
	       A[a][b]=5;
	      }

    return 0;
}