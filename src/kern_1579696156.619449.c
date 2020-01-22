#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(780, "ones");
	int ***A = create_three_dim_int(540, 800, 1000, "ones");
	int ***E = create_three_dim_int(160, 340, 190, "ones");
	int *D = create_one_dim_int(190, "ones");
	int *B = create_one_dim_int(490, "ones");

	for (int b = 5; b < 340; b++)
	  for (int a = 5; a < 160; a++)
	  {
	    
	     B[a]=B[a-5]/C[a]+A[a][b][a]-E[a][b][a];
	    
	     A[a][b][a]=A[a+1][b][a+1]+45;
	    
	     E[a][b][a]=36;
	     E[a][b-5][a-5]=9;
	    
	     A[a][b][a]=D[a]-B[a]/E[a][b][a]+B[a];
	    
	     C[a]=18;
	     C[a-5]=32;
	    
	     B[a]=B[a]/E[a][b][a]+A[a][b][a]*C[a]-D[a];
	     C[a]=B[a-1]*C[a]-D[a]+A[a][b][a]/E[a][b][a];
	    
	     D[a]=C[a]/E[a][b][a]+D[a]-A[a][b][a]*B[a];
	     E[a][b][a]=C[a+3]/B[a]*A[a][b][a];
	  }

    return 0;
}