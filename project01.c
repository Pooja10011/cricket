#include <stdio.h>

#include <string.h>

struct Player (

char name [50];

}; int runs, int wickets; int matches:

void addPlayer(struct Player *p) {

printf("Enter Name: ");

scanf("ts", p->name);

printf("Enter Runs: ");

scanf("id", &p->runs);

printf("Enter Wickets: ");

scanf("d", &p->wickets);

printf("Enter Matches: ");

scanf("id", &p->matches);

void displayPlayer(struct Player p) (

printf("\nName: is Runs: id Wickets: id | Matches: id\n", p.name, p.runs, p.wickets, p.matches);

int main() {

}

struct Player pl; addPlayer(pl); displayPlayer(pl); return 0;
