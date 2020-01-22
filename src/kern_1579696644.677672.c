#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(330, 480, "ones");
	double ***B = create_three_dim_double(450, 700, 70, "ones");
	double ***E = create_three_dim_double(380, 610, 510, "ones");
	double ***A = create_three_dim_double(710, 670, 690, "ones");
	double **D = create_two_dim_double(380, 530, "ones");

	for (int b = 4; b < 480; b++)
	  for (int a = 3; a < 330; a++)
	  {
	    
	     C[a][b]=C[a][b-1]/0.007;
	    
	     A[a][b][a]=A[a+1][b][a+1]*0.5;
	    
	     A[a][b][a]=C[a][b];
	    
	     E[a][b][a]=0.894;
	     E[a+1][b+1][a+3]=0.78;
	    
	     D[a][b]=E[a][b][a]/A[a][b][a];
	     D[a+4][b+4]=A[a][b][a]*C[a][b]+B[a][b][a]-E[a][b][a];
	    
	     A[a][b][a]=D[a][b]+B[a][b][a]-E[a][b][a]*C[a][b];
	     C[a][b]=D[a][b+3]-A[a][b][a]/B[a][b][a]+C[a][b]*E[a][b][a];
	  }

    return 0;
}