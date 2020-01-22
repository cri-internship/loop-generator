#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(400, 270, 660, "random");
	float ***B = create_three_dim_float(560, 860, 50, "random");
	float **E = create_two_dim_float(440, 260, "random");
	float ***A = create_three_dim_float(680, 680, 20, "random");
	float ***C = create_three_dim_float(510, 190, 980, "random");

	for (int b = 5; b < 190; b++)
	  for (int a = 3; a < 400; a++)
	  {
	    
	     D[a][b][a]=D[a][b-4][a-2]/0.038;
	    
	     D[a][b][a]=D[a-1][b-5][a]-0.173;
	    
	     D[a][b][a]=D[a-2][b-3][a-2]/0.546;
	    
	     C[a][b][a]=C[a][b][a+4]+0.423;
	    
	     E[a][b]=0.35;
	     E[a+5][b+2]=0.069;
	    
	     B[a][b][a]=0.027;
	     B[a+4][b][a+4]=0.15;
	    
	     A[a][b][a]=A[a][b][a]-C[a][b][a]+B[a][b][a]/D[a][b][a]*E[a][b];
	     B[a][b][a]=A[a][b-3][a-3]+C[a][b][a]-E[a][b]*0.094;
	  }

    return 0;
}