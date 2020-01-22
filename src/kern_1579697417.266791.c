#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(920, 780, "ones");
	float ***C = create_three_dim_float(840, 340, 150, "ones");
	float **A = create_two_dim_float(710, 130, "ones");
	float *D = create_one_dim_float(860, "ones");
	float ***B = create_three_dim_float(880, 60, 960, "ones");

	for (int b = 4; b < 58; b++)
	  for (int a = 3; a < 860; a++)
	  {
	    
	     D[a]=D[a-3]+E[a][b]/A[a][b]-C[a][b][a]*B[a][b][a];
	    
	     E[a][b]=E[a+1][b+2]*0.828;
	    
	     B[a][b][a]=D[a]*D[a];
	     B[a+3][b+2][a+1]=0.871/C[a][b][a]-A[a][b];
	    
	     D[a]=0.335;
	    
	     D[a]=E[a][b]/A[a][b]*C[a][b][a]-D[a]+B[a][b][a];
	     A[a][b]=E[a-3][b-4]-D[a]/A[a][b];
	  }

    return 0;
}