#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(50, 920, 710, "random");
	float ***C = create_three_dim_float(740, 180, 920, "random");
	float ***E = create_three_dim_float(970, 490, 710, "random");
	float **B = create_two_dim_float(910, 780, "random");
	float ***D = create_three_dim_float(600, 950, 790, "random");

	for (int b = 5; b < 180; b++)
	  for (int a = 5; a < 45; a++)
	  {
	    
	     C[a][b][a]=0.37;
	     C[a-5][b-5][a-2]=0.049;
	    
	     B[a][b]=E[a][b][a]*C[a][b][a]-D[a][b][a]+A[a][b][a];
	     B[a+2][b+1]=E[a][b][a]-A[a][b][a];
	    
	     A[a][b][a]=E[a][b][a]-B[a][b]+C[a][b][a];
	     C[a][b][a]=E[a+1][b][a+1]+B[a][b]*A[a][b][a]-D[a][b][a]/C[a][b][a];
	    
	     E[a][b][a]=D[a][b][a]-B[a][b]+C[a][b][a];
	     B[a][b]=D[a+1][b+5][a+1]+B[a][b]-0.625;
	    
	     D[a][b][a]=A[a][b][a]-D[a][b][a];
	     C[a][b][a]=A[a+5][b+5][a+4]/B[a][b]+E[a][b][a]-C[a][b][a];
	  }

    return 0;
}