#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(470, "random");
	int ***C = create_three_dim_int(980, 950, 430, "random");
	int ***D = create_three_dim_int(450, 120, 120, "random");
	int *E = create_one_dim_int(650, "random");
	int ***A = create_three_dim_int(230, 830, 560, "random");

	for (int b = 4; b < 119; b++)
	  for (int a = 5; a < 445; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b-2][a-3]-14;
	    
	     E[a]=E[a-1]-38;
	    
	     B[a]=B[a+5]-E[a];
	    
	     C[a][b][a]=C[a][b+1][a+1]/31*B[a]-A[a][b][a];
	    
	     B[a]=C[a][b][a];
	    
	     D[a][b][a]=39;
	     D[a][b+1][a+5]=43;
	    
	     C[a][b][a]=C[a][b][a]-A[a][b][a]+21/D[a][b][a]*E[a];
	     B[a]=C[a-5][b-4][a-2]*B[a]-D[a][b][a]+A[a][b][a]/E[a];
	  }

    return 0;
}