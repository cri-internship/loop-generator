#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(930, 220, 490, "zeros");

	for (int b = 5; b < 218; b++)
	  for (int a = 5; a < 927; a++)
	  {
	    
	     A[a][b][a]=A[a+3][b+2][a+1]/0.945;
	    
	     float var_a=A[a][b][a]/0.943;
	     float var_b=A[a-5][b-5][a-2]/0.322;
	  }

    return 0;
}