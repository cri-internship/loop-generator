#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(210, 90, 210, "ones");
	float **C = create_two_dim_float(390, 740, "ones");
	float **A = create_two_dim_float(930, 510, "ones");
	float **D = create_two_dim_float(570, 990, "ones");

	for (int b = 4; b < 87; b++)
	  for (int a = 3; a < 206; a++)
	  {
	    
	     D[a][b]=D[a-3][b-2]-C[a][b]*A[a][b]+0.912;
	    
	     A[a][b]=A[a][b-1]/D[a][b];
	    
	     D[a][b]=D[a+2][b+1]-0.192;
	    
	     B[a][b][a]=A[a][b]-C[a][b]+0.16;
	     B[a][b-2][a]=C[a][b]-0.905*A[a][b];
	    
	     float var_a=B[a][b][a]*0.845;
	     float var_b=B[a-2][b-4][a-2]+0.393;
	    
	     B[a][b][a]=B[a][b][a]/A[a][b]-C[a][b];
	     A[a][b]=B[a+4][b+3][a+2]*D[a][b];
	  }

    return 0;
}