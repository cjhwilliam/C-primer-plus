/*�ö�����I/O�����������*/
#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

int main()
{
    double numbers[ARSIZE];
    double value;
    const char * file = "numbers.dat";
    int i;
    long pos;
    FILE *iofile;

    //����һ��double���͵�ֵ
    for (i = 0; i < ARSIZE; i++)
        numbers[i] = 100.0 * i + 1.0 / (i + 1);
    //try to open thr file
    if ((iofile = fopen(file, "wb")) == NULL)
    {
        fprintf(stderr, "could not open %s for output.\n", file);
        exit(EXIT_FAILURE);
    }
    //write array to the file in binary format
    fwrite(numbers, sizeof(double), ARSIZE, iofile);
    fclose(iofile);
    if ((iofile = fopen(file, "rb")) == NULL)
    {
        fprintf(stderr, "could not open %s for random access.\n", file);
        exit(EXIT_FAILURE);
    }
    //���ļ��ж�ȡѡ��������
    printf("enter an index in the range 0-%d.\n", ARSIZE - 1);
    while (scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
    {
        pos = (long) i * sizeof(double);   //����ƫ����
        fseek(iofile, pos, SEEK_SET);   //��λ���˴�
        fread(&value, sizeof(double), 1, iofile);
        printf("the value there is %f.\n", value);
        printf("next index (out of range to quit):\n");
    }
    //���
    fclose(iofile);
    puts("bye!");

    return 0;
}
