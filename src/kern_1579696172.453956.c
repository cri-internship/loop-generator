#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(720, "random");
	double *A = create_one_dim_double(470, "random");
	double ***C = create_three_dim_double(220, 390, 770, "random");
	double **B = create_two_dim_double(860, 580, "random");
	double ***D = create_three_dim_double(70, 450, 640, "random");

	for (int b = 5; b < 386; b++)
	  for (int a = 4; a < 65; a++)
	  {
	    
	     D[a][b][a]=D[a-4][b-5][a-1]+B[a][b]-0.608;
	    
	     C[a][b][a]=C[a][b+4][a+4]*0.598;
	    
	     A[a]=A[a+5]*E[a]-D[a][b][a]+0.096;
	    
	     D[a][b][a]=D[a+5][b+4][a+2]-A[a]*C[a][b][a]+E[a]/A[a];
	    
	     C[a][b][a]=0.828;
	    
	     E[a]=C[a][b][a]+D[a][b][a]*B[a][b]-A[a];
	     E[a-3]=D[a][b][a];
	  }

    return 0;
}