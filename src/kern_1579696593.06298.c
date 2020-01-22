#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(260, 140, "zeros");
	double *A = create_one_dim_double(30, "zeros");
	double *B = create_one_dim_double(390, "zeros");
	double *C = create_one_dim_double(800, "zeros");

	for (int d = 2; d < 140; d++)
	  for (int c = 5; c < 25; c++)
	    for (int b = 5; b < 25; b++)
	      for (int a = 5; a < 25; a++)
	      {
	        
	       C[a]=C[a-5]/D[a][b]-0.153;
	        
	       A[a]=A[a-1]/0.941;
	        
	       A[a]=A[a+5]*0.268;
	        
	       D[a][b]=B[a]/C[a]*A[a];
	       D[a][b-2]=C[a];
	        
	       C[a]=0.399;
	        
	       B[a]=C[a]-A[a];
	       B[a-2]=A[a];
	      }

    return 0;
}