#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(690, 390, 450, "ones");
	float *D = create_one_dim_float(800, "ones");
	float **C = create_two_dim_float(60, 470, "ones");
	float *E = create_one_dim_float(660, "ones");
	float *A = create_one_dim_float(240, "ones");

	for (int c = 0; c < 450; c++)
	  for (int b = 4; b < 390; b++)
	    for (int a = 5; a < 240; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-4][c]+0.242;
	      
	      A[a]=A[a-4]/0.508+B[a][b][c];
	      
	      D[a]=D[a+2]-0.656;
	      
	      float var_a=E[a]+0.138;
	      E[a]=0.417;
	      
	      D[a]=0.304;
	    }

    return 0;
}