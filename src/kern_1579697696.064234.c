#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(680, "zeros");
	int **B = create_two_dim_int(390, 540, "zeros");
	int *A = create_one_dim_int(830, "zeros");
	int *D = create_one_dim_int(910, "zeros");

	for (int d = 0; d < 678; d++)
	  for (int c = 0; c < 678; c++)
	    for (int b = 0; b < 678; b++)
	      for (int a = 0; a < 678; a++)
	      {
	        
	       B[a][b]=D[a]*B[a][b]+C[a];
	       A[a]=D[a]*A[a]+C[a];
	        
	       D[a]=C[a]+D[a]/A[a];
	       C[a]=C[a+2]+D[a]/B[a][b]-A[a];
	      }

    return 0;
}