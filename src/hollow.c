#include <stdio.h>
#include <windows.h>
int main()
{

    // һ ��C���Ա�������������
    // 1������ variable
    // = ��ֵ assign ��ֵ��ָ�����ݷŵ��ڴ�Ĺ���
    // 2����������
    // �������ͳ���ָ�����ݵĽ��ͷ�ʽ����ָ�������ݵĳ���
    // char �ַ���  1
    // short    ������ 2
    // int��integer�� ����   4
    // long     ������ 4
    // float    �����ȸ����� 4
    // double   ˫���ȸ����� 8
    // void     ������
    // 3���ܽ�
    // - �����Ǵ����ڴ��еģ����ڴ��д�ȡ����Ҫ��ȷ�������飺
    // ==> ���ݴ洢������?
    // ==> ���ݵĳ��ȣ�
    // ==> ���ݵĴ���ʽ��
    // �������������������˸��üǵ����֣��������������ݴ洢������
    // �������͸����������ݵĳ��Ⱥʹ���ʽ
    // -  ǿ�������� + ����������

    // ��������Ļ������������͵�����
    // 1��puts("output string"); // <output string> ֻ����������ַ��� ��puts �����ɺ���Զ�����
    puts("output""string""���"); // ���Խ�һ���ϳ����ַ����ָ�ɼ����϶̵��ַ�����������ʹ�ó��ı��ĸ�ʽ�������롣ֻ����ʽ�ϵķָ
    // 2��printf("printf"); // �������������С���������ַ����������ʽ�����Զ��塣 printf �����Զ����У�Ҫ�Լ���ӻ��з� \n
    // %d: ���һ��ʮ�������Ρ�d �� decimal �ļ�д����ʾ��ʮ������������ʽ���
    // %c�����һ���ַ���c �� character �ļ�д��
    // %s�����һ���ַ�����s �� string �ļ�д��
    // %f�����һ��С����f �� float �ļ�д��
    // ע���ַ���������˫����
    printf("printf\n");
    int abc = 999;
    printf("The value of abc is %d !\n", abc); // decimal ʮ���ơ�abc �滻ǰ��� %d
    int n = 100;
    char c = '@';  //�ַ��õ����Ű�Χ���ַ�����˫���Ű�Χ
    float money = 93.96;
    printf("n=%ds, c=%c, money=%f\n", n, c, money); // ǰ��һһ��Ӧ

    // ��������
    // short��int��long ��C�����г������������ͣ����� int ��Ϊ���ͣ�short ��Ϊ�����ͣ�long ��Ϊ�����͡�
    // int �ǻ������������ͣ�short �� long ���� int �Ļ����Ͻ��е���չ��short ���Խ�ʡ�ڴ棬long �������ɸ����ֵ��
    // 1�����͵ĳ���
    // һ����������ռ�õ��ֽ�������Ϊ���������͵ĳ��ȡ����磬short ռ�� 2 ���ֽڵ��ڴ棬��ô���ĳ��Ⱦ��� 2
    // C���Բ�û���ϸ�涨 short��int��long �ĳ��ȣ�ֻ���˿������ƣ�
    // - short ����ռ�� 2 ���ֽڡ�
    // - int ����Ϊһ�������ֳ���32 λ�����»����ֳ�Ϊ 4 �ֽڣ�64 λ�����»����ֳ�Ϊ 8 �ֽڡ�
    // - short �ĳ��Ȳ��ܴ��� int��long �ĳ��Ȳ���С�� int��
    // - 16 λ������(��Ƭ���͵ͼ�Ƕ��ʽϵͳ) : short(2) int(2) ��long(4)��
    // - 32 λ�� Windows��Linux �� Mac OS: short(2) int(4)  long(4)
    // - 64λ Win64��64λ Windows��:	short(2)	int(4)	long(4)
    // - 64λ ��Unixϵͳ������ Unix��Linux��Mac OS��BSD��Solaris �ȣ�:	short(2) int(4)	long(8)
    // �ܽ᣺ 2 �� short �� int �� long
    // sizeof ��������// ��ȡĳ���������͵ĳ��ȿ���ʹ�� sizeof �����������������Ǻ��������Բ���()������������������͵Ļ��ô���()
    short asize = 10;
    int bsize = 100;
    int short_length = sizeof asize; // �������Ļ�����ʡ��()
    int int_length = sizeof(bsize); 
    int long_length = sizeof(long);
    int char_length = sizeof(char);
    printf("short=%d, int=%d, long=%d, char=%d\n", short_length, int_length, long_length, char_length);

    // ��ͬ���͵����
    // ʹ�ò�ͬ�ĸ�ʽ���Ʒ����������ͬ���͵����������Ƿֱ��ǣ�
    // %hd������� short int ���ͣ�hd �� short decimal �ļ�д��
    // %d������� int ���ͣ�d �� decimal �ļ�д��
    // %ld������� long int ���ͣ�ld �� long decimal �ļ�д��
    short shortOut = 10;
    int intOut = 100;
    long longOut = 9437; // һ�����%dҲû�����ǵ����ݴ���int����ʱ���͵���%ld��.
    printf("shortOut=%hd, intOut=%d, longOut=%ld\n", shortOut, intOut, longOut);
    // �������ľ����Ƿֵȼ��ģ���ͬ�̶ȵķ��ձ����ֳ��˲�ͬ�ľ���ȼ�����ʹ��%d��� short �� long ���͵ķ��սϵͣ�
    // �����ı���������ֻ�Խϸ߷��յĲ����������棬��ô�˴���Ϳ�����������Ϣ��

    // �ġ������������˽�������ʮ���������ı�ʾ
    // =========end======================
    getch(); 
    system("pause");
}
