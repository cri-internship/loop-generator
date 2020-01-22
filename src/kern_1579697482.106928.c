#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(460, 610, "ones");
	int **A = create_two_dim_int(170, 630, "ones");
	int ***E = create_three_dim_int(670, 570, 630, "ones");
	int ***D = create_three_dim_int(640, 360, 10, "ones");
	int ***B = create_three_dim_int(890, 410, 950, "ones");

	for (int b = 5; b < 410; b++)
	  for (int a = 5; a < 169; a++)
	  {
	    
	     C[a][b]=C[a-3][b-2]/A[a][b]+D[a][b][a]-E[a][b][a];
	    
	     A[a][b]=A[a+1][b+2]*16;
	    
	     A[a][b]=B[a][b][a]-C[a][b]+B[a][b][a];
	    
	     E[a][b][a]=B[a][b][a]+E[a][b][a]-C[a][b]*D[a][b][a]/A[a][b];
	     B[a][b][a]=B[a][b-5][a-4]-C[a][b]+A[a][b]*E[a][b][a];
	    
	     C[a][b]=C[a][b]/E[a][b][a];
	     D[a][b][a]=C[a-5][b]*A[a][b]/E[a][b][a]-D[a][b][a]+B[a][b][a];
	  }

    return 0;
}