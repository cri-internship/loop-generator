#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(490, 890, 740, "zeros");
	float *E = create_one_dim_float(570, "zeros");
	float ***B = create_three_dim_float(980, 400, 850, "zeros");
	float **D = create_two_dim_float(540, 430, "zeros");
	float **C = create_two_dim_float(100, 730, "zeros");

	for (int b = 3; b < 428; b++)
	  for (int a = 3; a < 490; a++)
	  {
	    
	     D[a][b]=D[a-3][b-3]+A[a][b][a]/B[a][b][a]-C[a][b]*E[a];
	    
	     D[a][b]=D[a-1][b-1]*0.407;
	    
	     D[a][b]=D[a][b+2]/A[a][b][a]+B[a][b][a];
	    
	     A[a][b][a]=D[a][b];
	     A[a-2][b-1][a-3]=D[a][b]*E[a];
	    
	     D[a][b]=D[a][b]-C[a][b]/E[a]*A[a][b][a];
	     B[a][b][a]=D[a+1][b+1]+C[a][b]/A[a][b][a]-B[a][b][a]*E[a];
	  }

    return 0;
}