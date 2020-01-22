#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(190, 70, 560, "ones");
	double **B = create_two_dim_double(580, 980, "ones");
	double ***C = create_three_dim_double(820, 580, 570, "ones");
	double **A = create_two_dim_double(620, 670, "ones");

	for (int c = 4; c < 560; c++)
	  for (int b = 3; b < 70; b++)
	    for (int a = 4; a < 190; a++)
	    {
	      
	      D[a][b][c]=D[a-3][b-2][c-4]+B[a][b];
	      
	      B[a][b]=0.249;
	      float  var_a=B[a][b]+0.39;
	      
	      A[a][b]=A[a-3][b]+0.823;
	      
	      D[a][b][c]=C[a][b][c]-A[a][b];
	      
	      double var_b=D[a][b][c]+0.744;
	      double var_c=D[a-4][b-3][c-1]-0.387;
	    }

    return 0;
}