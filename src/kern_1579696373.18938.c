#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(160, "zeros");
	int ***B = create_three_dim_int(380, 520, 1000, "zeros");
	int ***D = create_three_dim_int(130, 130, 150, "zeros");
	int *A = create_one_dim_int(290, "zeros");

	for (int d = 2; d < 1000; d++)
	  for (int c = 5; c < 520; c++)
	    for (int b = 4; b < 160; b++)
	      for (int a = 4; a < 160; a++)
	      {
	        
	       C[a]=C[a-4]/33;
	        
	       B[a][b][c]=B[a-2][b-5][c-2]*28;
	      }

    return 0;
}