#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(50, "ones");
	double ***B = create_three_dim_double(690, 780, 200, "ones");
	double ***E = create_three_dim_double(450, 130, 580, "ones");
	double **C = create_two_dim_double(980, 120, "ones");
	double *A = create_one_dim_double(970, "ones");

	for (int b = 3; b < 120; b++)
	  for (int a = 5; a < 690; a++)
	  {
	    
	     C[a][b]=0.956*E[a][b][a]/A[a]-B[a][b][a];
	     C[a][b-1]=A[a]-D[a]*B[a][b][a]+E[a][b][a];
	    
	     A[a]=0.673;
	     A[a-5]=0.071;
	    
	     C[a][b]=B[a][b][a]+0.442/D[a];
	    
	     E[a][b][a]=B[a][b][a]-C[a][b]+E[a][b][a]/D[a]*C[a][b];
	     D[a]=B[a][b-3][a]/E[a][b][a]+D[a]*A[a];
	  }

    return 0;
}