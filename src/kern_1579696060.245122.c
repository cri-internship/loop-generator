#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(940, "zeros");
	int ***B = create_three_dim_int(280, 970, 680, "zeros");
	int *A = create_one_dim_int(620, "zeros");
	int **C = create_two_dim_int(590, 560, "zeros");

	for (int b = 4; b < 966; b++)
	  for (int a = 4; a < 275; a++)
	  {
	    
	     B[a][b][a]=B[a+3][b+4][a+5]-39;
	    
	     A[a]=A[a+1]/C[a][b]+D[a]-B[a][b][a];
	    
	     B[a][b][a]=A[a];
	  }

    return 0;
}