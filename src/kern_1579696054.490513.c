#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(910, 380, 180, "zeros");
	float ***B = create_three_dim_float(170, 970, 280, "zeros");

	for (int c = 1; c < 275; c++)
	  for (int b = 3; b < 968; b++)
	    for (int a = 1; a < 170; a++)
	    {
	      
	      B[a][b][c]=B[a][b+2][c+5]+0.709;
	      
	      B[a][b][c]=B[a][b][c]+A[a][b][c];
	      A[a][b][c]=B[a-1][b-3][c-1]/A[a][b][c];
	    }

    return 0;
}