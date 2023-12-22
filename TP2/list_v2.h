//
// Created by altaks on 01/12/23.
//

#ifndef LIST_V2_H
#define LIST_V2_H

typedef long long         element; // element -> long long type
typedef struct list_v2_t* list_v2_p; // list_v1_p -> struct list_v1_t* type

extern list_v2_p list_v2_new();
extern void   list_v2_insert(list_v2_p list, element value);
extern void   list_v2_append(list_v2_p list, element value);

#endif //LIST_V2_H
