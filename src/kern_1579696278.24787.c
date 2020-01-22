#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(160, 890, "zeros");
	int *B = create_one_dim_int(1000, "zeros");
	int *C = create_one_dim_int(940, "zeros");

	for (int d = 2; d < 890; d++)
	  for (int c = 5; c < 160; c++)
	    for (int b = 5; b < 160; b++)
	      for (int a = 5; a < 160; a++)
	      {
	        
	       C[a]=C[a-1]+B[a];
	        
	       B[a]=B[a-4]+A[a][b]/C[a];
	        
	       C[a]=37;
	        
	       C[a]=A[a][b]+C[a]/B[a];
	       A[a][b]=A[a-5][b-2]*C[a]/B[a];
	      }

    return 0;
}