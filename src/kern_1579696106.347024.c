#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(40, 900, 570, "zeros");
	int *A = create_one_dim_int(430, "zeros");
	int *B = create_one_dim_int(910, "zeros");

	for (int b = 0; b < 898; b++)
	  for (int a = 2; a < 35; a++)
	  {
	    
	     A[a]=A[a+4]*B[a]-C[a][b][a];
	    
	     C[a][b][a]=C[a+5][b+2][a+4]+5;
	    
	     B[a]=B[a+3]*A[a];
	    
	     B[a]=B[a]/C[a][b][a];
	     C[a][b][a]=B[a-2]-A[a]/C[a][b][a];
	  }

    return 0;
}