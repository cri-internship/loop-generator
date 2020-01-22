#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(490, 270, "zeros");
	double ***D = create_three_dim_double(240, 10, 1000, "zeros");
	double ***A = create_three_dim_double(400, 530, 580, "zeros");
	double ***C = create_three_dim_double(730, 300, 60, "zeros");

	for (int b = 5; b < 7; b++)
	  for (int a = 3; a < 236; a++)
	  {
	    
	     D[a][b][a]=D[a-3][b-5][a]+B[a][b]-C[a][b][a]/A[a][b][a];
	    
	     D[a][b][a]=D[a+3][b+3][a+4]-0.038;
	    
	     D[a][b][a]=D[a][b+3][a]+0.828-B[a][b];
	    
	     C[a][b][a]=C[a+3][b+5][a+4]+D[a][b][a];
	    
	     C[a][b][a]=0.185;
	    
	     D[a][b][a]=B[a][b]/D[a][b][a];
	     A[a][b][a]=B[a+2][b]/D[a][b][a];
	  }

    return 0;
}