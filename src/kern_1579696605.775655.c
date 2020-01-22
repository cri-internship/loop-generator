#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(20, 630, 320, "zeros");
	int *E = create_one_dim_int(830, "zeros");
	int **C = create_two_dim_int(390, 710, "zeros");
	int **D = create_two_dim_int(450, 210, "zeros");
	int **B = create_two_dim_int(30, 330, "zeros");

	for (int b = 4; b < 207; b++)
	  for (int a = 5; a < 19; a++)
	  {
	    
	     B[a][b]=B[a-5][b-4]-A[a][b][a]/E[a]+C[a][b]*D[a][b];
	    
	     E[a]=E[a-3]/B[a][b];
	    
	     D[a][b]=D[a+5][b+3]+C[a][b]-29/E[a];
	    
	     B[a][b]=E[a]/A[a][b][a]+D[a][b];
	    
	     A[a][b][a]=C[a][b]*D[a][b]/E[a]+B[a][b];
	     A[a+1][b+4][a]=B[a][b]*D[a][b];
	    
	     int var_c=B[a][b]*31;
	     int var_d=B[a][b-2]-34;
	  }

    return 0;
}