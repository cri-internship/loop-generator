#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(710, "ones");
	float **E = create_two_dim_float(600, 580, "ones");
	float **A = create_two_dim_float(110, 460, "ones");
	float ***C = create_three_dim_float(450, 180, 340, "ones");
	float *B = create_one_dim_float(520, "ones");

	for (int c = 2; c < 579; c++)
	  for (int b = 0; b < 600; b++)
	    for (int a = 0; a < 600; a++)
	    {
	      
	      E[a][b]=E[a][b-2]/0.708;
	      
	      D[a]=D[a+2]*B[a]+C[a][b][c]-E[a][b];
	      
	      E[a][b]=E[a][b+1]-0.682;
	      
	      D[a]=0.193;
	    }

    return 0;
}