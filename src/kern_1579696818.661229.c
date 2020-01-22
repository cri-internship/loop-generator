#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(480, "random");
	int ***A = create_three_dim_int(890, 990, 910, "random");
	int **B = create_two_dim_int(130, 960, "random");
	int ***C = create_three_dim_int(400, 780, 570, "random");
	int ***D = create_three_dim_int(590, 860, 700, "random");

	for (int b = 0; b < 855; b++)
	  for (int a = 0; a < 125; a++)
	  {
	    
	     E[a]=E[a+3]/B[a][b]-30+A[a][b][a]*C[a][b][a];
	    
	     D[a][b][a]=D[a+1][b+5][a+2]*50;
	    
	     A[a][b][a]=E[a]-C[a][b][a]+B[a][b]*D[a][b][a];
	     C[a][b][a]=E[a+5]+B[a][b]-D[a][b][a]/A[a][b][a]*C[a][b][a];
	    
	     B[a][b]=B[a][b]/E[a]*D[a][b][a];
	     E[a]=B[a+5][b+1]+C[a][b][a];
	    
	     D[a][b][a]=D[a][b][a]-A[a][b][a]/E[a]+B[a][b];
	     D[a][b][a]=D[a+1][b+5][a+3]+B[a][b];
	    
	     B[a][b]=B[a][b]-E[a]+A[a][b][a]/C[a][b][a];
	     C[a][b][a]=B[a+1][b+5]*C[a][b][a]/48;
	  }

    return 0;
}