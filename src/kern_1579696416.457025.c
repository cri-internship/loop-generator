#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(640, 640, "zeros");
	double **A = create_two_dim_double(240, 830, "zeros");
	double **C = create_two_dim_double(710, 530, "zeros");
	double ***D = create_three_dim_double(770, 290, 440, "zeros");

	for (int b = 5; b < 290; b++)
	  for (int a = 4; a < 240; a++)
	  {
	    
	     D[a][b][a]=D[a-2][b][a]*0.348;
	    
	     B[a][b]=B[a-3][b-4]/0.404;
	    
	     D[a][b][a]=D[a-3][b-5][a]*0.821;
	    
	     A[a][b]=0.524;
	     A[a-2][b]=0.241;
	    
	     B[a][b]=C[a][b]*A[a][b]-D[a][b][a];
	    
	     C[a][b]=0.948;
	     C[a-3][b-4]=0.48;
	  }

    return 0;
}