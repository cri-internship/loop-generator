#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(900, "ones");
	int **A = create_two_dim_int(130, 190, "ones");
	int *B = create_one_dim_int(20, "ones");

	for (int d = 0; d < 185; d++)
	  for (int c = 0; c < 15; c++)
	    for (int b = 0; b < 15; b++)
	      for (int a = 0; a < 15; a++)
	      {
	        
	       A[a][b]=A[a][b+5]-39;
	        
	       C[a]=C[a+1]*39;
	        
	       A[a][b]=A[a+2][b]-35;
	        
	       C[a]=B[a]*C[a]-A[a][b];
	       B[a]=B[a+5]*A[a][b]-C[a];
	      }

    return 0;
}