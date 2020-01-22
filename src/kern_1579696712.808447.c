#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(50, 740, 50, "zeros");
	int ***E = create_three_dim_int(1000, 330, 410, "zeros");
	int *D = create_one_dim_int(40, "zeros");
	int **B = create_two_dim_int(470, 230, "zeros");
	int ***C = create_three_dim_int(210, 450, 680, "zeros");

	for (int b = 4; b < 228; b++)
	  for (int a = 4; a < 40; a++)
	  {
	    
	     D[a]=D[a-4]/18;
	    
	     C[a][b][a]=C[a-2][b-4][a-3]-9;
	    
	     B[a][b]=B[a+1][b+2]-E[a][b][a]/C[a][b][a];
	    
	     D[a]=38;
	    
	     int var_a=E[a][b][a]-31;
	     int var_b=E[a-2][b-2][a-2]+15;
	    
	     C[a][b][a]=C[a][b][a]/30-A[a][b][a];
	     B[a][b]=C[a-3][b-2][a-3]*32;
	  }

    return 0;
}