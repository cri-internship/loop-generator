#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(130, 760, "zeros");
	int *B = create_one_dim_int(450, "zeros");
	int *C = create_one_dim_int(440, "zeros");

	for (int d = 3; d < 435; d++)
	  for (int c = 3; c < 435; c++)
	    for (int b = 3; b < 435; b++)
	      for (int a = 3; a < 435; a++)
	      {
	        
	       B[a]=B[a-1]-50;
	        
	       C[a]=C[a+5]-0/B[a];
	        
	       C[a]=C[a+3]+A[a][b]*B[a];
	      }

    return 0;
}