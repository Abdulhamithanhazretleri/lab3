#include <stdio.h>


#include "string.h"


#include <stdlib.h>













struct node {
    char songName[50];
    int songNumber;
    struct node* prev;
    struct node* next;
};

void TürkiyeCumhuriyetiAnkaraÜniversitesiBilgisayarMühendisliğiBölümBaşkanlığınaHediyemdir(struct node *b,struct node *s,int i){
    char harf;
    int u;
    scanf("%c",&harf);
    scanf("%d",&u);
    struct node *cur1 = b;
    struct node *cur2 = s;
    int sayac1 = 1;
        int sayac2 = i-1;
    if(harf == 'B'){
        while (cur1 != NULL){
            if(cur1->songNumber == sayac1) {
                printf("%s\n", cur1->songName);
                sayac1 = sayac1 + u+1;

            }

            cur1 = cur1->next;
        }
    }
    if(harf == 'S'){
        while (cur2 != NULL){
            if(cur2->songNumber == sayac2) {
                printf("%s\n", cur2->songName);
                sayac2 = sayac2 - (u+1);

            }

            cur2 = cur2->prev;
        }
    }
};




















int main() {
    struct node *b = NULL;
    struct node *s = NULL;
    int i = 1;
    while (1) {
        char name[50];
        fgets(name, 50, stdin);
        for (int i = 0; i < 50; i++) {
            if (name[i] == '\n') {
                name[i] = '\0';
                break;
            }
        }
        if (strcmp(name, "-1") == 0) {
            break;
        } else {

            struct node *new_node = (struct node *) malloc(sizeof(struct node));
            strcpy(new_node->songName,name);
            new_node->songNumber = i;
            i++;
            new_node->next = NULL;
            new_node->prev = NULL;
            if (b == NULL) {
                b = new_node;
                s = new_node;
            } else {
                s->next = new_node;
                new_node->prev = s;
                s = new_node;
            }
        }
    }

    TürkiyeCumhuriyetiAnkaraÜniversitesiBilgisayarMühendisliğiBölümBaşkanlığınaHediyemdir(b,s,i);
    return 0;
}

