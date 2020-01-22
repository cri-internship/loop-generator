#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(340, "zeros");
	float ***C = create_three_dim_float(220, 450, 520, "zeros");
	float ***A = create_three_dim_float(580, 830, 850, "zeros");

	for (int c = 0; c < 515; c++)
	  for (int b = 0; b < 445; b++)
	    for (int a = 0; a < 218; a++)
	    {
	      
	      B[a]=0.015;
	      float  var_a=B[a]-0.279;
	      
	      C[a][b][c]=C[a+2][b+5][c]*0.646;
	      
	      float var_b=C[a][b][c]+0.244;
	      float var_c=C[a+1][b+1][c+5]/0.138;
	      
	      A[a][b][c]=B[a]+C[a][b][c]-A[a][b][c];
	      B[a]=B[a+5]+A[a][b][c]*C[a][b][c];
	    }

    return 0;
}