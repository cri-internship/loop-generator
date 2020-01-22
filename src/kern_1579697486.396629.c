#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(260, "random");
	int ***B = create_three_dim_int(40, 170, 470, "random");

	for (int c = 4; c < 466; c++)
	  for (int b = 4; b < 165; b++)
	    for (int a = 3; a < 35; a++)
	    {
	      
	      A[a]=A[a-3]/12;
	      
	      B[a][b][c]=B[a-3][b-4][c-1]+47;
	      
	      B[a][b][c]=B[a-1][b-2][c-4]-16;
	      
	      A[a]=A[a+5]-B[a][b][c];
	      
	      B[a][b][c]=B[a+5][b+5][c+4]/11;
	    }

    return 0;
}