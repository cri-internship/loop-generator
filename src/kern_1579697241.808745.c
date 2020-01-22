#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(770, 270, "ones");
	float ***C = create_three_dim_float(920, 630, 720, "ones");
	float ***E = create_three_dim_float(170, 890, 310, "ones");
	float **A = create_two_dim_float(340, 810, "ones");
	float **D = create_two_dim_float(20, 330, "ones");

	for (int b = 0; b < 265; b++)
	  for (int a = 4; a < 16; a++)
	  {
	    
	     B[a][b]=B[a-4][b]*D[a][b]+C[a][b][a]-0.352/E[a][b][a];
	    
	     B[a][b]=B[a+1][b+5]/0.578;
	    
	     D[a][b]=D[a+4][b+5]*B[a][b]/B[a][b]-E[a][b][a];
	    
	     A[a][b]=A[a+3][b+1]-0.668;
	    
	     A[a][b]=E[a][b][a]*A[a][b];
	     D[a][b]=E[a+1][b+4][a]/0.793-D[a][b]+B[a][b]*C[a][b][a];
	    
	     float var_a=D[a][b]*0.624;
	     float var_b=D[a+2][b+4]+0.24;
	    
	     C[a][b][a]=A[a][b]+D[a][b];
	     B[a][b]=A[a][b+1]+C[a][b][a]/D[a][b]*E[a][b][a];
	  }

    return 0;
}