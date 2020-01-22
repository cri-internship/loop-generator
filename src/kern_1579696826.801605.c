#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(420, "zeros");
	int **A = create_two_dim_int(480, 210, "zeros");
	int **B = create_two_dim_int(240, 310, "zeros");

	for (int d = 2; d < 210; d++)
	  for (int c = 2; c < 236; c++)
	    for (int b = 2; b < 236; b++)
	      for (int a = 2; a < 236; a++)
	      {
	        
	       B[a][b]=B[a-2][b]+A[a][b];
	        
	       A[a][b]=A[a][b-2]-B[a][b];
	        
	       B[a][b]=B[a+4][b+3]-23;
	        
	       A[a][b]=C[a]*A[a][b]/46;
	       B[a][b]=C[a+1]+A[a][b]*B[a][b];
	      }

    return 0;
}