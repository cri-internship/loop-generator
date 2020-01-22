#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(170, 210, 460, "random");
	int ***B = create_three_dim_int(970, 660, 680, "random");
	int ***D = create_three_dim_int(840, 160, 90, "random");
	int **C = create_two_dim_int(120, 240, "random");
	int ***A = create_three_dim_int(60, 330, 760, "random");

	for (int b = 5; b < 160; b++)
	  for (int a = 5; a < 58; a++)
	  {
	    
	     E[a][b][a]=E[a-1][b-5][a-5]-33;
	    
	     E[a][b][a]=E[a+4][b+4][a]-C[a][b]+D[a][b][a];
	    
	     B[a][b][a]=B[a+2][b][a]/A[a][b][a]+43*A[a][b][a]-E[a][b][a];
	    
	     A[a][b][a]=A[a+1][b+1][a+2]/21;
	    
	     A[a][b][a]=34;
	    
	     A[a][b][a]=D[a][b][a]*B[a][b][a]+A[a][b][a];
	     C[a][b]=D[a-5][b-5][a-1]+E[a][b][a]-B[a][b][a];
	    
	     int var_a=A[a][b][a]+24;
	     int var_b=A[a][b+5][a]*8;
	  }

    return 0;
}