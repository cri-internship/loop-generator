#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(790, "zeros");
	int **E = create_two_dim_int(600, 400, "zeros");
	int ***C = create_three_dim_int(230, 490, 30, "zeros");
	int **A = create_two_dim_int(710, 60, "zeros");
	int ***D = create_three_dim_int(710, 780, 600, "zeros");

	for (int b = 2; b < 60; b++)
	  for (int a = 3; a < 230; a++)
	  {
	    
	     C[a][b][a]=C[a-3][b][a-1]*48;
	    
	     E[a][b]=E[a+5][b+4]*35;
	    
	     E[a][b]=E[a+3][b+5]-17;
	    
	     int var_a=A[a][b]+37;
	     int var_b=A[a-1][b-2]-32;
	    
	     D[a][b][a]=B[a]/C[a][b][a]-A[a][b];
	     E[a][b]=B[a-2]*E[a][b]-D[a][b][a]/1;
	  }

    return 0;
}