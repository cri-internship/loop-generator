#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(900, 730, 480, "random");
	double **A = create_two_dim_double(550, 370, "random");
	double ***B = create_three_dim_double(780, 290, 540, "random");
	double **E = create_two_dim_double(560, 300, "random");
	double **C = create_two_dim_double(870, 240, "random");

	for (int c = 1; c < 369; c++)
	  for (int b = 5; b < 547; b++)
	    for (int a = 5; a < 547; a++)
	    {
	      
	      A[a][b]=A[a-5][b-1]*E[a][b]-C[a][b]+B[a][b][c]/D[a][b][c];
	      
	      A[a][b]=0.266;
	    }

    return 0;
}