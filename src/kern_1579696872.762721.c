#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(170, 680, 980, "zeros");
	float ***C = create_three_dim_float(570, 460, 520, "zeros");
	float *B = create_one_dim_float(350, "zeros");

	for (int b = 0; b < 349; b++)
	  for (int a = 0; a < 349; a++)
	  {
	    
	     B[a]=B[a+1]+0.684;
	  }

    return 0;
}