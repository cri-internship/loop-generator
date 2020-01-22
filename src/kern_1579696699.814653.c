#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(470, 910, 430, "zeros");
	float *E = create_one_dim_float(340, "zeros");
	float **B = create_two_dim_float(620, 540, "zeros");
	float **A = create_two_dim_float(980, 570, "zeros");
	float **D = create_two_dim_float(750, 290, "zeros");

	for (int b = 5; b < 290; b++)
	  for (int a = 4; a < 465; a++)
	  {
	    
	     B[a][b]=B[a-4][b-5]+D[a][b]/0.449*E[a]-C[a][b][a];
	    
	     C[a][b][a]=C[a+5][b][a+1]*0.629;
	    
	     B[a][b]=0.676;
	    
	     D[a][b]=0.198;
	     D[a-1][b]=0.354;
	  }

    return 0;
}