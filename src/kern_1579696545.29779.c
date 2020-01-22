#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(630, 690, "ones");
	int **A = create_two_dim_int(520, 710, "ones");
	int ***D = create_three_dim_int(650, 770, 350, "ones");
	int *B = create_one_dim_int(470, "ones");
	int **C = create_two_dim_int(800, 40, "ones");

	for (int b = 4; b < 35; b++)
	  for (int a = 5; a < 515; a++)
	  {
	    
	     A[a][b]=A[a-1][b]+2;
	    
	     E[a][b]=E[a-4][b-4]-6;
	    
	     C[a][b]=C[a][b+5]*35;
	    
	     A[a][b]=B[a]+C[a][b]/D[a][b][a];
	    
	     D[a][b][a]=A[a][b]*B[a]-E[a][b];
	     D[a-3][b][a-5]=9*C[a][b];
	    
	     int var_a=A[a][b]-32;
	     int var_b=A[a+5][b+3]/38;
	  }

    return 0;
}