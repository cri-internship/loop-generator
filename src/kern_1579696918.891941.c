#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(630, 140, "zeros");
	double **E = create_two_dim_double(280, 450, "zeros");
	double ***A = create_three_dim_double(430, 590, 990, "zeros");
	double *B = create_one_dim_double(270, "zeros");
	double ***D = create_three_dim_double(730, 70, 130, "zeros");

	for (int b = 0; b < 67; b++)
	  for (int a = 0; a < 276; a++)
	  {
	    
	     C[a][b]=C[a+2][b+4]*0.791;
	    
	     C[a][b]=0.88;
	    
	     E[a][b]=0.545;
	     E[a+4][b+2]=0.518;
	    
	     D[a][b][a]=D[a][b][a]/A[a][b][a]-E[a][b]*B[a]+C[a][b];
	     A[a][b][a]=D[a+2][b+3][a]*C[a][b];
	  }

    return 0;
}