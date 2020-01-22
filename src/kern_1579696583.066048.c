#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(80, 70, 590, "zeros");
	float ***B = create_three_dim_float(680, 870, 540, "zeros");

	for (int c = 4; c < 540; c++)
	  for (int b = 5; b < 70; b++)
	    for (int a = 3; a < 79; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b][c-4]/A[a][b][c];
	      
	      A[a][b][c]=A[a+1][b][c+1]+0.465;
	      
	      A[a][b][c]=B[a][b][c];
	    }

    return 0;
}