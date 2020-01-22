#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(330, "ones");
	int ***B = create_three_dim_int(900, 520, 240, "ones");
	int **D = create_two_dim_int(160, 250, "ones");
	int **C = create_two_dim_int(110, 110, "ones");

	for (int d = 0; d < 107; d++)
	  for (int c = 0; c < 106; c++)
	    for (int b = 0; b < 106; b++)
	      for (int a = 0; a < 106; a++)
	      {
	        
	       C[a][b]=C[a+4][b+3]*14;
	        
	       D[a][b]=D[a+4][b]/25;
	        
	       D[a][b]=44;
	        
	       int var_a=A[a]+20;
	       int var_b=A[a+5]-44;
	      }

    return 0;
}