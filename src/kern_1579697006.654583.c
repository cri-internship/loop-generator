#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(110, "random");
	int *B = create_one_dim_int(640, "random");
	int **A = create_two_dim_int(750, 770, "random");

	for (int d = 4; d < 108; d++)
	  for (int c = 4; c < 108; c++)
	    for (int b = 4; b < 108; b++)
	      for (int a = 4; a < 108; a++)
	      {
	        
	       C[a]=C[a-4]-B[a]*A[a][b];
	        
	       B[a]=B[a+3]/30;
	        
	       B[a]=0;
	        
	       A[a][b]=C[a]+B[a]/A[a][b];
	       C[a]=C[a-2]/A[a][b];
	        
	       B[a]=C[a]*A[a][b]/B[a];
	       B[a]=C[a+2]*A[a][b]-23;
	        
	       A[a][b]=B[a]+C[a]/C[a];
	       C[a]=B[a+4]+C[a]-A[a][b];
	      }

    return 0;
}