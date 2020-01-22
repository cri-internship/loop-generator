#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(410, 450, 930, "random");
	float **B = create_two_dim_float(630, 640, "random");
	float ***E = create_three_dim_float(800, 460, 500, "random");
	float **A = create_two_dim_float(850, 230, "random");
	float **D = create_two_dim_float(750, 950, "random");

	for (int b = 5; b < 226; b++)
	  for (int a = 5; a < 626; a++)
	  {
	    
	     D[a][b]=D[a-5][b]/E[a][b][a];
	    
	     E[a][b][a]=E[a-3][b-1][a-5]+C[a][b][a]/B[a][b]-D[a][b]*A[a][b];
	    
	     A[a][b]=A[a+1][b+4]/D[a][b];
	    
	     E[a][b][a]=E[a+4][b][a+2]/0.874;
	    
	     B[a][b]=B[a+4][b]/C[a][b][a]*0.527;
	    
	     A[a][b]=0.904;
	    
	     A[a][b]=D[a][b]*E[a][b][a];
	     C[a][b][a]=D[a][b+1]/E[a][b][a]+B[a][b]-C[a][b][a];
	  }

    return 0;
}