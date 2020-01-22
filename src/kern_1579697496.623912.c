#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(480, "random");
	double *D = create_one_dim_double(170, "random");
	double **C = create_two_dim_double(130, 840, "random");
	double ***E = create_three_dim_double(460, 440, 140, "random");
	double **A = create_two_dim_double(220, 40, "random");

	for (int c = 0; c < 139; c++)
	  for (int b = 0; b < 439; b++)
	    for (int a = 5; a < 165; a++)
	    {
	      
	      D[a]=D[a+5]/0.135;
	      
	      D[a]=0.233+C[a][b];
	      
	      B[a]=0.369;
	      B[a+4]=0.667;
	      
	      E[a][b][c]=0.868;
	      E[a+2][b+1][c+1]=0.855;
	    }

    return 0;
}