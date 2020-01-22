#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(660, 10, 310, "random");
	int ***C = create_three_dim_int(640, 60, 430, "random");
	int **E = create_two_dim_int(980, 210, "random");
	int *A = create_one_dim_int(410, "random");
	int **D = create_two_dim_int(710, 590, "random");

	for (int b = 5; b < 10; b++)
	  for (int a = 5; a < 410; a++)
	  {
	    
	     B[a][b][a]=E[a][b]/31+D[a][b]-A[a];
	     B[a+4][b][a+2]=C[a][b][a]-31/D[a][b];
	    
	     E[a][b]=B[a][b][a]-A[a]+25;
	     E[a-5][b-5]=B[a][b][a]/D[a][b]-A[a]*C[a][b][a];
	    
	     A[a]=27;
	     A[a-2]=5;
	    
	     E[a][b]=C[a][b][a]/D[a][b]-B[a][b][a];
	     B[a][b][a]=C[a][b-5][a-1]-E[a][b]+A[a]/D[a][b]*B[a][b][a];
	  }

    return 0;
}