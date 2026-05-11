#include <stdio.h>
#include <string.h>

typedef struct {
    int studentId;
    int number;
    char name[50];
    float grade;
} Student;

int main() {
    Student student1 = {2503, 203, "荒井里音", 85};
    Student student2 = {2501, 201, "逢沢紀乃", 85};
    Student student3 = {2502, 202, "青木千鶴", 85};

    printf("学籍番号=%d, 出席番号=%d, 名前=%s, 成績=%c\n", student1.studentId, student1.number, student1.name, student1.grade);
    printf("学籍番号=%d, 出席番号=%d, 名前=%s, 成績=%c\n", student2.studentId, student2.number, student2.name, student2.grade);
    printf("学籍番号=%d, 出席番号=%d, 名前=%s, 成績=%c\n", student3.studentId, student3.number, student3.name, student3.grade);

    return 0;
}
