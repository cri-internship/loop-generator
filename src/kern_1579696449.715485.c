#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(980, 910, 870, "random");
	int ***A = create_three_dim_int(900, 490, 90, "random");
	int ***C = create_three_dim_int(90, 790, 610, "random");
	int ***D = create_three_dim_int(350, 620, 660, "random");
	int *E = create_one_dim_int(940, "random");

	for (int b = 0; b < 616; b++)
	  for (int a = 4; a < 86; a++)
	  {
	    
	     E[a]=E[a]*9/D[a][b][a]+C[a][b][a];
	     E[a]=A[a][b][a]/D[a][b][a]*A[a][b][a]-C[a][b][a];
	    
	     E[a]=E[a+4]*41;
	    
	     B[a][b][a]=B[a+3][b+4][a]+E[a]-E[a]*A[a][b][a]/C[a][b][a];
	    
	     C[a][b][a]=C[a+4][b][a+4]-46;
	    
	     D[a][b][a]=D[a+1][b+4][a+1]*42;
	    
	     C[a][b][a]=16;
	    
	     C[a][b][a]=B[a][b][a]+A[a][b][a]-C[a][b][a]*E[a];
	     D[a][b][a]=B[a+3][b+4][a+3]+6;
	  }

    return 0;
}