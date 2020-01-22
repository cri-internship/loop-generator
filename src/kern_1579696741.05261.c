#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(660, 30, "ones");
	double *D = create_one_dim_double(860, "ones");
	double **B = create_two_dim_double(420, 210, "ones");
	double ***A = create_three_dim_double(630, 660, 460, "ones");
	double ***E = create_three_dim_double(360, 790, 60, "ones");

	for (int c = 5; c < 60; c++)
	  for (int b = 3; b < 30; b++)
	    for (int a = 5; a < 358; a++)
	    {
	      
	      D[a]=0.628;
	      float  var_a=D[a]*0.74;
	      
	      D[a]=D[a-5]-B[a][b]*E[a][b][c]/A[a][b][c];
	      
	      C[a][b]=C[a-1][b-3]+0.878;
	      
	      D[a]=D[a+1]+0.781;
	      
	      A[a][b][c]=0.914;
	      A[a-2][b-2][c-5]=0.312;
	      
	      E[a][b][c]=E[a][b][c]/0.906;
	      B[a][b]=E[a+2][b+3][c]-D[a]/B[a][b]*D[a];
	      
	      double var_b=E[a][b][c]/0.851;
	      double var_c=E[a][b-2][c-2]+0.735;
	    }

    return 0;
}