#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(520, 750, 820, "ones");
	float ***C = create_three_dim_float(120, 410, 370, "ones");
	float **B = create_two_dim_float(300, 930, "ones");
	float ***E = create_three_dim_float(200, 680, 520, "ones");
	float *D = create_one_dim_float(830, "ones");

	for (int b = 0; b < 679; b++)
	  for (int a = 0; a < 195; a++)
	  {
	    
	     E[a][b][a]=E[a+5][b+1][a+4]/C[a][b][a];
	  }

    return 0;
}