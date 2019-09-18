#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(40, 150, 80, "random");
	float **B = create_two_dim_float(50, 50, "random");
	float *A = create_one_dim_float(100, "random");

	for (int c = 2; c < 50; c++)
	  for (int b = 3; b < 48; b++)
	    for (int a = 3; a < 48; a++)
	    {
	      
	      B[a+2][b-2]=0.399;
	      float  var_a=B[a+2][b-2]-0.867;
	      
	      B[a-3][b-2]=0.411;
	      float  var_b=B[a-3][b-2]+0.047;
	    }

    return 0;
}