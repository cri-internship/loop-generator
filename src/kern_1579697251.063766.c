#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(630, 890, "ones");
	float ***B = create_three_dim_float(20, 450, 340, "ones");
	float ***A = create_three_dim_float(540, 640, 820, "ones");
	float **C = create_two_dim_float(720, 700, "ones");

	for (int c = 4; c < 336; c++)
	  for (int b = 5; b < 448; b++)
	    for (int a = 4; a < 18; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-3][c]+0.623;
	      
	      A[a][b][c]=A[a-4][b][c-4]-D[a][b]/C[a][b]+B[a][b][c];
	      
	      D[a][b]=D[a-2][b-5]/0.168;
	      
	      D[a][b]=D[a+5][b+3]+A[a][b][c]/B[a][b][c];
	      
	      float var_a=B[a][b][c]+0.821;
	      float var_b=B[a+2][b+2][c+4]-0.284;
	    }

    return 0;
}