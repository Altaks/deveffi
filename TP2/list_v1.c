//
// Created by altaks on 01/12/23.
//

#include <stdlib.h>
#include <stdio.h>

#include "list_v1.h"

typedef struct cell_t* cell_p; // cell_p type -> struct cell_t*

typedef struct cell_t {
    element value;
    cell_p next;
} cell_t;

typedef struct list_v1_t {
    cell_p first;
} list_v1_t;

cell_p cell_new(int value){
    cell_p cell = (cell_p) malloc(sizeof(cell_t));
    cell->value = value;
    cell->next = NULL;
    return cell;
}

list_v1_p list_v1_new(){
    return (list_v1_p) malloc(sizeof(list_v1_t));
}

void list_v1_append(list_v1_p list, element value) {
    // Go to the end of the linked list
    if(list->first == NULL) {
        list->first = cell_new(value);
        return;
    }

    cell_p current = list->first;
    while(current->next != NULL) current = current->next;

    // create new cell
    cell_p new_cell = cell_new(value);

    // link new cell to linked list
    current->next = new_cell;
}

void list_v1_insert(list_v1_p list, element value){
    // Create new cell
    cell_p new_cell = cell_new(value);

    // Next cell of new celle is list head
    new_cell->next = list->first;

    // Replace linked list head
    list->first = new_cell;
}
