#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(960, "zeros");
	int **A = create_two_dim_int(580, 250, "zeros");
	int **C = create_two_dim_int(850, 200, "zeros");

	for (int d = 0; d < 199; d++)
	  for (int c = 5; c < 577; c++)
	    for (int b = 5; b < 577; b++)
	      for (int a = 5; a < 577; a++)
	      {
	        
	       A[a][b]=A[a+3][b+1]-45;
	        
	       C[a][b]=C[a+2][b+1]-23;
	        
	       int var_a=B[a]/8;
	       int var_b=B[a-5]/25;
	        
	       int var_c=B[a]-3;
	      }

    return 0;
}