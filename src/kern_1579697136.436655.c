#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(600, "random");
	float ***B = create_three_dim_float(920, 460, 110, "random");
	float **E = create_two_dim_float(130, 190, "random");
	float ***C = create_three_dim_float(280, 30, 400, "random");
	float **D = create_two_dim_float(180, 60, "random");

	for (int b = 2; b < 190; b++)
	  for (int a = 5; a < 130; a++)
	  {
	    
	     E[a][b]=E[a][b-2]/B[a][b][a]-A[a]*C[a][b][a]+D[a][b];
	    
	     E[a][b]=E[a-1][b-2]-0.215;
	    
	     A[a]=A[a-5]+E[a][b]-B[a][b][a];
	    
	     B[a][b][a]=B[a+2][b+1][a+4]*0.941;
	    
	     A[a]=0.49;
	    
	     A[a]=A[a+2]*0.915;
	  }

    return 0;
}