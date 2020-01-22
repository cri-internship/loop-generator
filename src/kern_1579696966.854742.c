#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(720, 470, 220, "ones");
	float **D = create_two_dim_float(300, 530, "ones");
	float *C = create_one_dim_float(670, "ones");
	float *A = create_one_dim_float(190, "ones");
	float ***E = create_three_dim_float(220, 750, 450, "ones");

	for (int b = 5; b < 750; b++)
	  for (int a = 4; a < 185; a++)
	  {
	    
	     E[a][b][a]=E[a][b][a+2]/0.517;
	    
	     A[a]=E[a][b][a]/D[a][b]+C[a];
	     A[a-4]=B[a][b][a]+E[a][b][a]-D[a][b]/C[a];
	    
	     A[a]=D[a][b]+B[a][b][a]*0.492;
	    
	     float var_a=E[a][b][a]-0.242;
	     float var_b=E[a-2][b-5][a-1]+0.575;
	    
	     C[a]=A[a]*E[a][b][a];
	     E[a][b][a]=A[a]-B[a][b][a];
	    
	     B[a][b][a]=C[a]+A[a]-E[a][b][a];
	     A[a]=C[a+1]*B[a][b][a];
	  }

    return 0;
}