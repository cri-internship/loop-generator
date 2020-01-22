#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(100, "zeros");
	double **C = create_two_dim_double(470, 520, "zeros");
	double *B = create_one_dim_double(370, "zeros");
	double **D = create_two_dim_double(430, 150, "zeros");

	for (int b = 0; b < 520; b++)
	  for (int a = 5; a < 366; a++)
	  {
	    
	     C[a][b]=C[a-5][b]/A[a]*B[a];
	    
	     B[a]=B[a+4]-C[a][b]*D[a][b]+0.042;
	  }

    return 0;
}