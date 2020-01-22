#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(670, 10, 580, "random");
	float ***B = create_three_dim_float(110, 320, 260, "random");

	for (int c = 2; c < 260; c++)
	  for (int b = 4; b < 8; b++)
	    for (int a = 5; a < 110; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b][c-2]+A[a][b][c];
	      
	      B[a][b][c]=A[a][b][c];
	      
	      A[a][b][c]=B[a][b][c];
	      A[a+4][b+2][c+3]=B[a][b][c];
	    }

    return 0;
}