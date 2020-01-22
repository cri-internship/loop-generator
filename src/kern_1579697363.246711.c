#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(20, "zeros");
	int **C = create_two_dim_int(990, 400, "zeros");
	int **D = create_two_dim_int(860, 270, "zeros");
	int *A = create_one_dim_int(120, "zeros");
	int **B = create_two_dim_int(190, 880, "zeros");

	for (int d = 0; d < 878; d++)
	  for (int c = 0; c < 118; c++)
	    for (int b = 0; b < 118; b++)
	      for (int a = 0; a < 118; a++)
	      {
	        
	       B[a][b]=B[a+2][b+2]-A[a]+D[a][b];
	        
	       A[a]=A[a]/B[a][b]+E[a];
	       E[a]=A[a+2]/C[a][b]*E[a]+C[a][b];
	      }

    return 0;
}