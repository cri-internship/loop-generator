#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(10, "zeros");
	float ***A = create_three_dim_float(440, 700, 290, "zeros");
	float **E = create_two_dim_float(680, 870, "zeros");
	float ***B = create_three_dim_float(240, 570, 690, "zeros");
	float **D = create_two_dim_float(860, 450, "zeros");

	for (int c = 3; c < 450; c++)
	  for (int b = 5; b < 8; b++)
	    for (int a = 5; a < 8; a++)
	    {
	      
	      C[a]=C[a-2]/0.883;
	      
	      E[a][b]=E[a-5][b-2]/0.032;
	      
	      E[a][b]=E[a+1][b]-0.495;
	      
	      C[a]=0.27;
	      
	      D[a][b]=C[a]*C[a]+A[a][b][c];
	      D[a-2][b-3]=0.992*E[a][b]/C[a];
	    }

    return 0;
}