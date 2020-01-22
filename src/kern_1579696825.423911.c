#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(440, "random");
	double ***D = create_three_dim_double(100, 60, 160, "random");
	double **A = create_two_dim_double(990, 680, "random");
	double **E = create_two_dim_double(60, 780, "random");
	double ***B = create_three_dim_double(910, 720, 970, "random");

	for (int b = 5; b < 59; b++)
	  for (int a = 4; a < 55; a++)
	  {
	    
	     D[a][b][a]=D[a-2][b-3][a-4]+0.932;
	    
	     E[a][b]=E[a][b-5]-0.166/A[a][b]*D[a][b][a]+B[a][b][a];
	    
	     B[a][b][a]=B[a+3][b+4][a+5]*0.968;
	    
	     D[a][b][a]=D[a+4][b+1][a+4]/0.563;
	    
	     E[a][b]=E[a][b]/D[a][b][a]*A[a][b]+C[a]-B[a][b][a];
	     C[a]=E[a+5][b+3]/B[a][b][a];
	  }

    return 0;
}