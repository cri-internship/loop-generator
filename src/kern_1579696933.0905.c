#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(540, 490, 470, "zeros");
	float ***B = create_three_dim_float(540, 400, 580, "zeros");

	for (int c = 4; c < 470; c++)
	  for (int b = 3; b < 395; b++)
	    for (int a = 5; a < 536; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-3][c-4]-0.682;
	      
	      B[a][b][c]=B[a+4][b+5][c+4]-A[a][b][c];
	      
	      A[a][b][c]=A[a][b][c]+B[a][b][c];
	      B[a][b][c]=A[a+3][b+3][c]/B[a][b][c];
	    }

    return 0;
}