#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(220, "zeros");
	float **B = create_two_dim_float(230, 880, "zeros");
	float **A = create_two_dim_float(900, 820, "zeros");
	float *D = create_one_dim_float(820, "zeros");

	for (int b = 5; b < 820; b++)
	  for (int a = 4; a < 220; a++)
	  {
	    
	     D[a]=D[a-4]-0.144;
	    
	     C[a]=C[a-2]*A[a][b]+B[a][b];
	    
	     A[a][b]=A[a-3][b-2]/C[a]-0.32+B[a][b];
	    
	     A[a][b]=A[a-2][b-5]+0.399;
	  }

    return 0;
}