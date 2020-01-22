#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(640, 160, 450, "random");
	float ***B = create_three_dim_float(930, 600, 440, "random");

	for (int c = 0; c < 435; c++)
	  for (int b = 0; b < 158; b++)
	    for (int a = 0; a < 639; a++)
	    {
	      
	      A[a][b][c]=A[a+1][b+2][c+5]+0.546;
	      
	      B[a][b][c]=B[a+2][b+2][c+5]+0.913;
	      
	      B[a][b][c]=0.72;
	    }

    return 0;
}