#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(890, 350, "zeros");
	int *B = create_one_dim_int(850, "zeros");
	int *A = create_one_dim_int(290, "zeros");
	int **C = create_two_dim_int(50, 70, "zeros");
	int ***D = create_three_dim_int(320, 430, 220, "zeros");

	for (int b = 2; b < 68; b++)
	  for (int a = 1; a < 49; a++)
	  {
	    
	     D[a][b][a]=D[a-1][b-2][a-1]*A[a]/E[a][b];
	    
	     C[a][b]=B[a]+C[a][b]/45;
	     B[a]=C[a][b];
	    
	     C[a][b]=C[a+1][b+2]*28;
	    
	     A[a]=B[a]-E[a][b];
	     A[a+3]=D[a][b][a]+E[a][b];
	    
	     D[a][b][a]=28;
	  }

    return 0;
}