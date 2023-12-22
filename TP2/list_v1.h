//
// Created by altaks on 01/12/23.
//

#ifndef LIST_H
#define LIST_H

typedef long long         element; // element -> long long type
typedef struct list_v1_t* list_v1_p; // list_v1_p -> struct list_v1_t* type

extern list_v1_p list_v1_new();
extern void   list_v1_insert(list_v1_p list, element value);
extern void   list_v1_append(list_v1_p list, element value);

#endif //LIST_H
