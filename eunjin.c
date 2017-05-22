
int main(void)

{

    int grade[10];

    int i, j, sum, tmp;

    float average;


    for (i = 0; i < 10; i++) {

        printf("%d번째 성적을 입력하세요:", i);

        scanf("%d", &grade[i]);

    }



    for (i = sum = 0; i < 10; i++)

        sum+=grade[i];

    average = sum / 10.0;

    printf("성적 평균: %f\n", average);



    for (i = 0; i < 9; i++)

        for(j = 9; j > i; j--)

            if (grade[j-1] > grade[j]){

                tmp = grade[j-1];

                grade[j-1] = grade[j];

                grade[j] = tmp;

            }

    printf("성적순:");

    for(i=0; i<10; i++)

        printf("%d", grade[i]);

    printf("\n");

    return 0;

}
