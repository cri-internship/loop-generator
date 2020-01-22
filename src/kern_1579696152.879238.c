#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(830, "random");
	float ***B = create_three_dim_float(900, 510, 600, "random");

	for (int c = 5; c < 597; c++)
	  for (int b = 3; b < 506; b++)
	    for (int a = 5; a < 826; a++)
	    {
	      
	      A[a]=A[a+4]*0.534;
	      
	      B[a][b][c]=0.399;
	      B[a][b-1][c-1]=0.267;
	      
	      B[a][b][c]=0.745;
	      
	      B[a][b][c]=B[a][b][c]*A[a];
	      A[a]=B[a-2][b-3][c-5]/0.43;
	      
	      float var_a=B[a][b][c]/0.164;
	      float var_b=B[a+4][b+4][c]+0.642;
	      
	      float var_c=A[a]+0.27;
	      float var_d=A[a-5]*0.016;
	    }

    return 0;
}