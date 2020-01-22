#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(250, "random");
	int ***B = create_three_dim_int(960, 960, 30, "random");

	for (int d = 1; d < 29; d++)
	  for (int c = 5; c < 957; c++)
	    for (int b = 5; b < 957; b++)
	      for (int a = 5; a < 957; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b][c-1]+A[a];
	        
	       B[a][b][c]=A[a];
	        
	       B[a][b][c]=B[a][b][c]*A[a];
	       A[a]=B[a-2][b-5][c-1]*A[a];
	      }

    return 0;
}