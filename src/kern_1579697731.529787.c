#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(640, 630, 10, "random");
	float ***A = create_three_dim_float(90, 850, 790, "random");
	float ***C = create_three_dim_float(930, 790, 640, "random");

	for (int b = 0; b < 785; b++)
	  for (int a = 0; a < 86; a++)
	  {
	    
	     C[a][b][a]=C[a+4][b+5][a+5]+0.706;
	    
	     A[a][b][a]=A[a+3][b+5][a+4]*C[a][b][a]-B[a][b][a];
	  }

    return 0;
}