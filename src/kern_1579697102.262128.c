#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(240, "random");
	int **C = create_two_dim_int(560, 210, "random");
	int *A = create_one_dim_int(90, "random");

	for (int d = 2; d < 205; d++)
	  for (int c = 5; c < 88; c++)
	    for (int b = 5; b < 88; b++)
	      for (int a = 5; a < 88; a++)
	      {
	        
	       B[a]=B[a+5]-0*A[a];
	        
	       C[a][b]=C[a+3][b]/38-B[a];
	        
	       A[a]=A[a+2]/38;
	        
	       C[a][b]=A[a]+B[a];
	        
	       A[a]=B[a];
	      }

    return 0;
}