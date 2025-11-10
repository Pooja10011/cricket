#include <stdio.h>
#include <string.h>

struct Player {
    char name[50];
    int runs;
    int wickets;
    int matches;
};

void addPlayer(struct Player *p) {
    printf("Enter Name: ");
    scanf("%49s", p->name);  // safer input to prevent overflow

    printf("Enter Runs: ");
    scanf("%d", &p->runs);

    printf("Enter Wickets: ");
    scanf("%d", &p->wickets);

    printf("Enter Matches: ");
    scanf("%d", &p->matches);
}

void displayPlayer(struct Player p) {
    printf("\nName: %s | Runs: %d | Wickets: %d | Matches: %d\n",
           p.name, p.runs, p.wickets, p.matches);
}

int main() {
    struct Player pl;

    addPlayer(&pl);
    displayPlayer(pl);

    return 0;
}


