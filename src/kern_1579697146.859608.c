#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(740, 260, "zeros");
	int ***D = create_three_dim_int(270, 610, 440, "zeros");
	int **E = create_two_dim_int(300, 380, "zeros");
	int ***B = create_three_dim_int(870, 620, 630, "zeros");
	int *C = create_one_dim_int(640, "zeros");

	for (int b = 0; b < 258; b++)
	  for (int a = 0; a < 265; a++)
	  {
	    
	     D[a][b][a]=D[a+1][b+4][a+4]/46;
	    
	     E[a][b]=E[a+5][b+3]*C[a]-A[a][b];
	    
	     B[a][b][a]=B[a+1][b+2][a+2]*E[a][b]-D[a][b][a]+D[a][b][a];
	    
	     E[a][b]=B[a][b][a];
	    
	     A[a][b]=E[a][b]-B[a][b][a]+D[a][b][a]/C[a];
	     A[a+3][b]=D[a][b][a];
	    
	     D[a][b][a]=E[a][b];
	    
	     B[a][b][a]=A[a][b]/E[a][b];
	     E[a][b]=A[a+1][b+2]*B[a][b][a]/C[a]-D[a][b][a]+E[a][b];
	  }

    return 0;
}