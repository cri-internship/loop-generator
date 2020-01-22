#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(150, 820, 480, "zeros");
	float ***A = create_three_dim_float(530, 100, 930, "zeros");
	float ***B = create_three_dim_float(990, 370, 940, "zeros");

	for (int b = 5; b < 367; b++)
	  for (int a = 3; a < 986; a++)
	  {
	    
	     B[a][b][a]=B[a+4][b+3][a+3]*0.186;
	    
	     B[a][b][a]=0.306;
	  }

    return 0;
}