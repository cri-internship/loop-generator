#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(610, 270, 250, "zeros");
	float **D = create_two_dim_float(500, 530, "zeros");
	float **A = create_two_dim_float(390, 400, "zeros");
	float **C = create_two_dim_float(280, 430, "zeros");
	float **B = create_two_dim_float(600, 190, "zeros");

	for (int b = 0; b < 425; b++)
	  for (int a = 0; a < 277; a++)
	  {
	    
	     D[a][b]=D[a+1][b+1]/B[a][b]+E[a][b][a]*0.681;
	    
	     C[a][b]=D[a][b]*B[a][b]/A[a][b]-D[a][b];
	     C[a+3][b+5]=E[a][b][a]*0.012;
	  }

    return 0;
}