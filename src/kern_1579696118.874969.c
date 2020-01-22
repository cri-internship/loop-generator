#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(590, 840, 60, "random");
	double ***A = create_three_dim_double(930, 30, 310, "random");
	double *B = create_one_dim_double(400, "random");
	double ***C = create_three_dim_double(270, 120, 260, "random");
	double **E = create_two_dim_double(600, 300, "random");

	for (int b = 5; b < 295; b++)
	  for (int a = 0; a < 399; a++)
	  {
	    
	     E[a][b]=E[a][b-5]-0.111;
	    
	     E[a][b]=E[a+1][b+5]+0.881;
	    
	     B[a]=0.512;
	     B[a+1]=0.349;
	    
	     B[a]=B[a]*C[a][b][a]+E[a][b]/A[a][b][a]-D[a][b][a];
	     C[a][b][a]=B[a]+D[a][b][a];
	    
	     E[a][b]=E[a][b]*B[a]+C[a][b][a]/B[a]-A[a][b][a];
	     A[a][b][a]=E[a][b+5]/D[a][b][a]-B[a]*C[a][b][a];
	  }

    return 0;
}