#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(700, 470, "zeros");
	float *A = create_one_dim_float(90, "zeros");
	float *B = create_one_dim_float(570, "zeros");

	for (int b = 0; b < 470; b++)
	  for (int a = 4; a < 89; a++)
	  {
	    
	     B[a]=0.949;
	     B[a-4]=0.154;
	    
	     A[a]=0.618;
	     A[a+1]=B[a]-C[a][b];
	    
	     A[a]=C[a][b]*A[a]-A[a];
	     B[a]=C[a+5][b]+B[a]/A[a];
	  }

    return 0;
}