#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(670, 820, "random");
	float *B = create_one_dim_float(690, "random");
	float **D = create_two_dim_float(670, 280, "random");
	float *C = create_one_dim_float(620, "random");

	for (int b = 5; b < 815; b++)
	  for (int a = 4; a < 618; a++)
	  {
	    
	     A[a][b]=A[a-4][b]+0.999;
	    
	     A[a][b]=A[a+3][b+2]+C[a];
	    
	     C[a]=C[a+2]*B[a]/0.513+D[a][b];
	    
	     A[a][b]=A[a][b]+C[a]/0.804*B[a];
	     D[a][b]=A[a+5][b+1]*B[a]/0.807+C[a];
	    
	     float var_a=A[a][b]+0.399;
	     float var_b=A[a+1][b+5]+0.127;
	  }

    return 0;
}