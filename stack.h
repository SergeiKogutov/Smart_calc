#ifndef STACK_H
#define STACK_H

#include <ctype.h>
#include <float.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
  double num;
  char oper;
  struct Node *next;
} Node;

typedef struct {
  Node *top;
} Stack;

void init_stack(Stack *stack);
bool is_empty(Stack *stack);
void push_number(Stack *stack, double value);
void push_oper(Stack *stack, char op);
Node pop(Stack *stack);
Node peek(Stack *stack);

#endif