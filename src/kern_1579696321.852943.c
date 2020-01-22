#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(60, "zeros");
	int **B = create_two_dim_int(60, 280, "zeros");
	int **D = create_two_dim_int(110, 70, "zeros");
	int **A = create_two_dim_int(180, 420, "zeros");

	for (int d = 5; d < 280; d++)
	  for (int c = 3; c < 60; c++)
	    for (int b = 3; b < 60; b++)
	      for (int a = 3; a < 60; a++)
	      {
	        
	       A[a][b]=A[a+3][b]/20;
	        
	       B[a][b]=C[a];
	       B[a-3][b-4]=A[a][b];
	        
	       C[a]=B[a][b]-D[a][b]/A[a][b]*C[a];
	       A[a][b]=B[a][b-5]+A[a][b]-D[a][b]*C[a];
	      }

    return 0;
}