#include <stdio.h>

struct character {
    char *name;
    int hp;
    int attack;
    int defense;
};

struct character hero = {"勇者", 120, 40, 25};
struct character wizard = {"魔法使い", 80, 60, 10};
struct character best_power = {"最強の魔法使いどれみ", 180, 200, 80};

int main() {
        printf("name=%s, HP=%d, 攻撃力=%d, 防御力=%d\n", hero.name, hero.hp, hero.attack, hero.defense);
        printf("name=%s, HP=%d, 攻撃力=%d, 防御力=%d\n", wizard.name, wizard.hp, wizard.attack, wizard.defense);
        printf("name=%s, HP=%d, 攻撃力%d, 防御力=%d\n", best_power.name, best_power.hp, best_power.attack, best_power.defense);
    return 0;
}
