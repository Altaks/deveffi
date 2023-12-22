//
// Created by altaks on 01/12/23.
//

#include <stdlib.h>
#include <stdio.h>

#include "list_v2.h"

typedef struct list_v2_t* list_v2_p;

typedef struct list_v2_t {
    element *array;
    size_t array_size;
    size_t number_of_elements;
} list_v2_t;

list_v2_p list_v2_new(){
    list_v2_p list_ptr = (list_v2_p) malloc(sizeof(list_v2_t));
    list_ptr->array = (element *) malloc(sizeof(element));
    list_ptr->number_of_elements = 0;
    list_ptr->array_size = 1;
    return list_ptr;
}

void list_v2_append(list_v2_p list, element value){
    if(list->number_of_elements +1 > list->array_size){
        // allocate more memory to the list
        list->array = (element *) realloc(list->array, 2 * list->array_size * sizeof(element));
        list->array_size *= 2;
    }
    list->array[list->number_of_elements+1] = value;
    list->number_of_elements++;
}

void list_v2_insert(list_v2_p list, element value){
    if(list->number_of_elements +1 > list->array_size){
        // allocate more memory to the list
        list->array = (element *) realloc(list->array, 2 * list->array_size * sizeof(element));
        list->array_size *= 2;
    }

    // offset all values by one to the right
    for(int index = list->number_of_elements; index > 0; index--){
        list->array[index] = list->array[index-1];
    }

    // add the last value in the first cell
    list->array[0] = value;
    list->number_of_elements++;
}