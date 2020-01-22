#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(70, "random");
	int ***C = create_three_dim_int(890, 670, 230, "random");
	int *A = create_one_dim_int(430, "random");

	for (int d = 4; d < 70; d++)
	  for (int c = 4; c < 70; c++)
	    for (int b = 4; b < 70; b++)
	      for (int a = 4; a < 70; a++)
	      {
	        
	       B[a]=B[a-1]/29;
	        
	       B[a]=B[a-4]-C[a][b][c];
	      }

    return 0;
}