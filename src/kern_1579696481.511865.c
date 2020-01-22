#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(300, 460, "zeros");
	double **B = create_two_dim_double(930, 90, "zeros");
	double ***C = create_three_dim_double(70, 170, 910, "zeros");
	double ***A = create_three_dim_double(80, 320, 400, "zeros");
	double ***D = create_three_dim_double(920, 240, 370, "zeros");

	for (int c = 1; c < 366; c++)
	  for (int b = 2; b < 170; b++)
	    for (int a = 4; a < 70; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b-2][c-1]/0.646;
	      
	      D[a][b][c]=D[a+5][b+5][c+4]-0.628;
	      
	      E[a][b]=E[a][b+5]+0.263;
	      
	      double var_a=E[a][b]+0.406;
	      double var_b=E[a][b]+0.226;
	    }

    return 0;
}