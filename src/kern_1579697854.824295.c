#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(880, 820, 100, "random");
	double ***A = create_three_dim_double(290, 400, 550, "random");
	double ***D = create_three_dim_double(750, 790, 970, "random");
	double ***C = create_three_dim_double(250, 200, 640, "random");

	for (int b = 4; b < 400; b++)
	  for (int a = 5; a < 290; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-3][a-5]*0.29;
	    
	     B[a][b][a]=B[a+5][b+2][a+5]-0.807;
	    
	     C[a][b][a]=A[a][b][a]-D[a][b][a]/0.548;
	     A[a][b][a]=A[a-2][b-4][a-4]*B[a][b][a];
	  }

    return 0;
}