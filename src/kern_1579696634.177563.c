#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(200, 940, "ones");
	float ***C = create_three_dim_float(230, 140, 710, "ones");
	float **D = create_two_dim_float(350, 720, "ones");
	float **B = create_two_dim_float(890, 980, "ones");
	float **A = create_two_dim_float(130, 490, "ones");

	for (int b = 4; b < 140; b++)
	  for (int a = 4; a < 129; a++)
	  {
	    
	     E[a][b]=E[a-4][b-4]/A[a][b];
	    
	     B[a][b]=B[a+5][b+3]-E[a][b]*0.465;
	    
	     A[a][b]=B[a][b]+C[a][b][a]*B[a][b]/D[a][b];
	     A[a+1][b+1]=0.132;
	    
	     A[a][b]=0.128+D[a][b];
	    
	     C[a][b][a]=0.431;
	     C[a-2][b-1][a-4]=0.202;
	    
	     C[a][b][a]=D[a][b]*0.756;
	     A[a][b]=D[a+1][b+1]+E[a][b];
	  }

    return 0;
}