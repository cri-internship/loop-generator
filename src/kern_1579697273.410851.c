#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(770, 970, 530, "ones");
	float ***B = create_three_dim_float(80, 560, 370, "ones");
	float *C = create_one_dim_float(970, "ones");
	float ***D = create_three_dim_float(660, 520, 600, "ones");

	for (int b = 0; b < 558; b++)
	  for (int a = 0; a < 77; a++)
	  {
	    
	     C[a]=0.884;
	     float  var_a=C[a]/0.174;
	    
	     C[a]=C[a+2]-0.797;
	    
	     B[a][b][a]=0.465;
	     B[a+3][b+2][a+3]=0.837;
	  }

    return 0;
}