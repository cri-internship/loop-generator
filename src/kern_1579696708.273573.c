#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(130, 280, "ones");
	int *A = create_one_dim_int(250, "ones");
	int **B = create_two_dim_int(80, 450, "ones");

	for (int d = 5; d < 276; d++)
	  for (int c = 3; c < 75; c++)
	    for (int b = 3; b < 75; b++)
	      for (int a = 3; a < 75; a++)
	      {
	        
	       B[a][b]=B[a-3][b-5]-15;
	        
	       B[a][b]=B[a+5][b+1]*C[a][b]+A[a];
	        
	       B[a][b]=B[a+2][b+2]/A[a];
	        
	       A[a]=A[a+2]*B[a][b];
	        
	       C[a][b]=C[a+3][b+4]-A[a];
	      }

    return 0;
}