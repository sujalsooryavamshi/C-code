#include <stdio.h>
#include <stdlib.h>  // Add this line for the main() function

#define MAX 4

struct queue {
    int front, rear;
    int data[MAX];
};

void enque(struct queue *sp, int x);
int deque(struct queue *sp);
void display(struct queue sp);
int isfull(struct queue *sp);
int isempty(struct queue *sp);
void BFS(struct queue *sp);  // Corrected the parameter type

int main() {  // Added the return type
    int x, y;
    struct queue sp;
    sp.front = -1;
    sp.rear = -1;
    BFS(&sp);
    return 0;  // Added return statement
}

void enque(struct queue *sp, int x) {
    if (sp->front == -1 && sp->rear == -1) {
        sp->front = sp->rear = 0;
        sp->data[sp->rear] = x;
    } else {
        ++sp->rear;
        sp->data[sp->rear] = x;
    }
}

int deque(struct queue *sp) {
    int x;
     if(sp->front == sp->rear) {
        x = sp->data[sp->front];
        sp->front = sp->rear = -1;
        return (x);
    } else {
        x = sp->data[sp->front];
        sp->front++;
        return (x);
    }
}

int isfull(struct queue *sp) {
    if (sp->rear == MAX - 1)
        return (1);
    else
        return (0);
}

int isempty(struct queue *sp) {
    if (sp->rear == -1 && sp->front == -1)
        return (1);
    else
        return (0);
}

void BFS(struct queue *sp) {
    int i = 1,j;
    int visited[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int adj[9][9] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 1, 1, 0},
        {0, 0, 1, 0, 0, 0, 0, 0, 1},
        {0, 0, 1, 0, 0, 0, 0, 0, 1},
        {0, 0, 0, 1, 0, 0, 0, 0, 1},
        {0, 0, 0, 1, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 1, 1, 1, 1, 0},
    };  // Added commas between rows

    visited[i] = 1;
    printf("The visited nodes %d\t", i);
    enque(sp, i);
    while (!isempty(sp)) {
        int node = deque(sp);
        for ( j = 0; j <8; ++j) {
            if (adj[node][j] == 1 && visited[j] == 0) {
                printf("%d\t", j);
                visited[j] = 1;
                enque(sp, j);
            }
        }
    }
    printf("%d\t",j);
}
