#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(430, 720, "random");
	double ***C = create_three_dim_double(300, 640, 620, "random");
	double ***E = create_three_dim_double(730, 130, 750, "random");
	double **A = create_two_dim_double(30, 690, "random");
	double ***B = create_three_dim_double(890, 300, 800, "random");

	for (int b = 5; b < 686; b++)
	  for (int a = 4; a < 25; a++)
	  {
	    
	     A[a][b]=A[a-1][b]-0.355;
	    
	     A[a][b]=A[a+5][b+4]/D[a][b]-B[a][b][a];
	    
	     A[a][b]=A[a][b]-E[a][b][a]+C[a][b][a]/C[a][b][a];
	     B[a][b][a]=A[a-4][b-5]+C[a][b][a]/B[a][b][a]-D[a][b]*E[a][b][a];
	  }

    return 0;
}