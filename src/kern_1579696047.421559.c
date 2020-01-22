#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(210, 640, 790, "ones");
	double ***E = create_three_dim_double(840, 790, 720, "ones");
	double *B = create_one_dim_double(960, "ones");
	double ***D = create_three_dim_double(990, 20, 420, "ones");
	double **C = create_two_dim_double(980, 780, "ones");

	for (int b = 0; b < 638; b++)
	  for (int a = 5; a < 208; a++)
	  {
	    
	     A[a][b][a]=A[a+2][b+2][a]/B[a]*E[a][b][a];
	    
	     C[a][b]=C[a+5][b+5]*D[a][b][a]+A[a][b][a];
	    
	     B[a]=0.225;
	     B[a-5]=0.324;
	    
	     E[a][b][a]=0.626;
	     E[a+3][b+3][a+4]=0.539;
	  }

    return 0;
}