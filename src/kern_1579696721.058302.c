#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(930, 510, 90, "zeros");
	float ***E = create_three_dim_float(630, 250, 740, "zeros");
	float **A = create_two_dim_float(670, 60, "zeros");
	float ***D = create_three_dim_float(730, 370, 450, "zeros");
	float **B = create_two_dim_float(940, 980, "zeros");

	for (int b = 4; b < 59; b++)
	  for (int a = 4; a < 630; a++)
	  {
	    
	     E[a][b][a]=E[a-2][b-4][a-4]*B[a][b];
	    
	     A[a][b]=A[a-2][b]/0.508;
	    
	     A[a][b]=A[a-4][b-1]/C[a][b][a]-E[a][b][a]*D[a][b][a];
	    
	     A[a][b]=A[a+3][b+1]-0.422;
	    
	     C[a][b][a]=C[a][b+2][a]+0.13;
	    
	     C[a][b][a]=0.488;
	    
	     D[a][b][a]=0.084;
	     D[a+4][b+1][a+1]=0.712;
	  }

    return 0;
}