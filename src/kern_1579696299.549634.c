#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(250, 590, 480, "zeros");
	float **C = create_two_dim_float(360, 150, "zeros");
	float **B = create_two_dim_float(710, 520, "zeros");
	float **A = create_two_dim_float(930, 440, "zeros");

	for (int c = 5; c < 480; c++)
	  for (int b = 1; b < 435; b++)
	    for (int a = 0; a < 250; a++)
	    {
	      
	      D[a][b][c]=D[a][b-1][c-5]/B[a][b]*A[a][b]+0.619;
	      
	      B[a][b]=B[a+4][b+1]+D[a][b][c];
	      
	      float var_a=A[a][b]/0.148;
	      float var_b=A[a+3][b+5]*0.905;
	    }

    return 0;
}