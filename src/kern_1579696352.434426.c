#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(960, "zeros");
	int **E = create_two_dim_int(710, 30, "zeros");
	int *C = create_one_dim_int(970, "zeros");
	int **B = create_two_dim_int(780, 630, "zeros");
	int *D = create_one_dim_int(400, "zeros");

	for (int d = 5; d < 30; d++)
	  for (int c = 4; c < 710; c++)
	    for (int b = 4; b < 710; b++)
	      for (int a = 4; a < 710; a++)
	      {
	        
	       C[a]=13;
	       B[a][b]=C[a]*D[a]/A[a]+B[a][b];
	        
	       E[a][b]=C[a]-D[a]/B[a][b]+A[a];
	       E[a-4][b-5]=36+C[a];
	        
	       int var_a=C[a]+43;
	       int var_b=C[a-1]+32;
	      }

    return 0;
}