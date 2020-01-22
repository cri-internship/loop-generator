#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(110, 930, 690, "zeros");
	float ***A = create_three_dim_float(720, 10, 470, "zeros");
	float **B = create_two_dim_float(510, 580, "zeros");

	for (int c = 3; c < 467; c++)
	  for (int b = 4; b < 5; b++)
	    for (int a = 2; a < 717; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-4][c-3]+C[a][b][c]*0.624;
	      
	      A[a][b][c]=C[a][b][c]+B[a][b];
	    }

    return 0;
}