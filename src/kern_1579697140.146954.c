#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(920, 300, 20, "zeros");
	int **A = create_two_dim_int(200, 40, "zeros");
	int *B = create_one_dim_int(830, "zeros");
	int ***E = create_three_dim_int(960, 640, 100, "zeros");
	int *D = create_one_dim_int(780, "zeros");

	for (int b = 4; b < 40; b++)
	  for (int a = 5; a < 200; a++)
	  {
	    
	     D[a]=D[a-1]*11;
	    
	     B[a]=30;
	     float  var_a=B[a]/8;
	    
	     E[a][b][a]=E[a+1][b+2][a+5]*10;
	    
	     D[a]=B[a]/C[a][b][a];
	    
	     C[a][b][a]=A[a][b]+D[a]-D[a];
	     B[a]=A[a-3][b-1]+C[a][b][a];
	    
	     E[a][b][a]=E[a][b][a]-A[a][b]*D[a]+B[a]/C[a][b][a];
	     D[a]=E[a-5][b-3][a-2]-C[a][b][a]+B[a]*D[a];
	    
	     int var_b=A[a][b]/19;
	     int var_c=A[a-5][b-4]+40;
	  }

    return 0;
}