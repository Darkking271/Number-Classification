/**
 * Author Alex
 *
 * A simple program that generates 26 random 3 digit numbers and sorts
 * them by their individual numbers. For example, the number 664 would
 * be classified as all evens, and 645 would be classified as mixed.
 * The four classifications are evens(862), odds(379), mixed(892), and
 * pairs(883). It will als0 display all numbers generated.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "type_check.h"

/** Node
 * Simple linked list node structure
 */
typedef struct Node{
    int x;
    struct Node *next;
}node;

int check_num(int num);
int check_type(int nums[3]);
void add_to_list(int num, node *list);
void display_lists(char text[20], node *list);

/** main
 * Initializes linked list structures, and generates the numbers
 * while sorting and storing them. Finally it calls to display
 * the lists.
 * @return 0
 */
int main(){
    srand(time(NULL)); //Gains access to clock for random numbers

    //Allocates memory for lists
    node *all = malloc(sizeof(node));
    node *evens = malloc(sizeof(node)); //type = 0
    node *odds = malloc(sizeof(node));  //type = 1
    node *mixed = malloc(sizeof(node)); //type = 2
    node *pairs = malloc(sizeof(node)); //type = 3

    //Generates random number, and checks the characteristic
    for(int i = 0; i < 26; ++i){
        int num = rand() % 900 + 100;
        add_to_list(num, all);
        int type = check_num(num);
        if(type == 0)
            add_to_list(num, evens);
        else if(type == 1)
            add_to_list(num, odds);
        else if(type == 2)
            add_to_list(num, mixed);
        else if(type == 3)
            add_to_list(num, pairs);
    }

    //Displays the lists
    display_lists("The numbers...", all);
    display_lists("The evens...", evens);
    display_lists("The odds...", odds);
    display_lists("The mixed...", mixed);
    display_lists("The pairs...", pairs);

    return 0;
}

/** display_lists
 * Displays desired text header, as well as the lists passed into it.
 * @param text
 * @param list
 */
void display_lists(char text[20], node *list) {
    printf("%s\n", text);
    node *current = list;
    while(current->next != NULL){
        printf("%d ", current->x);
        current = current->next;
    }
    printf("\n");
}

/** add_to_list
 * Takes a number, and the desired list, and adds the number to
 * the end of the list.
 * @param num
 * @param list
 */
void add_to_list(int num, node *list) {
    node *current = list;
    while (current->next != NULL) {
        current = current->next;
    }
    current->x = num;
    current->next = malloc(sizeof(node));
    current->next->next = NULL;
}