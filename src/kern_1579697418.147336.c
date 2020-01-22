#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(150, "zeros");
	float **A = create_two_dim_float(560, 100, "zeros");
	float *B = create_one_dim_float(300, "zeros");

	for (int b = 0; b < 97; b++)
	  for (int a = 0; a < 146; a++)
	  {
	    
	     A[a][b]=0.879;
	     A[a][b+1]=0.728;
	    
	     A[a][b]=B[a]/0.677;
	    
	     B[a]=C[a]+A[a][b]-A[a][b];
	     A[a][b]=C[a+4]+A[a][b]*B[a];
	  }

    return 0;
}