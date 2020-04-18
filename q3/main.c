#include <stdio.h>
#include <time.h>

int main(){
    //Create 2d array
    int arr[10][10] = {0};
    
    //Create clock
    clock_t start, end;
    int cpu_time_used;
    
    //Subscript
    start = clock();
    for(int c = 0; c<10000; c++){
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                arr[i][j];
            }
        }
    }
    end = clock();
    cpu_time_used = ((double)(end - start));
    printf("Cpu time used for accessing via subscript: %d\n",cpu_time_used);
    
    //Pointers
    start = clock();
    for(int c = 0; c < 10000; c++){
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                *(*(arr+i)+j);
            }
        }
    }
    end = clock();
    cpu_time_used = ((double)(end - start));
    printf("Cpu time used for accessing via pointers: %d\n",cpu_time_used);
    
    return 0;
}