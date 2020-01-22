#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(960, 340, 590, "zeros");
	float ***D = create_three_dim_float(280, 640, 680, "zeros");
	float **E = create_two_dim_float(500, 680, "zeros");
	float **C = create_two_dim_float(700, 910, "zeros");
	float ***A = create_three_dim_float(520, 90, 870, "zeros");

	for (int b = 2; b < 85; b++)
	  for (int a = 2; a < 495; a++)
	  {
	    
	     B[a][b][a]=B[a][b-2][a-2]*E[a][b]+C[a][b]-A[a][b][a];
	    
	     E[a][b]=E[a+5][b]-D[a][b][a]*B[a][b][a]+C[a][b]/B[a][b][a];
	    
	     B[a][b][a]=B[a+5][b+3][a+5]-D[a][b][a];
	    
	     float var_a=A[a][b][a]-0.658;
	     float var_b=A[a+4][b+5][a+4]-0.952;
	  }

    return 0;
}