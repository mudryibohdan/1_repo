int main() {
    //�������� 1
    //���������� ������ ��������
    const char CONST1 = '>';
    char Var1 = '7';
    char Var2;
    Var2 = 'R';
    //���������� ������ ����� �������
    const char CONST2 = 0x1a ; 
    char Var3 = 0x32; //2
    char Var4;
    Var4 = 0x63; //c
    //�������� 2
    //���������� ������ ���� int, float, unsigned short
    int A = 682;
    float B = -8.4e2;
    unsigned short C = 25921;
    //���� ������ double, int, char
    double D;
    int E;
    char F;
    //�� ��������� �������� ���������� ����:
    D = A;
    E = B;
    F = C;
    //�� ��������� ������ ���������� ����:
    D = (double)A;
    E = (int)B;
    F = (char)C;
    //�� ��������� ������ ��������
    double* pD;
    void* pV;
    pV = &A;
    pD = (double*)pV;
    D = *pD;

    int* pE;
    pV = &B;
    pE = (int*)pV;
    E = *pE;

    char* pF;
    pV = &C;
    pF = (char*)pV;
    F = *pF;

    int Z1;
    Z1 = 70;
    char Z2;
    Z2 = (char) Z1;
    void* Z3;
    Z3 = &Z1;
    Z2 = *(char*)Z3;

    
}