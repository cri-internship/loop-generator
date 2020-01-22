#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(260, 590, "zeros");
	int ***D = create_three_dim_int(860, 960, 350, "zeros");
	int *B = create_one_dim_int(470, "zeros");
	int ***A = create_three_dim_int(930, 130, 570, "zeros");
	int ***E = create_three_dim_int(200, 820, 340, "zeros");

	for (int b = 1; b < 126; b++)
	  for (int a = 5; a < 200; a++)
	  {
	    
	     B[a]=B[a-2]/E[a][b][a]-C[a][b]*26;
	    
	     A[a][b][a]=A[a][b][a-1]-B[a]/E[a][b][a]*B[a];
	    
	     A[a][b][a]=A[a+4][b+4][a+2]+D[a][b][a];
	    
	     B[a]=39;
	    
	     E[a][b][a]=6;
	     E[a-1][b][a-3]=36;
	    
	     B[a]=A[a][b][a]/37+B[a]*C[a][b];
	     D[a][b][a]=A[a-5][b-1][a-2]*B[a]+E[a][b][a]-C[a][b]/D[a][b][a];
	  }

    return 0;
}