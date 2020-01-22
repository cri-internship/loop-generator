#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(670, 80, 180, "random");
	int *C = create_one_dim_int(690, "random");
	int *A = create_one_dim_int(220, "random");
	int ***D = create_three_dim_int(740, 880, 50, "random");

	for (int d = 0; d < 180; d++)
	  for (int c = 0; c < 75; c++)
	    for (int b = 0; b < 666; b++)
	      for (int a = 0; a < 666; a++)
	      {
	        
	       B[a][b][c]=B[a+4][b+5][c]+50/A[a]*C[a];
	      }

    return 0;
}