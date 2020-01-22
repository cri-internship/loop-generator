#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(120, 470, "zeros");
	int **B = create_two_dim_int(110, 900, "zeros");
	int ***A = create_three_dim_int(80, 730, 480, "zeros");
	int *C = create_one_dim_int(520, "zeros");
	int **E = create_two_dim_int(880, 540, "zeros");

	for (int d = 1; d < 540; d++)
	  for (int c = 4; c < 110; c++)
	    for (int b = 4; b < 110; b++)
	      for (int a = 4; a < 110; a++)
	      {
	        
	       B[a][b]=B[a-4][b-1]/7;
	        
	       E[a][b]=E[a+1][b]-C[a];
	      }

    return 0;
}