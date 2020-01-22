#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(530, "zeros");
	int **B = create_two_dim_int(920, 430, "zeros");
	int **A = create_two_dim_int(790, 330, "zeros");

	for (int d = 4; d < 326; d++)
	  for (int c = 3; c < 528; c++)
	    for (int b = 3; b < 528; b++)
	      for (int a = 3; a < 528; a++)
	      {
	        
	       A[a][b]=A[a][b-4]+B[a][b]*C[a];
	        
	       A[a][b]=A[a-2][b-3]/B[a][b]*C[a];
	        
	       A[a][b]=A[a+3][b+4]-C[a]+29;
	        
	       A[a][b]=C[a]/A[a][b];
	       C[a]=C[a+2]/B[a][b];
	        
	       int var_a=B[a][b]/24;
	       int var_b=B[a-3][b-4]-49;
	      }

    return 0;
}