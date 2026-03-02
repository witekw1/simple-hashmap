#include <stdlib.h>
#include <string.h>

typedef struct{
	char*** array; //array of arrays of strings
	int size;
} Map;

void init_map(Map* map){
	map->size = 0;
	map->array = malloc(sizeof(char)*20000*100); 
}

int push_back(Map* map, char elem){

}

int main(){
}
