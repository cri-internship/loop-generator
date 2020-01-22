#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(740, 680, 980, "random");
	float ***A = create_three_dim_float(730, 990, 70, "random");
	float ***B = create_three_dim_float(130, 910, 190, "random");

	for (int b = 0; b < 987; b++)
	  for (int a = 0; a < 728; a++)
	  {
	    
	     A[a][b][a]=A[a][b+3][a+2]*0.816;
	  }

    return 0;
}