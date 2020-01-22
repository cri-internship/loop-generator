#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(250, 860, 320, "ones");
	int **E = create_two_dim_int(710, 250, "ones");
	int ***D = create_three_dim_int(30, 600, 170, "ones");
	int **A = create_two_dim_int(40, 140, "ones");
	int *C = create_one_dim_int(900, "ones");

	for (int b = 4; b < 249; b++)
	  for (int a = 4; a < 28; a++)
	  {
	    
	     E[a][b]=E[a-4][b-4]/40;
	    
	     C[a]=C[a-3]*26;
	    
	     E[a][b]=E[a+5][b+1]+B[a][b][a]/D[a][b][a]-A[a][b]*C[a];
	    
	     D[a][b][a]=E[a][b]-27+C[a]/E[a][b];
	     D[a+1][b+1][a+2]=C[a]*A[a][b]/B[a][b][a];
	    
	     B[a][b][a]=C[a]+D[a][b][a]/E[a][b]-A[a][b];
	     B[a+5][b+1][a+1]=C[a]/37-A[a][b];
	    
	     B[a][b][a]=25;
	  }

    return 0;
}