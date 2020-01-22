#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(440, 470, 220, "zeros");
	float ***E = create_three_dim_float(940, 710, 100, "zeros");
	float **C = create_two_dim_float(880, 560, "zeros");
	float **D = create_two_dim_float(110, 440, "zeros");
	float **B = create_two_dim_float(840, 100, "zeros");

	for (int c = 5; c < 218; c++)
	  for (int b = 2; b < 469; b++)
	    for (int a = 3; a < 437; a++)
	    {
	      
	      A[a][b][c]=A[a+3][b+1][c+2]*0.893;
	      
	      C[a][b]=B[a][b]+0.452/A[a][b][c];
	      C[a-3][b-1]=E[a][b][c]+A[a][b][c]/B[a][b]*0.079;
	      
	      A[a][b][c]=C[a][b]-0.66/C[a][b];
	    }

    return 0;
}